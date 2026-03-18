/*
 * XREFs of xxxSetWindowRgn @ 0x1C00847E8
 * Callers:
 *     NtUserSetWindowRgn @ 0x1C0084740 (NtUserSetWindowRgn.c)
 *     NtUserSetWindowRgnEx @ 0x1C0220D80 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     _DeferWindowPos @ 0x1C00851D8 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     MirrorRegion @ 0x1C00859F0 (MirrorRegion.c)
 */

__int64 __fastcall xxxSetWindowRgn(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = 0;
  if ( a2 )
  {
    v6 = UserValidateCopyRgn(a2);
    v7 = v6;
    if ( !v6 )
    {
LABEL_10:
      GreDeleteObject(v7);
      return v3;
    }
    MirrorRegion(a1, v6, 0LL);
  }
  else
  {
    v7 = 1LL;
  }
  v8 = InternalBeginDeferWindowPos(1LL, a2);
  if ( !v8
    || (v9 = DeferWindowPos(v8, a1, 0, 0, 0, 0, 0, a3 != 0 ? 6199 : 6207, 0)) == 0
    || (*(_QWORD *)(*(_QWORD *)(v9 + 40) + 112LL) = v7, (v3 = xxxEndDeferWindowPosEx((struct tagSMWP *)v9, 0)) == 0) )
  {
    if ( v7 != 1 )
      goto LABEL_10;
  }
  return v3;
}
