/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0028EC4
 * Callers:
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C018D390 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C018EC18 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

__int64 __fastcall COREACCESS::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 24) )
      COREACCESS::Release((COREACCESS *)a1);
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 16));
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
