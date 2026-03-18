/*
 * XREFs of NtGdiSelectBrush @ 0x1C02A8430
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

HBRUSH __fastcall NtGdiSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v5) && *(_WORD *)(v5[0] + 12LL) == 1 )
    v3 = GreSelectBrushInternal((struct XDCOBJ *)v5, a2, 0);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
