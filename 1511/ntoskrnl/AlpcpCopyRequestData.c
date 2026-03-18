/*
 * XREFs of AlpcpCopyRequestData @ 0x14061FF58
 * Callers:
 *     NtReadRequestData @ 0x14061F738 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x14061F828 (NtWriteRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        ULONG64 a7)
{
  __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r9
  size_t v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  NTSTATUS result; // eax
  signed int v17; // ebx
  ULONG_PTR v18; // rcx
  __int64 v19; // r10
  __int16 v20; // ax
  ULONG_PTR v21; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  char *v24; // r9
  ULONG_PTR v25; // r8
  char *v26; // rdx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v29; // [rsp+58h] [rbp-60h] BYREF
  int v30[4]; // [rsp+60h] [rbp-58h]
  __m128i v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp-28h]

  v7 = a4;
  *(_OWORD *)v30 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  HandleInformation = 0LL;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > MmUserProbeAddress || &Address[Length] < Address) )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader((__m128i *)a3, (__int64)&v31, 0);
    v14 = (_QWORD *)a7;
    if ( a7 )
    {
      v15 = (_QWORD *)a7;
      if ( a7 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
  }
  else
  {
    v31 = *(__m128i *)a3;
    v32 = *(_OWORD *)(a3 + 16);
    v33 = *(_QWORD *)(a3 + 32);
    v14 = (_QWORD *)a7;
    v13 = Length;
  }
  if ( !v31.m128i_i16[3] )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v17 = AlpcpLookupMessage((__int64)Object, DWORD2(v32), v33, &v29);
    if ( v17 >= 0 )
    {
      v18 = v29;
      v19 = *(_QWORD *)(v29 + 32);
      if ( v19 )
      {
        v17 = -1073741811;
        v20 = *(_WORD *)(v29 + 230);
        if ( v20 )
        {
          v21 = v29 + v20;
          if ( *(_DWORD *)(v21 + 224) > (unsigned int)v7 )
          {
            *(_OWORD *)v30 = *(_OWORD *)(v21 + 16 * v7 + 232);
            v17 = _mm_srli_si128(*(__m128i *)v30, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
          }
        }
        if ( v17 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a1 )
          {
            Process = CurrentThread->ApcState.Process;
            v24 = *(char **)v30;
            v25 = *(_QWORD *)(v19 + 544);
            v26 = Address;
          }
          else
          {
            v25 = (ULONG_PTR)CurrentThread->ApcState.Process;
            v24 = Address;
            v26 = *(char **)v30;
            Process = *(_KPROCESS **)(v19 + 544);
          }
          v17 = MmCopyVirtualMemory(Process, v26, v25, v24, v13, PreviousMode, &v28);
          if ( v17 >= 0 )
          {
            if ( v14 )
              *v14 = v28;
          }
          v18 = v29;
        }
        AlpcpUnlockMessage(v18);
      }
      else
      {
        AlpcpUnlockMessage(v29);
        v17 = -1073741790;
      }
    }
    ObfDereferenceObject(Object);
    return v17;
  }
  return result;
}
