/*
 * XREFs of ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C00DDB18
 * Callers:
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00DD968 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(
        DXGADAPTER **this,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE a2)
{
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  DXGADAPTER *v6; // r9
  __int64 v7; // rcx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  v4 = *((_DWORD *)this + 20);
  v5 = 0;
  if ( !v4 )
    return 0;
  v6 = this[14];
  while ( 1 )
  {
    v7 = 1016LL * v5;
    if ( *(_QWORD *)((char *)v6 + v7 + 672) )
    {
      if ( a2 == *(_DWORD *)((char *)v6 + v7 + 680) )
        break;
    }
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
