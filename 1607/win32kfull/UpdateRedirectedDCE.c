/*
 * XREFs of UpdateRedirectedDCE @ 0x1C011D160
 * Callers:
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0063468 (RedirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 * Callees:
 *     GreHintDCWnd @ 0x1C00452A0 (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1C0049680 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     RevalidateDCE @ 0x1C00750C0 (RevalidateDCE.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  HBITMAP RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
  v6 = StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HBITMAP)GetRedirectionBitmap(StyleWindow);
  if ( !(unsigned int)GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), RedirectionBitmap) )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 64) |= 0x4000u;
    v8 = 5LL;
  }
  else
  {
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    v8 = 6LL;
  }
  result = GreGetBounds(v7, 0LL, v8);
  if ( *(_QWORD *)(a1 + 32) != v6 )
  {
    v10 = *(__int64 **)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    GreHintDCWnd(v11, *v10, 0LL, 0, 0);
    if ( !v6 || (*(_BYTE *)(v6 + 50) & 8) == 0 )
      return RevalidateDCE(a1);
    result = GreHintDCWnd(
               *(_QWORD *)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               *(_QWORD *)v6,
               ((unsigned __int8)~*(_BYTE *)(v6 + 51) >> 1) & 1,
               (*(_WORD *)(v6 + 66) & 0x3FFF) == 669);
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
