/*
 * XREFs of NtAlpcSetInformation @ 0x14052C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14052CB7C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x14052CD28 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // di
  PVOID *v8; // rcx
  PVOID *v9; // r12
  int v10; // r13d
  signed int v11; // edi
  __int64 v12; // r9
  __int32 v13; // r14d
  __int32 v14; // r14d
  signed int v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int32 v19; // r14d
  __int32 v20; // r14d
  int v21; // r14d
  int v22; // r14d
  unsigned __int64 *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // r9
  ULONG_PTR v26; // rcx
  int v27; // edx
  int v28; // ecx
  int v29; // r14d
  unsigned __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rdi
  unsigned __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r14
  PVOID *v42; // rdx
  _QWORD *v43; // rcx
  __m128i v44; // xmm0
  KPROCESSOR_MODE v45; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID *v47; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  PVOID *v49; // [rsp+50h] [rbp-A8h]
  PVOID *v50; // [rsp+58h] [rbp-A0h]
  __int64 v51; // [rsp+60h] [rbp-98h] BYREF
  __int32 v52; // [rsp+68h] [rbp-90h]
  unsigned __int64 v53; // [rsp+6Ch] [rbp-8Ch]

  Handle = PortHandle;
  v47 = (PVOID *)PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortHandle
    || !v47
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v11 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  v8 = v47;
  v49 = v47;
  v9 = v47;
  v50 = v47;
  if ( Length && PreviousMode )
  {
    if ( Length > 0x48 )
    {
      v11 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v47 >= MmUserProbeAddress )
      v8 = (PVOID *)MmUserProbeAddress;
    v49 = v8;
    v47 = v8;
    memmove(&v51, v8, Length);
    v9 = (PVOID *)&v51;
    v50 = (PVOID *)&v51;
  }
  v10 = 1;
  v11 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v13 = PortInformationClass - 1;
    if ( !v13 )
    {
      if ( Length != 72 )
        goto LABEL_85;
      v27 = *(_DWORD *)v9;
      if ( (*(_DWORD *)v9 & 0xFE00FFFF) == 0 )
      {
        v28 = *((_DWORD *)Object + 64);
        if ( ((v28 ^ v27) & 0x40000) == 0 )
        {
          *((_DWORD *)Object + 64) = v27 | v28 & 0xFE00FFFF;
          goto LABEL_15;
        }
      }
      goto LABEL_83;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( Length == 16 )
      {
        v15 = AlpcpAssociateIoCompletionPort(Object, v9[1], *v9);
LABEL_14:
        v11 = v15;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_85:
      v11 = -1073741820;
      goto LABEL_15;
    }
    v19 = v14 - 3;
    if ( !v19 )
    {
      v11 = Length != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          if ( Length == 4 && *(_DWORD *)v9 )
          {
            v23 = (unsigned __int64 *)((char *)Object + 352);
            v24 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL, v12);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v23, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v23, v24, (ULONG_PTR)v23, v25);
            if ( v24 )
              *(_BYTE *)(v24 + 26) |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              AlpcpAdjustCompletionListConcurrencyCount(Object, *(unsigned int *)v50);
              v11 = 0;
            }
            else
            {
              v11 = -1073741811;
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v23, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v23);
            v26 = (ULONG_PTR)v23;
LABEL_34:
            KeAbPostRelease(v26);
            goto LABEL_15;
          }
          goto LABEL_83;
        }
        v29 = v22 - 1;
        if ( v29 )
        {
          if ( v29 == 1 && !Length )
          {
            v30 = (unsigned __int64 *)((char *)Object + 352);
            v31 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL, v12);
            v33 = v31;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
              ExfAcquirePushLockExclusiveEx(v30, v31, (ULONG_PTR)v30, v32);
            if ( v33 )
              *(_BYTE *)(v33 + 26) |= 1u;
            if ( *((_QWORD *)Object + 45) )
            {
              *((_DWORD *)Object + 104) &= ~0x10000u;
              v11 = 0;
            }
            else
            {
              v11 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v30);
            v26 = (ULONG_PTR)v30;
            goto LABEL_34;
          }
          goto LABEL_83;
        }
        if ( v45 )
          goto LABEL_83;
        ObfReferenceObject(*v49);
        v34 = (unsigned __int64 *)((char *)Object + 352);
        v39 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL, v38);
        v41 = v39;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
          ExfAcquirePushLockExclusiveEx(v34, v39, (ULONG_PTR)v34, v40);
        if ( v41 )
          *(_BYTE *)(v41 + 26) |= 1u;
        v42 = v47;
        v43 = Object;
        *((_QWORD *)Object + 46) = *v47;
        v43[47] = v42[1];
      }
      else
      {
        if ( Length )
          goto LABEL_83;
        v34 = (unsigned __int64 *)((char *)Object + 352);
        v35 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL, v12);
        v37 = v35;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
          ExfAcquirePushLockExclusiveEx(v34, v35, (ULONG_PTR)v34, v36);
        if ( v37 )
          *(_BYTE *)(v37 + 26) |= 1u;
        if ( *((_QWORD *)Object + 45) )
          AlpcpFreeCompletionList(Object);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v34);
      KeAbPostRelease((ULONG_PTR)v34);
      v11 = 0;
      goto LABEL_15;
    }
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( Length == 24 )
      {
        v10 = 0;
      }
      else
      {
        if ( Length != 16 )
          goto LABEL_83;
        v44 = *(__m128i *)v9;
        v9 = (PVOID *)&v51;
        v51 = v44.m128i_u32[0];
        v52 = v44.m128i_i32[1];
        v53 = _mm_srli_si128(v44, 8).m128i_u64[0];
      }
      v15 = AlpcpInitializeCompletionList(
              Object,
              *v9,
              *((unsigned int *)v9 + 2),
              *((unsigned int *)v9 + 3),
              *((_DWORD *)v9 + 4),
              v10);
      goto LABEL_14;
    }
LABEL_83:
    v11 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v11;
}
