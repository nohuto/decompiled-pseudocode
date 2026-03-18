/*
 * XREFs of _ScrollDC @ 0x1C005CDF4
 * Callers:
 *     NtUserScrollDC @ 0x1C005CCA0 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  struct tagWND *v17; // rcx
  BOOL v18; // esi
  int v20; // edx
  _QWORD *v21; // rdx
  __m128i v22; // xmm0
  int v23; // eax
  int v24; // ecx
  struct tagRECT v25; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  GreLockVisRgn(*gpDispInfo);
  v13 = (_QWORD *)gpDispInfo;
  v14 = gpDispInfo + 64LL;
  v15 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( !v15 )
  {
LABEL_5:
    v13 = (_QWORD *)gpDispInfo;
    goto LABEL_6;
  }
  if ( *(HDC *)(v15 + 8) != a1 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      if ( *(HDC *)(*(_QWORD *)v14 + 8LL) == a1 )
        break;
      v14 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v16 )
        goto LABEL_5;
    }
    v21 = *(_QWORD **)v14;
    if ( (*(_DWORD *)(v16 + 64) & 0x401000) == 0x1000 )
    {
      *(_QWORD *)v14 = *v21;
      *v21 = *(_QWORD *)(gpDispInfo + 64LL);
      *(_QWORD *)(gpDispInfo + 64LL) = v21;
      v12 = v21[2];
    }
    goto LABEL_5;
  }
  v20 = *(_DWORD *)(v15 + 64);
  if ( (v20 & 0x1000) != 0 && (v20 & 0x400000) == 0 )
    v12 = *(_QWORD *)(v15 + 16);
LABEL_6:
  GreUnlockVisRgn(*v13);
  if ( v12 )
  {
    v11 = *(HRGN *)(v12 + 160);
    if ( v11 == (HRGN)1 )
      v11 = 0LL;
  }
  v18 = InternalScrollDC(v17, a1, a2, a3, a4, a5, v11, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*gpDispInfo, 0LL);
  if ( v12 && *(_QWORD *)(gpDispInfo + 72LL) )
  {
    if ( a4 )
    {
      v23 = *(_DWORD *)(v12 + 128);
      v24 = *(_DWORD *)(v12 + 132);
      v26 = *a4;
      v22 = (__m128i)v26;
      v26.right += v23;
      v26.bottom += v24;
      v26.top += v24;
      v26.left = v23 + _mm_cvtsi128_si32(v22);
      v25.right = a2 + v26.right;
      v25.bottom = a3 + v26.bottom;
      v25.top = a3 + v26.top;
      v25.left = v26.left + a2;
      UnionRect(&v25, &v25, &v26);
    }
    else
    {
      v25 = *(struct tagRECT *)(v12 + 128);
    }
    GreUnlockVisRgn(*gpDispInfo);
    GreLockVisRgn(*gpDispInfo);
    SpbCheckRect((struct tagWND *)v12, &v25, 0);
  }
  GreUnlockVisRgn(*gpDispInfo);
  return v18;
}
