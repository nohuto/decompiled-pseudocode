/*
 * XREFs of xxxGetUpdateRgn @ 0x1C0121A90
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C0121A00 (NtUserGetUpdateRgn.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     MirrorRegion @ 0x1C00859F0 (MirrorRegion.c)
 *     IntersectWithParents @ 0x1C008D7F8 (IntersectWithParents.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, (_DWORD *)a1, 0x120u, 1);
  if ( *(_QWORD *)(a1 + 160) )
  {
    v11 = *(_OWORD *)(a1 + 128);
    v5 = IntersectWithParents(a1, (__int64)&v11);
    if ( *(_QWORD *)(a1 + 160) == 1LL )
    {
      if ( v5 )
      {
        v6 = 2;
        if ( a1 != GetDesktopWindow(a1) )
        {
          v8 = *(_DWORD *)(a1 + 128);
          v9 = -*(_DWORD *)(a1 + 132);
          HIDWORD(v11) -= *(_DWORD *)(a1 + 132);
          v10 = -v8;
          LODWORD(v11) = v10 + v11;
          DWORD2(v11) += v10;
          DWORD1(v11) += v9;
        }
        SetRectRgnIndirect(a2, &v11);
        goto LABEL_8;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v11);
      v6 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(a1 + 160), 1LL);
      if ( v6 > 1 )
      {
        if ( a1 != GetDesktopWindow(a1) )
          GreOffsetRgn(a2, (unsigned int)-*(_DWORD *)(a1 + 128), (unsigned int)-*(_DWORD *)(a1 + 132));
LABEL_8:
        MirrorRegion(a1, a2, 1);
        return v6;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
