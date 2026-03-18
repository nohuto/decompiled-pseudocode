/*
 * XREFs of ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C0001D50
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C00D0EBC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AF4A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     PATHOBJ_bEnumClipLines @ 0x1C02B5830 (PATHOBJ_bEnumClipLines.c)
 * Callees:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C0001DF8 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C00020F8 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 */

_BOOL8 __fastcall XCLIPOBJ::bEnumPath(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        unsigned int a3,
        struct _CLIPLINE *a4,
        int a5)
{
  unsigned int *v9; // r8
  __int64 v10; // r8

  a4->c = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    return 0LL;
  do
  {
    if ( !(unsigned int)XCLIPOBJ::bEnumLine(this, a3, a4) )
      XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, v9);
  }
  while ( !a4->c && (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0 );
  v10 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v10 + 24) & 0x2000000) != 0 && *(int *)(v10 + 180) > 0 )
  {
    if ( a5 )
      **(_DWORD **)(v10 + 184) = (unsigned __int16)(*(_DWORD *)(v10 + 176) % *(_DWORD *)(v10 + 200)) | ((unsigned __int16)(*(_DWORD *)(v10 + 176) / *(_DWORD *)(v10 + 200)) << 16);
  }
  return (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0;
}
