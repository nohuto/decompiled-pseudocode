/*
 * XREFs of GreGetTransform @ 0x1C0032B80
 * Callers:
 *     NtGdiGetTransform @ 0x1C0032B20 (NtGdiGetTransform.c)
 * Callees:
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C0006EB0 (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, unsigned int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v8[6]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[40]; // [rsp+60h] [rbp-48h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, a2);
    if ( v7[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, (struct MATRIX *)v9), v7[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v7, a3);
      v5 = 1;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v5;
}
