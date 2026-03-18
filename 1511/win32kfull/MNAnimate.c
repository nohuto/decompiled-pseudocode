/*
 * XREFs of MNAnimate @ 0x1C01393FC
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C01FD418 (MNDestroyAnimationBitmap.c)
 */

signed int __fastcall MNAnimate(__int64 *a1, int a2)
{
  signed int result; // eax
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // kr00_8
  int v11; // r9d
  int v12; // eax
  LONG v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r10d
  unsigned int v17; // eax
  __int64 v18; // rcx

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
  }
  else
  {
    if ( !a1[12] )
      return result;
    v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 26);
    if ( !a2 || v4 > 0xA5 || ExGetExclusiveWaiterCount(gpresUser) || (result = ExGetSharedWaiterCount(gpresUser)) != 0 )
    {
      NtGdiBitBltInternal(
        (HDC)a1[12],
        0,
        0,
        *((_DWORD *)a1 + 29),
        *((_DWORD *)a1 + 30),
        (HDC)a1[17],
        0,
        0,
        0x80CC0020,
        0xFFFFFF,
        0);
LABEL_30:
      MNDestroyAnimationBitmap(a1);
      _ReleaseDC(a1[12]);
      v18 = *a1;
      a1[12] = 0LL;
      return FindTimer(*(_QWORD *)(v18 + 56), 65531LL, 0, 1, 0LL);
    }
    v8 = *((_DWORD *)a1 + 27);
    v9 = *((_DWORD *)a1 + 28);
    if ( (a1[1] & 0x180000) != 0 )
    {
      v10 = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5, v7) + 48) + 4);
      v5 = HIDWORD(v10);
      result = v10 / 8;
      LODWORD(v5) = v10 % 8;
      if ( result > *((_DWORD *)a1 + 29) )
        result = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 27) = result;
    }
    if ( (a1[1] & 0x600000) != 0 )
    {
      result = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5, v7) + 52) + 8) / 16;
      if ( result > *((_DWORD *)a1 + 30) )
        result = *((_DWORD *)a1 + 30);
      *((_DWORD *)a1 + 28) = result;
    }
    v11 = *((_DWORD *)a1 + 27);
    if ( v11 != v8 || *((_DWORD *)a1 + 28) != v9 )
    {
      v12 = *((_DWORD *)a1 + 2) >> 19;
      if ( (v12 & 2) != 0 )
      {
        v13 = *((_DWORD *)a1 + 29) - v11;
        v14 = 0;
      }
      else
      {
        v14 = *((_DWORD *)a1 + 29) - v11;
        v13 = 0;
      }
      v15 = *((_DWORD *)a1 + 28);
      if ( (v12 & 8) != 0 )
      {
        v16 = *((_DWORD *)a1 + 30) - v15;
        v17 = 0;
      }
      else
      {
        v17 = *((_DWORD *)a1 + 30) - v15;
        v16 = 0;
      }
      NtGdiBitBltInternal((HDC)a1[12], v13, v16, v11, v15, (HDC)a1[17], v14, v17, 0x80CC0020, 0xFFFFFF, 0);
      result = *((_DWORD *)a1 + 27);
      if ( *((_DWORD *)a1 + 29) == result )
      {
        result = *((_DWORD *)a1 + 28);
        if ( *((_DWORD *)a1 + 30) == result )
          goto LABEL_30;
      }
    }
  }
  return result;
}
