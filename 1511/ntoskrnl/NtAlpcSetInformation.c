/*
 * XREFs of NtAlpcSetInformation @ 0x14044FF74
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14044FDB4 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140483368 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404C584C (AlpcpFreeCompletionList.c)
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
  PVOID *v9; // r13
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
  int v23; // edx
  int v24; // r14d
  unsigned __int64 *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r14
  PVOID *v33; // rdx
  _QWORD *v34; // rcx
  __m128i v35; // xmm0
  KPROCESSOR_MODE v36; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID *v38; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  PVOID *v40; // [rsp+50h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-98h] BYREF
  __int32 v42; // [rsp+68h] [rbp-90h]
  unsigned __int64 v43; // [rsp+6Ch] [rbp-8Ch]

  Handle = PortHandle;
  v38 = (PVOID *)PortInformation;
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
  v9 = v38;
  v10 = (__int64 *)v38;
  v40 = v38;
  if ( Length && PreviousMode )
  {
    if ( Length > 0x48 )
    {
      v11 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v38 >= MmUserProbeAddress )
      v9 = (PVOID *)MmUserProbeAddress;
    v38 = v9;
    memmove(&v41, v9, Length);
    v10 = &v41;
    v40 = (PVOID *)&v41;
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
      v23 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 0xFE00FFFF) == 0 && ((v23 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v23 | *((_DWORD *)Object + 64) & 0xFE00FFFF;
        goto LABEL_15;
      }
      goto LABEL_77;
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
            v21 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
            if ( v21 )
              *(_BYTE *)(v21 + 26) |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              AlpcpAdjustCompletionListConcurrencyCount(Object, *(unsigned int *)v40);
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
          goto LABEL_77;
        }
        v24 = v19 - 1;
        if ( v24 )
        {
          if ( v24 == 1 && !Length )
          {
            v25 = (unsigned __int64 *)((char *)Object + 352);
            v26 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL);
            v27 = v26;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
              ExfAcquirePushLockExclusiveEx(v25, v26, (ULONG_PTR)v25);
            if ( v27 )
              *(_BYTE *)(v27 + 26) |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              *((_DWORD *)Object + 104) &= ~0x10000u;
              v11 = 0;
            }
            else
            {
              v11 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v25);
            v22 = (ULONG_PTR)v25;
            goto LABEL_32;
          }
          goto LABEL_77;
        }
        if ( v36 )
          goto LABEL_77;
        ObfReferenceObject(*v9);
        v28 = (unsigned __int64 *)((char *)Object + 352);
        v31 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL);
        v32 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
          ExfAcquirePushLockExclusiveEx(v28, v31, (ULONG_PTR)v28);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        v33 = v38;
        v34 = Object;
        *((_QWORD *)Object + 46) = *v38;
        v34[47] = v33[1];
      }
      else
      {
        if ( Length )
          goto LABEL_77;
        v28 = (unsigned __int64 *)((char *)Object + 352);
        v29 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL);
        v30 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
          ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        if ( *((_QWORD *)Object + 45) )
          AlpcpFreeCompletionList();
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v28);
      KeAbPostRelease((ULONG_PTR)v28);
      v11 = 0;
      goto LABEL_15;
    }
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( Length != 24 )
      {
        if ( Length != 16 )
          goto LABEL_77;
        v35 = *(__m128i *)v10;
        v10 = &v41;
        v41 = v35.m128i_u32[0];
        v42 = v35.m128i_i32[1];
        v43 = _mm_srli_si128(v35, 8).m128i_u64[0];
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
LABEL_77:
    v11 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegion();
  return v11;
}
