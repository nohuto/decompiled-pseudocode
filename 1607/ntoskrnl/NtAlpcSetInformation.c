/*
 * XREFs of NtAlpcSetInformation @ 0x140471BA8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1404719FC (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1404B4690 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // esi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v9; // r13
  __int64 *v10; // r12
  signed int v11; // edi
  __int32 v12; // r14d
  __int32 v13; // r14d
  signed int v14; // eax
  __int32 v16; // r14d
  __int32 v17; // r14d
  int v18; // r14d
  int v19; // r14d
  unsigned __int64 *v20; // rbx
  __int64 v21; // rdi
  ULONG_PTR v22; // rcx
  int v23; // r14d
  unsigned __int64 *v24; // r14
  _BYTE *v25; // rax
  _BYTE *v26; // rdi
  unsigned __int64 *v27; // rdi
  _BYTE *v28; // rax
  _BYTE *v29; // r14
  _BYTE *v30; // rax
  _BYTE *v31; // r14
  __int64 *v32; // rdx
  _QWORD *v33; // rcx
  __m128i v34; // xmm0
  int v35; // edx
  KPROCESSOR_MODE v36; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  __int64 *v38; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned int *v40; // [rsp+50h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-98h] BYREF
  __int32 v42; // [rsp+68h] [rbp-90h]
  unsigned __int64 v43; // [rsp+6Ch] [rbp-8Ch]

  Handle = PortHandle;
  v38 = (__int64 *)PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  if ( !PortHandle
    || !v38
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v11 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  v9 = (__int64)v38;
  v10 = v38;
  v40 = (unsigned int *)v38;
  if ( Length && PreviousMode )
  {
    if ( Length > 0x48 )
    {
      v11 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v38 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v38 = (__int64 *)v9;
    memmove(&v41, (const void *)v9, Length);
    v10 = &v41;
    v40 = (unsigned int *)&v41;
    PortHandle = Handle;
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = PortInformationClass - 1;
    if ( !v12 )
    {
      if ( Length != 72 )
        goto LABEL_79;
      v35 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 0xFC00FFFF) == 0 && ((v35 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v35 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_73;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( Length == 16 )
      {
        v14 = AlpcpAssociateIoCompletionPort(Object, (void *)v10[1], *v10);
LABEL_14:
        v11 = v14;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_79:
      v11 = -1073741820;
      goto LABEL_15;
    }
    v16 = v13 - 3;
    if ( !v16 )
    {
      v11 = Length != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( Length == 4 && *(_DWORD *)v10 )
          {
            v20 = (unsigned __int64 *)((char *)Object + 352);
            v21 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
            if ( v21 )
              *(_BYTE *)(v21 + 26) |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              AlpcpAdjustCompletionListConcurrencyCount(Object, *v40);
              v11 = 0;
            }
            else
            {
              v11 = -1073741811;
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v20);
            v22 = (ULONG_PTR)v20;
LABEL_32:
            KeAbPostRelease(v22);
            goto LABEL_15;
          }
          goto LABEL_73;
        }
        v23 = v19 - 1;
        if ( v23 )
        {
          if ( v23 == 1 && !Length )
          {
            v24 = (unsigned __int64 *)((char *)Object + 352);
            v25 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0);
            v26 = v25;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
              ExfAcquirePushLockExclusiveEx(v24, v25, (ULONG_PTR)v24);
            if ( v26 )
              v26[26] |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              *((_DWORD *)Object + 104) &= ~0x10000u;
              v11 = 0;
            }
            else
            {
              v11 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v24);
            v22 = (ULONG_PTR)v24;
            goto LABEL_32;
          }
          goto LABEL_73;
        }
        if ( v36 )
          goto LABEL_73;
        ObfReferenceObject(*(PVOID *)v9);
        v27 = (unsigned __int64 *)((char *)Object + 352);
        v30 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
          ExfAcquirePushLockExclusiveEx(v27, v30, (ULONG_PTR)v27);
        if ( v31 )
          v31[26] |= 1u;
        v32 = v38;
        v33 = Object;
        *((_QWORD *)Object + 46) = *v38;
        v33[47] = v32[1];
      }
      else
      {
        if ( Length )
          goto LABEL_73;
        v27 = (unsigned __int64 *)((char *)Object + 352);
        v28 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0);
        v29 = v28;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
          ExfAcquirePushLockExclusiveEx(v27, v28, (ULONG_PTR)v27);
        if ( v29 )
          v29[26] |= 1u;
        if ( *((_QWORD *)Object + 45) )
          AlpcpFreeCompletionList(Object);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v27);
      KeAbPostRelease((ULONG_PTR)v27);
      v11 = 0;
      goto LABEL_15;
    }
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( Length != 24 )
      {
        if ( Length != 16 )
          goto LABEL_73;
        v34 = *(__m128i *)v10;
        v10 = &v41;
        v41 = v34.m128i_u32[0];
        v42 = v34.m128i_i32[1];
        v43 = _mm_srli_si128(v34, 8).m128i_u64[0];
        v7 = 1;
      }
      v14 = AlpcpInitializeCompletionList(
              Object,
              *v10,
              *((unsigned int *)v10 + 2),
              *((unsigned int *)v10 + 3),
              *((_DWORD *)v10 + 4),
              v7);
      goto LABEL_14;
    }
LABEL_73:
    v11 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegion();
  return v11;
}
