/*
 * XREFs of NtGdiSelectBitmap @ 0x1C00DE890
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A5DC8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02A5DE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiSelectBitmap(HDC a1, HBITMAP a2)
{
  HBITMAP v3; // rbx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( RFONTOBJ::bValid((RFONTOBJ *)v5) && *(_WORD *)(v5[0] + 12LL) <= 1u )
    v3 = hbmSelectBitmapInternal((struct XDCOBJ *)v5, a2, 0, 0, 0);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  return v3;
}
