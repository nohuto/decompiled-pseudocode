/*
 * XREFs of GetCaptionHeight @ 0x140032E38
 * Callers:
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  unsigned int WindowDpiLastNotify; // eax
  int v6; // ecx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 288);
  v4 = v3 & 0xF;
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 272LL);
    }
    v6 = 22;
  }
  else
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 272LL);
    }
    v6 = 2;
  }
  return GetDpiDependentMetric(v6, WindowDpiLastNotify);
}
