/*
 * XREFs of ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0023070
 * Callers:
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00027E0 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0006010 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001FA30 (-QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00556D0 (-QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C006B8D0 (-QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C006D060 (-QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0082800 (-QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::QueryInterface(FxObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
