/*
 * XREFs of KdpSearchPhysicalPage @ 0x1406F5878
 * Callers:
 *     KdpSearchPhysicalPageRange @ 0x1406F5A74 (KdpSearchPhysicalPageRange.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1400842A4 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpSearchPhysicalPage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v9; // esi
  bool v10; // bp
  unsigned int v11; // esi
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1 << 12;
  v6 = 0;
  if ( KdpSearchPfnValue )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + v9), (__int64)v18, 8u, 8u, a5 | 2u) >= 0
        && ((v18[0] >> 12) & 0xFFFFFFFFFLL) == a2 )
      {
        if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
        {
          KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
          KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = v9;
        }
        if ( (a4 & 1) == 0 )
          break;
      }
      v9 += 8;
      if ( v9 >= 0x1000 )
        return v6;
    }
  }
  else
  {
    v10 = (KdpSearchInProgress & 2) != 0;
    v17 = 0LL;
    if ( (KdpSearchInProgress & 0x3C) != 0 )
    {
      v11 = ((unsigned int)KdpSearchInProgress >> 2) & 0xF;
      if ( v11 > 8 )
        return 0LL;
    }
    else
    {
      v11 = 8;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + v13), (__int64)&v17, v11, 0, a5 | 2u) >= 0 )
      {
        if ( v17 >= a2 && v17 <= a3 )
          goto LABEL_24;
        if ( !v10 )
        {
          v14 = a2 ^ v17;
          v15 = 64LL;
          v16 = 0;
          do
          {
            if ( (v14 & 1) != 0 )
              ++v16;
            v14 >>= 1;
            --v15;
          }
          while ( v15 );
          if ( v16 == 1 )
          {
LABEL_24:
            if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
            {
              KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
              KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = v13;
            }
            if ( (a4 & 1) == 0 )
              break;
          }
        }
      }
      v13 += v11;
      if ( v13 >= 0x1000 )
        return v6;
    }
  }
  return 1;
}
