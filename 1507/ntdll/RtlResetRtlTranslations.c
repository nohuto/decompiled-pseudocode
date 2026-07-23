/*
 * XREFs of RtlResetRtlTranslations @ 0x1800CD400
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800BEA04 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  __int64 v1; // rdi
  PUSHORT DBCSOffsets; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  PVOID WideCharTable; // rax
  PUSHORT v10; // rax
  __int128 v11; // xmm1
  PVOID v12; // rax

  v1 = 4LL;
  if ( TableInfo->AnsiTableInfo.DBCSCodePage )
  {
    DBCSOffsets = TableInfo->AnsiTableInfo.DBCSOffsets;
    v4 = 4LL;
    v5 = NlsLeadByteInfoTable;
    do
    {
      *v5 = *(_OWORD *)DBCSOffsets;
      v5[1] = *((_OWORD *)DBCSOffsets + 1);
      v5[2] = *((_OWORD *)DBCSOffsets + 2);
      v5[3] = *((_OWORD *)DBCSOffsets + 3);
      v5[4] = *((_OWORD *)DBCSOffsets + 4);
      v5[5] = *((_OWORD *)DBCSOffsets + 5);
      v5[6] = *((_OWORD *)DBCSOffsets + 6);
      v5 += 8;
      v6 = *((_OWORD *)DBCSOffsets + 7);
      DBCSOffsets += 64;
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
  }
  v7 = NlsOemLeadByteInfoTable;
  v8 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
  NlsMbAnsiCodePageTables = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
  NlsAnsiToUnicodeData = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
  WideCharTable = TableInfo->AnsiTableInfo.WideCharTable;
  NlsMbCodePageTag = !v8;
  NlsUnicodeToAnsiData = (__int64)WideCharTable;
  NlsUnicodeToMbAnsiData = (__int64)WideCharTable;
  NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
  if ( TableInfo->OemTableInfo.DBCSCodePage )
  {
    v10 = TableInfo->OemTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v7 = *(_OWORD *)v10;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v10 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v10 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v10 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)v10 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)v10 + 5);
      *((_OWORD *)v7 + 6) = *((_OWORD *)v10 + 6);
      v7 += 64;
      v11 = *((_OWORD *)v10 + 7);
      v10 += 64;
      *((_OWORD *)v7 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
  }
  v8 = TableInfo->OemTableInfo.DBCSCodePage == 0;
  NlsMbOemCodePageTables = (__int64)TableInfo->OemTableInfo.DBCSOffsets;
  NlsOemToUnicodeData = (__int64)TableInfo->OemTableInfo.MultiByteTable;
  v12 = TableInfo->OemTableInfo.WideCharTable;
  NlsMbOemCodePageTag = !v8;
  NlsUnicodeToOemData = (__int64)v12;
  NlsUnicodeToMbOemData = (__int64)v12;
  NlsOemCodePage = TableInfo->OemTableInfo.CodePage;
  OemDefaultChar = TableInfo->OemTableInfo.DefaultChar;
  OemTransUniDefaultChar = TableInfo->OemTableInfo.TransDefaultChar;
  Nls844UnicodeUpcaseTable = (__int64)TableInfo->UpperCaseTable;
  Nls844UnicodeLowercaseTable = (__int64)TableInfo->LowerCaseTable;
  UnicodeDefaultChar = TableInfo->AnsiTableInfo.UniDefaultChar;
}
