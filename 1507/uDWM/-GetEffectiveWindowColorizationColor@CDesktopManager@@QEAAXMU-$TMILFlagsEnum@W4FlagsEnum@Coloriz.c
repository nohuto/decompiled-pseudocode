/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18001C6B4
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020E54 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 25) )
  {
    if ( (a3 & 1) != 0 )
      result = *(unsigned int *)(a1 + 1412);
    else
      result = *(unsigned int *)(a1 + 1416);
    *a4 = result;
  }
  else
  {
    v5 = *(_OWORD *)(a1 + 1380);
    v12 = *(_DWORD *)(a1 + 1404);
    v6 = *(_QWORD *)(a1 + 1396);
    v7 = *(_DWORD *)(a1 + 1344);
    v10 = v5;
    v9 = v7;
    v11 = v6;
    if ( *(_BYTE *)(a1 + 24) )
      a3 = (unsigned int)a3 | 4;
    if ( *(_BYTE *)(a1 + 1408) )
      a3 = (unsigned int)a3 | 0x20;
    ((void (__fastcall *)(__int128 *, int *, __int64, _QWORD))CGlassColorizationParameters::AdjustWindowColorization)(
      &v10,
      &v9,
      a3,
      (unsigned int)a3);
    result = (unsigned __int8)v10 << 16;
    *a4 = v10 & 0xFF00FF00 | result | BYTE2(v10);
  }
  return result;
}
