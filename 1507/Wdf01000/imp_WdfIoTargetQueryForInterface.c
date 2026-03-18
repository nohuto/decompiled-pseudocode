/*
 * XREFs of imp_WdfIoTargetQueryForInterface @ 0x1C0082FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C006AB20 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  FxIoTarget *v9; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  unsigned int v15; // ebx
  FxIoTarget *pTarget; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  v9 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (IoTarget & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxIoTarget *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4608 )
  {
    pTarget = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pTarget, (void *)IoTarget, 0x1200u, Offset);
    v9 = pTarget;
  }
  m_Globals = v9->m_Globals;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(v9->m_TargetDevice);
    v15 = FxQueryInterface::_QueryForInterface(
            AttachedDeviceReference,
            InterfaceType,
            Interface,
            Size,
            Version,
            InterfaceSpecificData);
    ObfDereferenceObject(AttachedDeviceReference);
    return v15;
  }
}
