/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B25D0
 * Callers:
 *     xxxRealizePalette @ 0x1C0111BF0 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // r8
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    v2 = *(_QWORD *)(v4[0] + 88LL);
    if ( (HPALETTE)v2 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v4[0] + 80LL) + 68LL) == 1
      && (unsigned __int16)v2 == (unsigned __int16)hForePalette
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v2 ^ (unsigned __int64)hForePalette) )
    {
      v1 = 1;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v1;
}
