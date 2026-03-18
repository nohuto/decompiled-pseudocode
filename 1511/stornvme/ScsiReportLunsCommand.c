/*
 * XREFs of ScsiReportLunsCommand @ 0x1C00065F8
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  _BYTE *v3; // r8
  _DWORD *v4; // r10
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  __int64 v7; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_BYTE **)(a2 + 64);
    v4 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v3 = *(_BYTE **)(a2 + 24);
    v4 = (_DWORD *)(a2 + 16);
  }
  *(_BYTE *)(a2 + 3) = 1;
  v5 = 8 * *(_DWORD *)(a1 + 140);
  if ( (unsigned int)*v4 >= (unsigned __int64)v5 + 8 )
  {
    v3[3] = v5;
    v6 = 0;
    *v3 = HIBYTE(v5);
    v3[1] = BYTE2(v5);
    for ( v3[2] = BYTE1(v5); v6 < *(_DWORD *)(a1 + 140); *(_WORD *)&v3[8 * v7 + 14] = 0 )
    {
      v7 = v6;
      v3[8 * v6 + 9] = v6;
      ++v6;
      v3[8 * v7 + 8] = 0;
      *(_DWORD *)&v3[8 * v7 + 10] = 0;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 18;
    if ( *v4 >= 4u )
    {
      v3[3] = v5;
      *v3 = HIBYTE(v5);
      v3[1] = BYTE2(v5);
      v3[2] = BYTE1(v5);
    }
  }
  return 0LL;
}
