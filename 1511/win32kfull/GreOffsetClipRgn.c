/*
 * XREFs of GreOffsetClipRgn @ 0x1C010C5F8
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C010C4A4 (xxxInternalPaintDesktop.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  struct _POINTL v9; // [rsp+68h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    v9.x = a2;
    v9.y = a3;
    v7 = *(_QWORD *)(v8[0] + 224LL);
    if ( v7 )
      v5 = RGNOBJ::bOffset((RGNOBJ *)&v7, &v9);
    else
      v5 = 1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v5;
}
