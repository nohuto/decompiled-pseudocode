/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1C00B7C70
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00B7D30 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00B7E60 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00B7EF0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00B8020 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00B80B0 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00B81E0 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00B8260 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00B82E0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00B8370 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00B84A0 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00B8520 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00B85A0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00B8620 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00B86A0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00B8720 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00B87A0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00B8840 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00B88E0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00B8960 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00B8B10 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00B8CD0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00B8E90 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00B9040 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00B90C0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00B91B0 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C00327A8 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
