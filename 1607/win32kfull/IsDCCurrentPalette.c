/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B46F4
 * Callers:
 *     xxxRealizePalette @ 0x1C0145890 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( *(HPALETTE *)(v5[0] + 88LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v5[0] + 80LL) + 68LL) == 1
      && (v2 = *(unsigned int *)(v5[0] + 88LL),
          v3 = (unsigned __int16)v2 | (*(_DWORD *)(v5[0] + 88LL) >> 8) & 0xFF0000u,
          (_DWORD)v3 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v3, v2) )
    {
      v1 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
  return v1;
}
