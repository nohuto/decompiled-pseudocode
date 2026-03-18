/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1C00CDE0C
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00CDED0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00CE0A0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00CE180 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00CE350 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00CE430 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00CE600 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00CE6D0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00CE7A0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00CE870 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00CEA40 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00CEB10 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00CEBE0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00CECB0 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00CED80 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00CEE50 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00CEF20 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00CF000 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00CF0E0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00CF1B0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00CF3E0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00CF630 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00CF880 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00CFAB0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00CFB80 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00CFE00 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C000118C (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
