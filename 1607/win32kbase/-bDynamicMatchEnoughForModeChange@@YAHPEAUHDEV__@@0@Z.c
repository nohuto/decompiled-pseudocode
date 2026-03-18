/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006C9DC
 * Callers:
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C3078 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C30AC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  _DWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 1;
  v9 = a1;
  v8 = a2;
  if ( a1[533] == 1 || a2[533] == 1 )
    v2 = 0;
  if ( ((a2[462] ^ a1[462]) & 0x840000) != 0 )
    v2 = 0;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v6 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v8);
    if ( v6 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v9)
      || (v7 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v8), v7 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v9)) )
    {
      v2 = 0;
    }
  }
  if ( *((_QWORD *)a2 + 365)
    || *((_QWORD *)a2 + 383)
    || *((_QWORD *)a2 + 384)
    || *((_QWORD *)a2 + 390)
    || *((_QWORD *)a2 + 376) )
  {
    v2 = 0;
  }
  if ( *((_QWORD *)a1 + 365)
    || *((_QWORD *)a1 + 383)
    || *((_QWORD *)a1 + 384)
    || *((_QWORD *)a1 + 390)
    || *((_QWORD *)a1 + 376) )
  {
    return 0;
  }
  return v2;
}
