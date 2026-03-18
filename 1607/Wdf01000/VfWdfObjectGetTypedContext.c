/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1C00C6C90
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C6D50 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C6E80 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C6F10 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C7040 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C70D0 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C7200 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C7280 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C7300 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C7390 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C74C0 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C7540 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C75C0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C7640 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C76C0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C7740 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C77C0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C7860 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C7900 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C7980 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C7B30 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C7CF0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C7EB0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C8060 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C80E0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C81D0 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C0036F48 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall VfWdfObjectGetTypedContext(unsigned __int64 Handle, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **v2; // r8
  unsigned __int16 v4; // ax
  char *v5; // rax
  char *_a1; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v2 = (_FX_DRIVER_GLOBALS **)((char *)v2 - *(unsigned __int16 *)v2);
  if ( !Handle )
    FxVerifierNullBugCheck(v2[2], retaddr);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(v2[2], retaddr);
  v4 = *((_WORD *)v2 + 5);
  if ( v4 && (v5 = (char *)v2 + v4) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v5 + 4) != TypeInfo )
    {
      v5 = (char *)*((_QWORD *)v5 + 1);
      if ( !v5 )
        goto LABEL_11;
    }
    return v5 + 48;
  }
  else
  {
LABEL_11:
    _a1 = "<no typename given>";
    if ( TypeInfo->ContextName )
      _a1 = TypeInfo->ContextName;
    WPP_IFR_SF_sq(v2[2], 3u, 0x12u, 0xAu, WPP_Verifier_cpp_Traceguids, _a1, (const void *)Handle);
    return 0LL;
  }
}
