/*
 * XREFs of AlpcpCopyRequestData @ 0x14069EDA8
 * Callers:
 *     NtReadRequestData @ 0x14069E520 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x14069E644 (NtWriteRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        ULONG64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        ULONG64 a7)
{
  ULONG64 v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r13
  SIZE_T v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v15; // rdx
  signed int v16; // edi
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  char *v26; // r9
  _KPROCESS *v27; // r8
  char *v28; // rdx
  int v29; // esi
  ULONG_PTR v30; // r14
  char v31; // cl
  signed __int64 v32; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-80h] BYREF
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+58h] [rbp-70h] BYREF
  int v36[4]; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+80h] [rbp-48h]
  __int64 v39; // [rsp+90h] [rbp-38h]

  v7 = a3;
  *(_OWORD *)v36 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > MmUserProbeAddress || &Address[Length] < Address) )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    if ( v7 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v37 = *(_OWORD *)v7;
    v38 = *(_OWORD *)(v7 + 16);
    v39 = *(_QWORD *)(v7 + 32);
    v12 = (_QWORD *)a7;
    if ( a7 )
    {
      v13 = (_QWORD *)a7;
      if ( a7 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
    }
  }
  else
  {
    v37 = *(_OWORD *)a3;
    v38 = *(_OWORD *)(a3 + 16);
    v39 = *(_QWORD *)(a3 + 32);
    v12 = (_QWORD *)a7;
    v11 = Length;
  }
  if ( !WORD3(v37) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = AlpcpLookupMessage((__int64)Object, SDWORD2(v38), v39, &BugCheckParameter2);
    if ( v16 < 0 )
    {
LABEL_50:
      ObfDereferenceObject(Object);
      return v16;
    }
    v19 = *(_QWORD *)(BugCheckParameter2 + 32);
    if ( v19 )
    {
      v16 = -1073741811;
      v15 = BugCheckParameter2;
      v17 = *(unsigned __int16 *)(BugCheckParameter2 + 230);
      if ( (_WORD)v17 )
      {
        v18 = (__int16)v17 + 8;
        v20 = *(_QWORD *)(BugCheckParameter2 + 96);
        if ( v20 )
          v21 = *(_QWORD *)(v20 + 32) - 40LL;
        else
          v21 = 512LL;
        v15 = BugCheckParameter2;
        if ( v21 > *(unsigned __int16 *)(BugCheckParameter2 + 226) )
          v21 = *(unsigned __int16 *)(BugCheckParameter2 + 226);
        if ( v18 >= v21 )
          goto LABEL_39;
        v22 = (v21 - v18) >> 4;
        v18 = a4;
        if ( a4 >= v22 )
          goto LABEL_39;
        v23 = (unsigned int *)((__int16)v17 + BugCheckParameter2 + 224);
        if ( *v23 > a4 )
        {
          v18 = 2LL * a4;
          *(_OWORD *)v36 = *(_OWORD *)&v23[4 * a4 + 2];
          v16 = _mm_srli_si128(*(__m128i *)v36, 8).m128i_u32[0] < v11 ? 0xC000000D : 0;
        }
      }
      if ( v16 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          Process = CurrentThread->ApcState.Process;
          v26 = *(char **)v36;
          v27 = *(_KPROCESS **)(v19 + 544);
          v28 = Address;
        }
        else
        {
          v27 = CurrentThread->ApcState.Process;
          v26 = Address;
          v28 = *(char **)v36;
          Process = *(_KPROCESS **)(v19 + 544);
        }
        v16 = MmCopyVirtualMemory(Process, v28, v27, v26, v11, PreviousMode, &v35);
        if ( v16 >= 0 )
        {
          if ( v12 )
            *v12 = v35;
        }
      }
    }
    else
    {
      v16 = -1073741790;
    }
LABEL_39:
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2, v15, v17, v18);
    v29 = 0;
    v30 = BugCheckParameter2;
    v31 = *(_BYTE *)(BugCheckParameter2 - 32);
    if ( (v31 & 1) != 0 )
    {
      v29 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
      *(_BYTE *)(BugCheckParameter2 - 32) = v31 & 0xFE;
      *(_WORD *)(v30 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 - 16));
    KeAbPostRelease(v30 - 16);
    if ( v29 > 0 )
    {
      v32 = -v29 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 24), -v29);
      if ( v32 <= 0 )
      {
        if ( v32 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v32);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    goto LABEL_50;
  }
  return result;
}
