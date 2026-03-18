/*
 * XREFs of NtGdiMakeInfoDC @ 0x1C02B57C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[7]; // [rsp+20h] [rbp-38h] BYREF

  InfoDC = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return InfoDC;
}
