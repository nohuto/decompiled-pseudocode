/*
 * XREFs of NtGdiSelectPen @ 0x1C02A9730
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

HPEN __fastcall NtGdiSelectPen(HDC a1, HPEN a2)
{
  HPEN v3; // rbx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v5) && *(_WORD *)(v5[0] + 12LL) == 1 )
    v3 = GreSelectPenInternal((struct XDCOBJ *)v5, a2, 0);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
