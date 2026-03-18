/*
 * XREFs of MNAnimate @ 0x1C013F880
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C006B218 (MNGetPopupFromMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C01F46A8 (MNDestroyAnimationBitmap.c)
 */

signed int __fastcall MNAnimate(__int64 *a1, int a2)
{
  signed int result; // eax
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  int v8; // r14d
  __int64 v9; // kr00_8
  int v10; // r9d
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  LONG v15; // r10d
  LONG v16; // eax
  __int64 v17; // rcx

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
      v17 = *a1;
      a1[12] = 0LL;
      return FindTimer(*(_QWORD *)(v17 + 56), 65531LL, 0, 1, 0LL);
    }
    v7 = *((_DWORD *)a1 + 27);
    v8 = *((_DWORD *)a1 + 28);
    if ( (a1[1] & 0x180000) != 0 )
    {
      v9 = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5) + 48) + 4);
      v5 = HIDWORD(v9);
      result = v9 / 8;
      LODWORD(v5) = v9 % 8;
      if ( result > *((_DWORD *)a1 + 29) )
        result = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 27) = result;
    }
    if ( (a1[1] & 0x600000) != 0 )
    {
      result = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5) + 52) + 8) / 16;
      if ( result > *((_DWORD *)a1 + 30) )
        result = *((_DWORD *)a1 + 30);
      *((_DWORD *)a1 + 28) = result;
    }
    v10 = *((_DWORD *)a1 + 27);
    if ( v10 != v7 || *((_DWORD *)a1 + 28) != v8 )
    {
      v11 = *((_DWORD *)a1 + 2) >> 19;
      if ( (v11 & 2) != 0 )
      {
        v12 = *((_DWORD *)a1 + 29) - v10;
        v13 = 0;
      }
      else
      {
        v13 = *((_DWORD *)a1 + 29) - v10;
        v12 = 0;
      }
      v14 = *((_DWORD *)a1 + 28);
      if ( (v11 & 8) != 0 )
      {
        v15 = *((_DWORD *)a1 + 30) - v14;
        v16 = 0;
      }
      else
      {
        v16 = *((_DWORD *)a1 + 30) - v14;
        v15 = 0;
      }
      NtGdiBitBltInternal((HDC)a1[12], v12, v15, v10, v14, (HDC)a1[17], v13, v16, 0x80CC0020, 0xFFFFFF, 0);
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
