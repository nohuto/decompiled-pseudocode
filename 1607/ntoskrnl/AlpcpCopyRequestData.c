/*
 * XREFs of AlpcpCopyRequestData @ 0x1406552E4
 * Callers:
 *     NtReadRequestData @ 0x140654AC0 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x140654BB0 (NtWriteRequestData.c)
 * Callees:
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsDereferencePrimaryToken @ 0x1404C4BF8 (PsDereferencePrimaryToken.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  unsigned __int64 v7; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  unsigned __int64 v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  __int64 *v16; // rcx
  NTSTATUS result; // eax
  signed int v18; // ebx
  __int64 v19; // r10
  __int16 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v27; // r9
  _KPROCESS *v28; // r8
  char *v29; // rdx
  ULONG_PTR v30; // [rsp+48h] [rbp-70h] BYREF
  PVOID PrimaryToken; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h] BYREF
  __m128i v33; // [rsp+60h] [rbp-58h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+80h] [rbp-38h]
  __int64 v36; // [rsp+90h] [rbp-28h]

  v7 = a4;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  HandleInformation = 0LL;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v34, 0);
    v15 = a7;
    if ( a7 )
    {
      v16 = a7;
      if ( a7 >= v14 )
        v16 = v14;
      *v16 = *v16;
    }
  }
  else
  {
    v34 = *(_OWORD *)a3;
    v35 = *(_OWORD *)(a3 + 16);
    v36 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v34) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &PrimaryToken, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)PrimaryToken, SDWORD2(v35), v36, &v30);
    if ( v18 < 0 )
    {
LABEL_38:
      PsDereferencePrimaryToken(PrimaryToken);
      return v18;
    }
    v19 = *(_QWORD *)(v30 + 32);
    if ( v19 )
    {
      v18 = -1073741811;
      v20 = *(_WORD *)(v30 + 238);
      if ( v20 )
      {
        v21 = v20 + 8;
        v22 = *(_QWORD *)(v30 + 96);
        if ( v22 )
          v23 = *(_QWORD *)(v22 + 32) - 40LL;
        else
          v23 = 512LL;
        if ( v23 > *(unsigned __int16 *)(v30 + 234) )
          v23 = *(unsigned __int16 *)(v30 + 234);
        if ( v21 >= v23 || v7 >= (v23 - v21) >> 4 )
          goto LABEL_37;
        v24 = v30 + v20;
        if ( *(_DWORD *)(v24 + 232) > (unsigned int)v7 )
        {
          v33 = *(__m128i *)(v24 + 16 * v7 + 240);
          v18 = _mm_srli_si128(v33, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
        }
      }
      if ( v18 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          Process = CurrentThread->ApcState.Process;
          v27 = v33.m128i_i64[0];
          v28 = *(_KPROCESS **)(v19 + 544);
          v29 = Address;
        }
        else
        {
          v28 = CurrentThread->ApcState.Process;
          v27 = (unsigned __int64)Address;
          v29 = (char *)v33.m128i_i64[0];
          Process = *(_KPROCESS **)(v19 + 544);
        }
        v18 = MmCopyVirtualMemory(Process, v29, v28, v27, v13, PreviousMode, (unsigned __int64 *)&v32);
        if ( v18 >= 0 )
        {
          if ( v15 )
            *v15 = v32;
        }
      }
    }
    else
    {
      v18 = -1073741790;
    }
LABEL_37:
    AlpcpUnlockMessage(v30);
    goto LABEL_38;
  }
  return result;
}
