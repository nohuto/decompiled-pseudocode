/*
 * XREFs of imp_WdfCxVerifierKeBugCheck @ 0x1C0067C80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall __noreturn imp_WdfCxVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r8
  FxObject *pObject; // [rsp+48h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( Object )
  {
    FxObjectHandleGetPtr(m_Globals, Object, 0x1000u, (void **)&pObject);
    m_Globals = pObject->m_Globals;
  }
  v10 = BugCheckParameter4;
  v11 = BugCheckParameter3;
  v12 = BugCheckParameter2;
  m_Globals->FxForceLogsInMiniDump = 1;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, v12, v11, v10);
}
