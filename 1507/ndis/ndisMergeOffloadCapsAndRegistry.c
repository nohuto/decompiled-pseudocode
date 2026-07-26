/*
 * XREFs of ndisMergeOffloadCapsAndRegistry @ 0x1C0016558
 * Callers:
 *     ndisIndicateOffloadChangeInternal @ 0x1C00164C4 (ndisIndicateOffloadChangeInternal.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ecx

  if ( *(_BYTE *)a2 == 0xA7 && *(_WORD *)(a2 + 2) >= 0x70u && *(_BYTE *)(a2 + 1) )
  {
    if ( (*(_DWORD *)(a1 + 3728) & 0x400) != 0 )
    {
      *(_DWORD *)(a2 + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 36) = 0LL;
      *(_DWORD *)(a2 + 44) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3728) & 0x1000) != 0 )
    {
      *(_DWORD *)(a2 + 104) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 92) = 0LL;
      *(_DWORD *)(a2 + 100) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3728) & 0x800) != 0 )
    {
      *(_QWORD *)(a2 + 80) = 0LL;
      *(_DWORD *)(a2 + 88) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3728) & 1) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFCFC;
    if ( (*(_DWORD *)(a1 + 3728) & 4) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3728) & 0x10) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 8) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 8) | (*(_DWORD *)(a2 + 8) >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 4) = 0;
    if ( (*(_DWORD *)(a1 + 3728) & 2) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFCFC;
    if ( (*(_DWORD *)(a1 + 3728) & 8) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3728) & 0x20) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 16) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 16) | (*(_DWORD *)(a2 + 16) >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 12) = 0;
    if ( (*(_DWORD *)(a1 + 3728) & 0x40) != 0 )
      *(_DWORD *)(a2 + 24) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3728) & 0x100) != 0 )
      *(_DWORD *)(a2 + 24) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 24) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 24) | (*(_DWORD *)(a2 + 24) >> 2)) >> 4)) & 3) == 0 )
      *(_DWORD *)(a2 + 20) = 0;
    if ( (*(_DWORD *)(a1 + 3728) & 0x80u) != 0 )
      *(_DWORD *)(a2 + 32) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3728) & 0x200) != 0 )
      *(_DWORD *)(a2 + 32) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 32) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 32) | (*(_DWORD *)(a2 + 32) >> 2)) >> 4)) & 3) == 0 )
      *(_DWORD *)(a2 + 28) = 0;
    if ( (*(_DWORD *)(a1 + 3728) & 0x2000) != 0 )
      *(_DWORD *)(a2 + 72) = 0;
    if ( (*(_DWORD *)(a1 + 3728) & 0x4000) != 0 )
      *(_DWORD *)(a2 + 76) = 0;
    v4 = *(_DWORD *)(a2 + 76);
    if ( ((v4 >> 12) & 3) == 0xC00000BB
      && (unsigned __int16)v4 >> 14 == -1073741637
      && ((*(_DWORD *)(a2 + 72) >> 8) & 3) == 0xC00000BB
      && ((*(_DWORD *)(a2 + 72) >> 10) & 3) == 0xC00000BB )
    {
      *(_QWORD *)(a2 + 52) = 0LL;
      *(_QWORD *)(a2 + 60) = 0LL;
      *(_QWORD *)(a2 + 68) = 0LL;
      *(_DWORD *)(a2 + 76) = 0;
    }
    if ( *(_BYTE *)(a2 + 1) >= 2u && *(_WORD *)(a2 + 2) >= 0x90u )
    {
      v5 = *(_DWORD *)(a1 + 3728);
      if ( (v5 & 0x400000) != 0 )
      {
        *(_BYTE *)(a2 + 116) = 0;
        if ( (*(_DWORD *)(a1 + 3728) & 0x100000) != 0 )
          *(_BYTE *)(a2 + 119) = 0;
        if ( (*(_DWORD *)(a1 + 3728) & 0x200000) != 0 )
          *(_BYTE *)(a2 + 120) = 0;
        v6 = 3145728;
      }
      else
      {
        if ( (v5 & 0x40000) != 0 )
          *(_BYTE *)(a2 + 119) = 0;
        if ( (*(_DWORD *)(a1 + 3728) & 0x80000) != 0 )
          *(_BYTE *)(a2 + 120) = 0;
        v6 = 786432;
      }
      if ( (v6 & *(_DWORD *)(a1 + 3728)) == v6 )
        *(_WORD *)(a2 + 119) = 0;
      if ( (*(_DWORD *)(a1 + 3728) & 0x3C0000) == 0x3C0000 )
        memset((void *)(a2 + 112), 0, 0x20uLL);
      if ( *(_BYTE *)(a2 + 1) >= 3u && *(_WORD *)(a2 + 2) >= 0x9Cu )
      {
        if ( (*(_DWORD *)(a1 + 3728) & 0x800000) != 0 )
          *(_BYTE *)(a2 + 144) = 0;
        if ( (*(_BYTE *)(a1 + 3731) & 1) != 0 )
          *(_BYTE *)(a2 + 145) = 0;
        if ( (*(_DWORD *)(a1 + 3728) & 0x2000000) != 0 )
          *(_QWORD *)(a2 + 148) = 0LL;
      }
    }
  }
}
