/*
 * XREFs of FinalUserInit @ 0x1C0138628
 * Callers:
 *     xxxInitWindowStation @ 0x1C0138550 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 *     MNSetupAnimationDC @ 0x1C01387E8 (MNSetupAnimationDC.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1, __int64 a2)
{
  HDC v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v8; // rcx
  struct tagPROCESSINFO *v9; // rax

  *(_QWORD *)(gpDispInfo + 40LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  v2 = *(HDC *)(gpDispInfo + 40LL);
  if ( !v2 )
    return 0LL;
  GreSelectFontInternal(v2);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 56LL) = 40 * *(_DWORD *)(gpsi + 4060LL);
  *(_DWORD *)(gpDispInfo + 60LL) = *(_DWORD *)(gpsi + 4064LL) + 2;
  *(_QWORD *)(gpDispInfo + 48LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 56LL),
                                     *(unsigned int *)(gpDispInfo + 60LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v4 = *(_QWORD *)(gpDispInfo + 48LL);
  if ( !v4 )
    return 0LL;
  GreSetBitmapOwner(v4, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 40LL), *(_QWORD *)(gpDispInfo + 48LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 40LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 3944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 40LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 40LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(CurrentProcessWin32Process + 328) )
  {
    v8 = *(unsigned int *)(i + 84);
    if ( (v8 & 0x4000) != 0 )
      break;
    v9 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8);
    DestroyClass(v9, (_QWORD **)(CurrentProcessWin32Process + 328));
  }
  return 1LL;
}
