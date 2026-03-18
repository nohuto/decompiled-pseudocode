/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0128EB4
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(PERESOURCE **this, char a2)
{
  struct _KTHREAD **v3; // rdi
  __int64 **v4; // rbx
  __int64 *i; // rax

  if ( !a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this, (PERESOURCE **)this[2][248]);
    v3 = (struct _KTHREAD **)(this + 3);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 3));
    v4 = (__int64 **)(this + 8);
    for ( i = *v4; i != (__int64 *)v4 && i; i = (__int64 *)*i )
      *((_DWORD *)i + 14) = 0;
    DXGFASTMUTEX::Release(v3);
  }
}
