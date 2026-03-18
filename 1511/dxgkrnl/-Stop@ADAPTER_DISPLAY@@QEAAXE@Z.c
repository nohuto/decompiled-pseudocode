/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C012F518
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC714 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(PERESOURCE **this, char a2)
{
  DXGFASTMUTEX *v3; // rdi
  __int64 **v4; // rbx
  __int64 *i; // rax

  if ( !a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this, (PERESOURCE **)this[2][249]);
    v3 = (DXGFASTMUTEX *)(this + 3);
    DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)this + 3);
    v4 = (__int64 **)(this + 11);
    for ( i = *v4; i != (__int64 *)v4 && i; i = (__int64 *)*i )
      *((_DWORD *)i + 14) = 0;
    DXGFASTMUTEX::Release(v3);
  }
}
