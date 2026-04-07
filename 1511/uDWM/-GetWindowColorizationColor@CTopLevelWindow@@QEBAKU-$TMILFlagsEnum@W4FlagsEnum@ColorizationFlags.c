/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800263EC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800287A4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, char a2)
{
  CDesktopManager *v3; // rbx
  char v4; // r9
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int v7; // eax
  int v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+40h] [rbp-10h]

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::s_ChooseWindowFrameFromStyle(
    *(_DWORD *)(a1 + 608),
    1,
    (*(_BYTE *)(*(_QWORD *)(a1 + 744) + 571LL) & 0x20) != 0);
  v4 = a2;
  if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 608) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 744) + 571LL) & 0x20) != 0 )
      v4 = a2 | 1;
    else
      v4 = a2 | 2;
  }
  if ( *((_BYTE *)v3 + 25) )
  {
    if ( (v4 & 1) != 0 )
      return *((unsigned int *)v3 + 353);
    else
      return *((unsigned int *)v3 + 354);
  }
  else
  {
    v5 = *(_OWORD *)((char *)v3 + 1380);
    v12 = *((_DWORD *)v3 + 351);
    v6 = *(_QWORD *)((char *)v3 + 1396);
    v7 = *((_DWORD *)v3 + 336);
    v10 = v5;
    v9 = v7;
    v11 = v6;
    CGlassColorizationParameters::AdjustWindowColorization(&v10, &v9);
    return v10 & 0xFF00FF00 | ((unsigned __int8)v10 << 16) | (unsigned int)BYTE2(v10);
  }
}
