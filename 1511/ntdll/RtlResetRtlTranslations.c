/*
 * XREFs of RtlResetRtlTranslations @ 0x180085F00
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800909D0 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 result; // rax

  v1 = 4LL;
  if ( *(_WORD *)(a1 + 76) )
  {
    v3 = *(_OWORD **)(a1 + 120);
    v4 = 4LL;
    v5 = NlsLeadByteInfoTable;
    do
    {
      *v5 = *v3;
      v5[1] = v3[1];
      v5[2] = v3[2];
      v5[3] = v3[3];
      v5[4] = v3[4];
      v5[5] = v3[5];
      v5[6] = v3[6];
      v5 += 8;
      v6 = v3[7];
      v3 += 8;
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
  v8 = *(_WORD *)(a1 + 76) == 0;
  NlsMbAnsiCodePageTables = *(_QWORD *)(a1 + 120);
  NlsAnsiToUnicodeData = *(_QWORD *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 104);
  NlsMbCodePageTag = !v8;
  NlsUnicodeToAnsiData = v9;
  NlsUnicodeToMbAnsiData = v9;
  NlsAnsiCodePage = *(_WORD *)(a1 + 64);
  if ( *(_WORD *)(a1 + 12) )
  {
    v10 = *(_OWORD **)(a1 + 56);
    do
    {
      *(_OWORD *)v7 = *v10;
      *((_OWORD *)v7 + 1) = v10[1];
      *((_OWORD *)v7 + 2) = v10[2];
      *((_OWORD *)v7 + 3) = v10[3];
      *((_OWORD *)v7 + 4) = v10[4];
      *((_OWORD *)v7 + 5) = v10[5];
      *((_OWORD *)v7 + 6) = v10[6];
      v7 += 64;
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v7 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
  }
  v8 = *(_WORD *)(a1 + 12) == 0;
  NlsMbOemCodePageTables = *(_QWORD *)(a1 + 56);
  NlsOemToUnicodeData = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 40);
  NlsMbOemCodePageTag = !v8;
  NlsUnicodeToOemData = v12;
  NlsUnicodeToMbOemData = v12;
  NlsOemCodePage = *(_WORD *)a1;
  OemDefaultChar = *(_WORD *)(a1 + 4);
  OemTransUniDefaultChar = *(_WORD *)(a1 + 8);
  Nls844UnicodeUpcaseTable = *(_QWORD *)(a1 + 128);
  Nls844UnicodeLowercaseTable = *(_QWORD *)(a1 + 136);
  result = *(unsigned __int16 *)(a1 + 70);
  UnicodeDefaultChar = *(_WORD *)(a1 + 70);
  return result;
}
