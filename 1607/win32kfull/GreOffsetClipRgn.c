/*
 * XREFs of GreOffsetClipRgn @ 0x1C0100DA0
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C0100C4C (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v9[48]; // [rsp+38h] [rbp-30h] BYREF
  struct _POINTL v10; // [rsp+88h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    v10.x = a2;
    v10.y = a3;
    v7 = *(_QWORD *)(v8[0] + 224LL);
    if ( v7 )
      v5 = RGNOBJ::bOffset((RGNOBJ *)&v7, &v10);
    else
      v5 = 1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  return v5;
}
