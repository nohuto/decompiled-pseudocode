/*
 * XREFs of imp_WdfCxVerifierKeBugCheck @ 0x1C00726B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
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
  __int64 Offset; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxObject *v11; // rcx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r8
  FxObject *pObject; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( Object )
  {
    v11 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Object & 1) != 0 )
    {
      Offset = LOWORD(v11->__vftable);
      v11 = (FxObject *)((char *)v11 - Offset);
    }
    if ( v11->m_Type == 4096 )
    {
      pObject = v11;
    }
    else
    {
      FxObjectHandleGetPtrQI(v11, (void **)&pObject, (void *)Object, 0x1000u, Offset);
      v11 = pObject;
    }
    m_Globals = v11->m_Globals;
  }
  else
  {
    m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  }
  v12 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  m_Globals->FxForceLogsInMiniDump = 1;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, v13, v12, BugCheckParameter4);
}
