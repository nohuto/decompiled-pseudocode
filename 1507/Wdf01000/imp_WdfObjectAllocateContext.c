/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x1C0023140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  const void *_a1; // r10
  FxObject *v5; // rcx
  unsigned int v6; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]

  _a1 = (const void *)Handle;
  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Handle) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Handle = LOWORD(v5->__vftable);
    v5 = (FxObject *)((char *)v5 - Handle);
  }
  if ( (_WORD)Handle )
  {
    v6 = -1073741767;
    WPP_IFR_SF_qd(v5->m_Globals, 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, -1073741767);
  }
  else
  {
    return (unsigned int)FxObjectAllocateContext(v5, Attributes, 0, Context);
  }
  return v6;
}
