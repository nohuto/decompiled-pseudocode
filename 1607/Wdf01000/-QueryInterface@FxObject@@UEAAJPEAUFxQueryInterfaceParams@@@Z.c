/*
 * XREFs of ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001BF70
 * Callers:
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C000DBA0 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C000E6F0 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0020DC0 (-QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0062DB0 (-QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007A250 (-QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007B780 (-QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0090770 (-QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
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
