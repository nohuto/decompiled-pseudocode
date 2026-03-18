/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B1858
 * Callers:
 *     xxxRealizePalette @ 0x1C013C790 (xxxRealizePalette.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // r8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v4);
  return v1;
}
