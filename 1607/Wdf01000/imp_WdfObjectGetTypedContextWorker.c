/*
 * XREFs of imp_WdfObjectGetTypedContextWorker @ 0x1C000F0A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C0036F48 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  unsigned __int16 *v3; // rcx
  _FX_DRIVER_GLOBALS *v4; // r10
  unsigned __int16 v5; // ax
  char *v6; // rax
  char *_a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v3 = (unsigned __int16 *)((char *)v3 - *v3);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(*((_FX_DRIVER_GLOBALS **)v3 + 2), retaddr);
  v5 = v3[5];
  if ( v5 && (v6 = (char *)v3 + v5) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v6 + 4) != TypeInfo )
    {
      v6 = (char *)*((_QWORD *)v6 + 1);
      if ( !v6 )
        goto LABEL_10;
    }
    return v6 + 48;
  }
  else
  {
LABEL_10:
    _a1 = "<no typename given>";
    if ( TypeInfo->ContextName )
      _a1 = TypeInfo->ContextName;
    WPP_IFR_SF_sq(v4, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, _a1, (const void *)Handle);
    return 0LL;
  }
}
