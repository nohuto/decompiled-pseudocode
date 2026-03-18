/*
 * XREFs of GreSetBrushOrg @ 0x1C00E7AF0
 * Callers:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     NtGdiSetBrushOrg @ 0x1C00E7740 (NtGdiSetBrushOrg.c)
 *     xxxPaintRect @ 0x1C00E7A28 (xxxPaintRect.c)
 *     MNEraseBackground @ 0x1C023FB70 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v7 = v14[0];
  if ( v14[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v14[0] + 136LL);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 380LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 384LL) = a3;
    v9 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v7 + 136) = a2;
    *(_DWORD *)(v7 + 140) = a3;
    v10 = v9 & 1;
    if ( v10 )
      v11 = *(_DWORD *)(v7 + 1416);
    else
      v11 = *(_DWORD *)(v7 + 1408);
    *(_DWORD *)(v7 + 1552) = a2 + v11;
    if ( v10 )
      v12 = *(_DWORD *)(v7 + 1420);
    else
      v12 = *(_DWORD *)(v7 + 1412);
    *(_DWORD *)(v7 + 1556) = a3 + v12;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v14);
  return v8;
}
