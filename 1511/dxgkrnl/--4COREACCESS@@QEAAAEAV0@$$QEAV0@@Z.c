/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00223B4
 * Callers:
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01656E4 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0166DC8 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREACCESS::operator=(__int64 a1, __int64 a2)
{
  DXGADAPTER *v4; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( *(_BYTE *)(a1 + 16) )
      COREACCESS::Release((COREACCESS *)a1);
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 8));
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = *(DXGADAPTER **)(a1 + 8);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  if ( v4 )
    DXGADAPTER::AcquireReference(v4);
  result = a1;
  *(_BYTE *)(a2 + 16) = 0;
  return result;
}
