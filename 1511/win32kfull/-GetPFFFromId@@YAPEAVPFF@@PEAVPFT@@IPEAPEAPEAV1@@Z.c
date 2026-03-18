/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C010B590
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C010B400 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C025C934 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C02695F0 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027F828 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02B3850 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B37C4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  struct PFF **v6; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = HIBYTE(a2);
  if ( HIBYTE(a2) >= v4 )
    return 0LL;
  do
  {
    v6 = &a1[v5 + 4];
    for ( i = (unsigned __int64)*v6; i && *(_DWORD *)(i + 140) != a2; i = *(_QWORD *)(i + 8) )
      ;
    v5 += 256;
  }
  while ( v5 < v4 );
  if ( i )
  {
    if ( a1 == gpPFTPrivate )
    {
      v9[0] = i;
      i &= -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v9) != 0LL);
    }
    if ( i )
    {
      if ( a3 )
        *a3 = v6;
    }
  }
  return (struct PFF *)i;
}
