/*
 * XREFs of IntersectRECTL @ 0x1C00A4E68
 * Callers:
 *     CheckBMPNeedFixup @ 0x1C00A4664 (CheckBMPNeedFixup.c)
 *     ComputeAABBP @ 0x1C00A4AD4 (ComputeAABBP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IntersectRECTL(int *a1, int *a2)
{
  int v2; // r8d
  int v4; // r10d
  signed int v5; // ecx
  signed int v6; // r11d
  __int128 v8; // [rsp+0h] [rbp-18h]

  v2 = *a1;
  v4 = a1[1];
  if ( *a1 < *a2 )
    v2 = *a2;
  v5 = a1[2];
  if ( v4 < a2[1] )
    v4 = a2[1];
  v6 = a1[3];
  if ( v5 > a2[2] )
    v5 = a2[2];
  LODWORD(v8) = v2;
  if ( v6 > a2[3] )
    v6 = a2[3];
  DWORD1(v8) = v4;
  *((_QWORD *)&v8 + 1) = __PAIR64__(v6, v5);
  *(_OWORD *)a1 = v8;
  return v5 > v2 && v6 > v4;
}
