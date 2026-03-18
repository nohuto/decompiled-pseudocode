/*
 * XREFs of xxxSetWindowRgn @ 0x1C00A592C
 * Callers:
 *     NtUserSetWindowRgn @ 0x1C00A5880 (NtUserSetWindowRgn.c)
 *     NtUserSetWindowRgnEx @ 0x1C021AB60 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     MirrorRegion @ 0x1C00A6900 (MirrorRegion.c)
 */

__int64 __fastcall xxxSetWindowRgn(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8

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
  v8 = InternalBeginDeferWindowPos(1LL);
  if ( !v8
    || (v9 = DeferWindowPos(v8, a1, 0, 0, 0, 0, 0, a3 != 0 ? 6199 : 6207, 0)) == 0
    || (*(_QWORD *)(*(_QWORD *)(v9 + 40) + 112LL) = v7,
        (v3 = xxxEndDeferWindowPosEx((struct tagSMWP *)v9, 0LL, v10)) == 0) )
  {
    if ( v7 != 1 )
      goto LABEL_10;
  }
  return v3;
}
