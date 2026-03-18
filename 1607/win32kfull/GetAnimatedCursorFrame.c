/*
 * XREFs of GetAnimatedCursorFrame @ 0x1C005DA50
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C005C8F4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserDrawIconEx @ 0x1C00B0AD0 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C010BDE0 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C01528C0 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAnimatedCursorFrame(__int64 a1, int a2)
{
  __int64 v2; // rdx

  if ( *(_QWORD *)(a1 + 104)
    && *(_QWORD *)(a1 + 96)
    && a2 >= 0
    && a2 < *(_DWORD *)(a1 + 92)
    && (_mm_lfence(), v2 = *(int *)(*(_QWORD *)(a1 + 104) + 4LL * a2), (int)v2 >= 0)
    && (int)v2 < *(_DWORD *)(a1 + 88) )
  {
    return *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v2);
  }
  else
  {
    return 0LL;
  }
}
