/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012986C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C01296C0 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0259D24 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0267A90 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027DCCC (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02B6980 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B68F8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  unsigned int v3; // r9d
  struct PFT **v5; // r8
  struct PFF **v7; // rsi
  struct PFF *i; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // rbx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = HIBYTE(a2);
  v5 = a1;
  if ( HIBYTE(a2) >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v7 = &v5[v3 + 5];
    for ( i = *v7; ; i = *(struct PFF **)(v9 + 8) )
    {
      v9 = (__int64)SkipInvalidPff(i);
      v13 = v9;
      if ( !v9 || *(_DWORD *)(v9 + 140) == v10 )
        break;
    }
    v3 = v11 + 256;
  }
  while ( v3 < v12 );
  if ( v9 )
  {
    if ( v5 == gpPFTPrivate )
    {
      v14[0] = v9;
      v13 = -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v14) != 0LL) & v9;
    }
    if ( v13 )
    {
      if ( a3 )
        *a3 = v7;
    }
  }
  return (struct PFF *)v13;
}
