/*
 * XREFs of NtGdiMakeInfoDC @ 0x1C02B3640
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
