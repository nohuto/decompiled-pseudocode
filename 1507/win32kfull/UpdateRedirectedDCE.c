/*
 * XREFs of UpdateRedirectedDCE @ 0x1C000B310
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C000B264 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00129A0 (RedirectDCEs.c)
 * Callees:
 *     RevalidateDCE @ 0x1C000B430 (RevalidateDCE.c)
 *     GreSelectRedirectionBitmap @ 0x1C00168E0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C0016C90 (GreHintDCWnd.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  __int64 RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848LL);
  v6 = StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
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
  if ( *(_QWORD *)(a1 + 32) == v6 )
  {
LABEL_12:
    if ( !a2 )
      return result;
    return RevalidateDCE(a1);
  }
  v10 = *(_QWORD **)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 8);
  a2 = 1;
  *(_QWORD *)(a1 + 32) = v6;
  GreHintDCWnd(v11, *v10, 0, 0, 0);
  if ( v6 && (*(_BYTE *)(v6 + 50) & 8) != 0 )
  {
    result = GreHintDCWnd(
               *(_QWORD *)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               *(_QWORD *)v6,
               ((unsigned __int8)~*(_BYTE *)(v6 + 51) >> 1) & 1,
               (*(_WORD *)(v6 + 66) & 0x3FFF) == 669);
    goto LABEL_12;
  }
  return RevalidateDCE(a1);
}
