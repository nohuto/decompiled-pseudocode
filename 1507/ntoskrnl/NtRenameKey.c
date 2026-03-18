/*
 * XREFs of NtRenameKey @ 0x140650A88
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  void *v2; // r8
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  BOOLEAN v8; // bl
  struct _KTHREAD *v9; // rdx
  __int16 v10; // cx
  char v12; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  int v14; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v16; // rdx
  unsigned __int16 v17; // cx
  _WORD *v18; // rbx
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  unsigned int v22; // eax
  int v23; // esi
  void *v24; // r8
  struct _KTHREAD *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned __int64 v34; // rtt
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  unsigned __int64 v37; // rtt
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  PVOID Object[2]; // [rsp+30h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-A8h] BYREF
  PVOID P; // [rsp+50h] [rbp-98h]
  _QWORD v43[3]; // [rsp+58h] [rbp-90h] BYREF
  __int128 v44; // [rsp+70h] [rbp-78h]
  _QWORD v45[6]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-38h] BYREF
  int v47; // [rsp+108h] [rbp+20h] BYREF

  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  v5 = 0;
  v47 = 0;
  memset(v45, 0, 40);
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v8 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v8 )
    {
      v9 = KeGetCurrentThread();
      v10 = v9->KernelApcDisable + 1;
      v9->KernelApcDisable = v10;
      if ( !v10
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
        && !v9->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v8 )
      return -1073741431;
  }
  v12 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)NewName >= MmUserProbeAddress )
      NewName = (PUNICODE_STRING)MmUserProbeAddress;
    v14 = *(_DWORD *)&NewName->Length;
    LODWORD(v44) = v14;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v44 + 1) = Buffer;
    *(_OWORD *)Src = v44;
    if ( (_WORD)v14 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (ULONG64)Buffer + (unsigned __int16)v14;
      if ( v16 > MmUserProbeAddress || v16 < (unsigned __int64)Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v17 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v18 = Src[1], !*(_WORD *)Src[1]) )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v34 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v34 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741811;
  }
  else
  {
    if ( PreviousMode == 1 )
    {
      P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x426E4D43u);
      if ( !P )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v19 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v19 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable + 1;
        v20->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return -1073741670;
      }
      v18 = P;
      memmove(P, Src[1], LOWORD(Src[0]));
      Src[1] = P;
      v17 = (unsigned __int16)Src[0];
    }
    v22 = 0;
    if ( v17 )
    {
      while ( *v18 != 92 )
      {
        ++v18;
        v22 += 2;
        if ( v22 >= v17 )
          goto LABEL_37;
      }
      v23 = -1073741811;
    }
    else
    {
LABEL_37:
      v23 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v2, PreviousMode, Object, 0LL);
      if ( v23 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(&v47) )
      {
        v23 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v24, PreviousMode, Object, 0LL);
        if ( v23 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
        {
          ObfDereferenceObject(Object[0]);
          v23 = -1073741790;
        }
        v5 = 1;
      }
      if ( v23 >= 0 )
      {
        v43[1] = v43;
        v43[0] = v43;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v45[0] = Object[0];
          v45[1] = Src;
          v23 = CmpCallCallBacks(4u, (__int64)v45, 1, 19LL, (__int64)Object[0], (__int64)v43);
        }
        if ( v23 < 0 )
        {
          if ( v23 == -1073740541 )
            v23 = 0;
        }
        else
        {
          CmpLockRegistryExclusive();
          v26 = Object[0];
          CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object[0] + 1), 0LL, 1);
          if ( (*(_DWORD *)(v26[1] + 4LL) & 0x180) != 0 )
          {
            v23 = -1073741790;
          }
          else
          {
            if ( v5 )
            {
              LOBYTE(v27) = PreviousMode;
              v23 = CmKeyBodyReplicateToVirtual(Object, v27, 131078LL, &v47);
            }
            if ( v23 >= 0 )
            {
              _m_prefetchw(&CmpShutdownRundown);
              v29 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v29 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&CmpShutdownRundown,
                            (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                            CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v30 = KeGetCurrentThread();
              v31 = v30->KernelApcDisable + 1;
              v30->KernelApcDisable = v31;
              if ( !v31
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
                && !v30->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v12 = 0;
              v46 = *(_OWORD *)Src;
              LOBYTE(v28) = PreviousMode;
              v23 = CmRenameKey(Object[0], &v46, v28);
            }
          }
          CmpUnlockRegistry();
          v23 = CmPostCallbackNotification(19, (__int64)Object[0], v23, (__int64)v45, v43);
        }
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Object[0]);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v12 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v37 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v38 = KeGetCurrentThread();
      v39 = v38->KernelApcDisable + 1;
      v38->KernelApcDisable = v39;
      if ( !v39
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
        && !v38->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return v23;
  }
}
