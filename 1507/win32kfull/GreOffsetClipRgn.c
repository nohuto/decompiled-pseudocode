/*
 * XREFs of GreOffsetClipRgn @ 0x1C01514B0
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C015135C (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF
  struct _POINTL v9; // [rsp+88h] [rbp+20h] BYREF

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
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v5;
}
