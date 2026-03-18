/*
 * XREFs of FinalUserInit @ 0x1C00BC3C8
 * Callers:
 *     xxxInitWindowStation @ 0x1C00BC2F0 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     MNSetupAnimationDC @ 0x1C00BC588 (MNSetupAnimationDC.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1, __int64 a2)
{
  HDC v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v10; // rcx
  struct tagPROCESSINFO *v11; // rax

  *(_QWORD *)(gpDispInfo + 40LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  v2 = *(HDC *)(gpDispInfo + 40LL);
  if ( !v2 )
    return 0LL;
  GreSelectFontInternal(v2);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 56LL) = 40 * *(_DWORD *)(gpsi + 5452LL);
  *(_DWORD *)(gpDispInfo + 60LL) = *(_DWORD *)(gpsi + 5456LL) + 2;
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
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 5336LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 40LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 40LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(CurrentProcessWin32Process + 320) )
  {
    v10 = *(unsigned int *)(i + 84);
    if ( (v10 & 0x4000) != 0 )
      break;
    v11 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v10, v7);
    DestroyClass(v11, (_QWORD **)(CurrentProcessWin32Process + 320));
  }
  return 1LL;
}
