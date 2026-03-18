/*
 * XREFs of GreGetTransform @ 0x1C010B280
 * Callers:
 *     NtGdiGetTransform @ 0x1C010B220 (NtGdiGetTransform.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C02B34EC (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, unsigned int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v10[40]; // [rsp+60h] [rbp+17h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, a2);
    if ( v7[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, (struct MATRIX *)v10), v7[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v7, a3);
      v5 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  return v5;
}
