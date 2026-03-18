/*
 * XREFs of NtReplaceKey @ 0x140651088
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *v19; // rax
  NTSTATUS v20; // edi
  struct _KTHREAD *v21; // rdx
  __int16 v22; // cx
  bool v23; // zf
  unsigned __int64 v24; // rax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  void *v27; // r8
  __int16 v28; // cx
  _QWORD *v29; // rdi
  struct _KTHREAD *v30; // rax
  PVOID v31; // rsi
  unsigned int v32; // eax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  unsigned __int64 v37; // rtt
  __int16 v38; // ax
  _QWORD v39[2]; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING v40; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING v41; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v42[7]; // [rsp+68h] [rbp-1h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
  v11 = CmCheckNoTxContext();
  if ( v11 < 0 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( v14 )
      return v11;
    goto LABEL_59;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v16 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v16 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741727;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v20 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v40);
  if ( v20 >= 0 )
  {
    v20 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v41);
    if ( v20 >= 0 )
    {
      v11 = CmObReferenceObjectByHandle(Key, 0, v27, PreviousMode, &Object, 0LL);
      if ( v11 >= 0 )
      {
        v29 = Object;
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
        {
          memset(v42, 0, 48);
          v39[1] = v39;
          v39[0] = v39;
          v30 = KeGetCurrentThread();
          --v30->KernelApcDisable;
          v31 = Object;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v42[0] = v31;
            v42[1] = &v41;
            v42[2] = &v40;
            v11 = CmpCallCallBacks(0x2Du, (__int64)v42, 1, 46LL, 0LL, (__int64)v39);
          }
          if ( v11 < 0 )
          {
            if ( v11 == -1073740541 )
              v11 = 0;
          }
          else
          {
            v32 = CmReplaceKey(*(_QWORD *)(v29[1] + 32LL));
            v11 = CmPostCallbackNotification(46, (__int64)v31, v32, (__int64)v42, v39);
          }
          v33 = KeGetCurrentThread();
          v34 = v33->KernelApcDisable + 1;
          v33->KernelApcDisable = v34;
          if ( !v34
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
            && !v33->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        else
        {
          v11 = -1073741790;
        }
        ObfDereferenceObject(Object);
      }
      ExFreePoolWithTag(v41.Buffer, 0);
      ExFreePoolWithTag(v40.Buffer, 0);
      v35 = KeGetCurrentThread();
      v36 = v35->KernelApcDisable + 1;
      v35->KernelApcDisable = v36;
      if ( !v36
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
        && !v35->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      _m_prefetchw(&CmpShutdownRundown);
      v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v37 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v13 = KeGetCurrentThread();
      v38 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v38;
      if ( v38 )
        return v11;
LABEL_59:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v11;
    }
    ExFreePoolWithTag(v40.Buffer, 0);
    v21 = KeGetCurrentThread();
    v28 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v28;
    if ( v28 )
      goto LABEL_27;
    v23 = v21->ApcState.ApcListHead[0].Flink == v21->ApcState.ApcListHead;
    goto LABEL_24;
  }
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22 )
  {
    v23 = v21->ApcState.ApcListHead[0].Flink == v21->ApcState.ApcListHead;
LABEL_24:
    if ( !v23 && !v21->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
  }
LABEL_27:
  v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  _m_prefetchw(&CmpShutdownRundown);
  if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownRundown, v24 - 2, v24) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v20;
}
