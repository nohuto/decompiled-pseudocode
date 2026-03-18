/*
 * XREFs of ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0028360
 * Callers:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0025C30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025C98 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025FA4 (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     bCvtPts @ 0x1C0067238 (bCvtPts.c)
 */

__int64 __fastcall EXFORMOBJ::bXformRound(EXFORMOBJ *this, struct _POINTL *a2, struct _POINTFIX *a3, __int64 a4)
{
  __int64 v6; // rcx
  struct _POINTFIX *v7; // rbx
  unsigned int v8; // esi
  struct _POINTFIX *v9; // rcx
  struct _POINTL *v11; // rcx
  signed __int64 v12; // rbx

  v6 = *(_QWORD *)this;
  v7 = a3;
  if ( (*(_BYTE *)(v6 + 32) & 0x43) == 0x43 )
  {
    v11 = &a2[a4];
    if ( a2 < v11 )
    {
      v12 = (char *)a3 - (char *)a2;
      do
      {
        *(LONG *)((char *)&a2->x + v12) = 16 * a2->x;
        *(LONG *)((char *)&a2->y + v12) = 16 * a2->y;
        ++a2;
      }
      while ( a2 < v11 );
    }
    return 1LL;
  }
  else
  {
    v8 = bCvtPts(v6, a2);
    if ( !v8 )
      EngSetLastError(0x216u);
    if ( *((_DWORD *)this + 2) != 2 )
    {
      v9 = &v7[a4];
      while ( v7 < v9 )
      {
        v7->x = (v7->x + 8) & 0xFFFFFFF0;
        v7->y = (v7->y + 8) & 0xFFFFFFF0;
        ++v7;
      }
    }
    return v8;
  }
}
