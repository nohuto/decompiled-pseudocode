/*
 * XREFs of xxxGetUpdateRgn @ 0x1C020E404
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C02151B0 (NtUserGetUpdateRgn.c)
 * Callees:
 *     IntersectWithParents @ 0x1C005CC28 (IntersectWithParents.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     MirrorRegion @ 0x1C00A6900 (MirrorRegion.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
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
          v7 = *(_DWORD *)(a1 + 128);
          v8 = -*(_DWORD *)(a1 + 132);
          HIDWORD(v11) -= *(_DWORD *)(a1 + 132);
          v9 = -v7;
          LODWORD(v11) = v9 + v11;
          DWORD2(v11) += v9;
          DWORD1(v11) += v8;
        }
        SetRectRgnIndirect(a2, &v11);
LABEL_12:
        MirrorRegion(a1, a2, 1);
        return v6;
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
        goto LABEL_12;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
