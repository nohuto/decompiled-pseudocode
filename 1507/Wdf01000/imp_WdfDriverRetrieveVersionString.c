/*
 * XREFs of imp_WdfDriverRetrieveVersionString @ 0x1C0072BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C000FF70 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        unsigned __int64 String)
{
  FxDriver *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxString *v9; // rcx
  __int64 v10; // rdx
  const wchar_t *v11; // rdx
  FxString *pString; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDriver *pDriver; // [rsp+78h] [rbp+20h] BYREF

  if ( !Driver )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1001uLL);
  v4 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Driver & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxDriver *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4097 )
  {
    pDriver = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pDriver, (void *)Driver, 0x1001u, Offset);
    v4 = pDriver;
  }
  m_Globals = v4->m_Globals;
  if ( !String )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    v9 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v10) = 0;
    if ( (String & 1) != 0 )
    {
      v10 = LOWORD(v9->__vftable);
      v9 = (FxString *)((char *)v9 - v10);
    }
    if ( v9->m_Type == 4103 )
    {
      pString = v9;
    }
    else
    {
      FxObjectHandleGetPtrQI(v9, (void **)&pString, (void *)String, 0x1007u, v10);
      v9 = pString;
    }
    v11 = L"Kernel Mode Driver Framework (verifier on) version 01.015.0";
    if ( !m_Globals->FxVerifierOn )
      v11 = L"Kernel Mode Driver Framework version 01.015.0";
    return FxString::Assign(v9, v11);
  }
}
