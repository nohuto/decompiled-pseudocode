/*
 * XREFs of GreGetBrushOrg @ 0x1C014DA6C
 * Callers:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C023FB70 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_QWORD *)(v5[0] + 136LL);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return v3;
}
