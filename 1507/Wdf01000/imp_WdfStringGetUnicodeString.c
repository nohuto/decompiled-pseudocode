/*
 * XREFs of imp_WdfStringGetUnicodeString @ 0x1C002D830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfStringGetUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 String,
        _UNICODE_STRING *UnicodeString)
{
  FxString *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  FxString *pString; // [rsp+68h] [rbp+20h] BYREF

  if ( !String )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1007uLL);
  v4 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (String & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxString *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4103 )
  {
    pString = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pString, (void *)String, 0x1007u, Offset);
    v4 = pString;
  }
  m_Globals = v4->m_Globals;
  if ( !UnicodeString )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v9 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v9,
      m_Globals->Public.DriverName,
      (const char *)&v9);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    *UnicodeString = v4->m_UnicodeString;
  }
}
