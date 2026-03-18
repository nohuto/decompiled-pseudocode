/*
 * XREFs of _ScrollDC @ 0x1C008D9BC
 * Callers:
 *     NtUserScrollDC @ 0x1C008D870 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C008E4E8 (FastWindowFromDC.c)
 *     UnionRect @ 0x1C0091308 (UnionRect.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  BOOL v14; // r12d
  __m128i v16; // xmm0
  int v17; // eax
  int v18; // ecx
  struct tagRECT v19; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0LL;
  v12 = FastWindowFromDC();
  v13 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(v12 + 160);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v14 = InternalScrollDC((struct tagWND *)a7, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*gpDispInfo);
  if ( v13 && *(_QWORD *)(gpDispInfo + 72LL) )
  {
    if ( a4 )
    {
      v17 = *(_DWORD *)(v13 + 128);
      v18 = *(_DWORD *)(v13 + 132);
      v20 = *a4;
      v16 = (__m128i)v20;
      v20.right += v17;
      v20.bottom += v18;
      v20.top += v18;
      v20.left = v17 + _mm_cvtsi128_si32(v16);
      v19.right = a2 + v20.right;
      v19.bottom = a3 + v20.bottom;
      v19.top = a3 + v20.top;
      v19.left = v20.left + a2;
      UnionRect(&v19, &v19, &v20);
    }
    else
    {
      v19 = *(struct tagRECT *)(v13 + 128);
    }
    GreUnlockVisRgn(*gpDispInfo);
    GreLockVisRgn(*gpDispInfo);
    SpbCheckRect((struct tagWND *)v13, &v19, 0);
  }
  GreUnlockVisRgn(*gpDispInfo);
  return v14;
}
