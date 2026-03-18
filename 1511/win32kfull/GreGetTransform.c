/*
 * XREFs of GreGetTransform @ 0x1C0019AE0
 * Callers:
 *     NtGdiGetTransform @ 0x1C0019A80 (NtGdiGetTransform.c)
 * Callees:
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C00091EC (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, unsigned int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, a2);
    if ( v8[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, (struct MATRIX *)v9), v8[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v8, a3);
      v5 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
