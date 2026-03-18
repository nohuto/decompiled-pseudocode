/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x14020D8E4
 * Callers:
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxMenuItemFromPoint @ 0x14020D12C (xxxMenuItemFromPoint.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxGetMenuItemRect @ 0x14020D69C (xxxGetMenuItemRect.c)
 *     xxxHiliteMenuItem @ 0x1402F2B8C (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int *v7; // r8
  int v8; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v10; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  if ( (*(_DWORD *)(result + 40) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a2 + 80LL) != a1
      || !*(_DWORD *)(**(_QWORD **)a2 + 64LL)
      || (result = *(_QWORD *)a2, !*(_DWORD *)(**(_QWORD **)a2 + 68LL)) )
    {
      v7 = *(int **)(a1 + 40);
      v8 = v7[72] & 0xF;
      if ( v8 == 3 )
      {
        WindowDpiLastNotify = ((unsigned int)v7[72] >> 8) & 0x1FF;
      }
      else if ( (v7[58] & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v8
             && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 488LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 272LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               a2,
               a1,
               CaptionHeight + WindowBordersForDpi,
               WindowBordersForDpi,
               *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
             - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
             - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
