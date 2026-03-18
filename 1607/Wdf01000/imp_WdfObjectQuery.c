/*
 * XREFs of imp_WdfObjectQuery @ 0x1C007BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectQuery(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        const _GUID *Guid,
        unsigned int QueryBufferLength)
{
  FxObject *p; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], Object, 0x1000u, (void **)&p);
  return 3221226021LL;
}
