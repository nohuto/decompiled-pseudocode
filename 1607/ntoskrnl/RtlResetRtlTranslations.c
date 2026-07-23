/*
 * XREFs of RtlResetRtlTranslations @ 0x14057DD28
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void __stdcall RtlResetRtlTranslations(PNLSTABLEINFO NlsTable)
{
  USHORT DBCSCodePage; // bx
  __int16 *v2; // rcx
  PUSHORT DBCSOffsets; // rdi
  __int64 v4; // rsi
  __int16 *v5; // rcx
  bool v6; // zf
  PUSHORT v7; // rbx
  USHORT v8; // di
  PUSHORT v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  PUSHORT v12; // rax
  __int128 v13; // xmm1

  DBCSCodePage = CodePageTable.DBCSCodePage;
  v2 = NlsLeadByteInfoTable;
  DBCSOffsets = CodePageTable.DBCSOffsets;
  v4 = 4LL;
  if ( CodePageTable.DBCSCodePage )
  {
    v9 = CodePageTable.DBCSOffsets;
    v10 = 4LL;
    do
    {
      *(_OWORD *)v2 = *(_OWORD *)v9;
      *((_OWORD *)v2 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)v2 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)v2 + 3) = *((_OWORD *)v9 + 3);
      *((_OWORD *)v2 + 4) = *((_OWORD *)v9 + 4);
      *((_OWORD *)v2 + 5) = *((_OWORD *)v9 + 5);
      *((_OWORD *)v2 + 6) = *((_OWORD *)v9 + 6);
      v2 += 64;
      v11 = *((_OWORD *)v9 + 7);
      v9 += 64;
      *((_OWORD *)v2 - 1) = v11;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
  }
  v5 = NlsOemLeadByteInfoTable;
  v6 = DBCSCodePage == 0;
  NlsAnsiToUnicodeData = (__int64)CodePageTable.MultiByteTable;
  v7 = InitTableInfo.DBCSOffsets;
  LOBYTE(NlsMbCodePageTag) = !v6;
  NlsMbAnsiCodePageTables = (__int64)DBCSOffsets;
  v8 = InitTableInfo.DBCSCodePage;
  NlsUnicodeToAnsiData = (__int64)CodePageTable.WideCharTable;
  NlsUnicodeToMbAnsiData = (__int64)CodePageTable.WideCharTable;
  NlsAnsiCodePage = CodePageTable.CodePage;
  if ( InitTableInfo.DBCSCodePage )
  {
    v12 = InitTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v5 = *(_OWORD *)v12;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v12 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)v12 + 2);
      *((_OWORD *)v5 + 3) = *((_OWORD *)v12 + 3);
      *((_OWORD *)v5 + 4) = *((_OWORD *)v12 + 4);
      *((_OWORD *)v5 + 5) = *((_OWORD *)v12 + 5);
      *((_OWORD *)v5 + 6) = *((_OWORD *)v12 + 6);
      v5 += 64;
      v13 = *((_OWORD *)v12 + 7);
      v12 += 64;
      *((_OWORD *)v5 - 1) = v13;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
  }
  LOBYTE(NlsMbOemCodePageTag) = v8 != 0;
  NlsOemToUnicodeData = (__int64)InitTableInfo.MultiByteTable;
  NlsUnicodeToOemData = (__int64)InitTableInfo.WideCharTable;
  NlsUnicodeToMbOemData = (__int64)InitTableInfo.WideCharTable;
  NlsOemCodePage = InitTableInfo.CodePage;
  OemDefaultChar = InitTableInfo.DefaultChar;
  OemTransUniDefaultChar = InitTableInfo.TransDefaultChar;
  *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) = (BOOLEAN *)qword_1407606E0;
  Nls844UnicodeLowercaseTable = qword_1407606E8;
  NlsMbOemCodePageTables = (__int64)v7;
  UnicodeDefaultChar = CodePageTable.UniDefaultChar;
}
