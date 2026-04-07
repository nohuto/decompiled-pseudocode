/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020E54
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18001C6B4 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, unsigned int a2)
{
  CDesktopManager *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::s_ChooseWindowFrameFromStyle(
    *(_DWORD *)(a1 + 608),
    1,
    (*(_BYTE *)(*(_QWORD *)(a1 + 744) + 555LL) & 0x20) != 0);
  v5 = v8;
  if ( (v8 & 1) == 0 && (v8 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 608) & 0x40) != 0 || (v4 = *(_QWORD *)(a1 + 744), (*(_BYTE *)(v4 + 555) & 0x20) != 0) )
    {
      v5 = v8 | 1;
      v8 |= 1u;
    }
  }
  CDesktopManager::GetEffectiveWindowColorizationColor((__int64)v3, v4, v5, &v7);
  return v7;
}
