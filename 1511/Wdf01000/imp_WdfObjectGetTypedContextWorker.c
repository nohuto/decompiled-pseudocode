/*
 * XREFs of imp_WdfObjectGetTypedContextWorker @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C00327A8 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **v3; // rax
  unsigned __int16 v4; // cx
  char *v5; // rcx
  char *_a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v3 = (_FX_DRIVER_GLOBALS **)((char *)v3 - *(unsigned __int16 *)v3);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(v3[2], retaddr);
  v4 = *((_WORD *)v3 + 5);
  if ( v4 && (v5 = (char *)v3 + v4) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v5 + 4) != TypeInfo )
    {
      v5 = (char *)*((_QWORD *)v5 + 1);
      if ( !v5 )
        goto LABEL_10;
    }
    return v5 + 48;
  }
  else
  {
LABEL_10:
    _a1 = "<no typename given>";
    if ( TypeInfo->ContextName )
      _a1 = TypeInfo->ContextName;
    WPP_IFR_SF_sq(v3[2], 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, _a1, (const void *)Handle);
    return 0LL;
  }
}
