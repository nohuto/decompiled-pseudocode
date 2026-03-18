/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0110120
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C010F6A0 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C025CC14 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C026AA60 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027FE70 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02B4880 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B47F0 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  unsigned int v4; // edi
  struct PFF **v8; // r15
  struct PFF *i; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HIBYTE(a2);
  if ( HIBYTE(a2) >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v8 = &a1[v4 + 4];
    for ( i = *v8; ; i = *(struct PFF **)(v10 + 8) )
    {
      v10 = (__int64)SkipInvalidPff(i);
      v11 = v10;
      if ( !v10 || *(_DWORD *)(v10 + 140) == a2 )
        break;
    }
    v4 += 256;
  }
  while ( v4 < *((_DWORD *)a1 + 6) );
  if ( v10 )
  {
    if ( a1 == gpPFTPrivate )
    {
      v12[0] = v10;
      v11 = -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v12) != 0LL) & v10;
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = v8;
    }
  }
  return (struct PFF *)v11;
}
