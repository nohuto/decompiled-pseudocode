/*
 * XREFs of RtlInitCodePageTable @ 0x180087AC0
 * Callers:
 *     RtlInitNlsTables @ 0x180087A50 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int16 v4; // r9
  USHORT *v5; // rax
  USHORT *v6; // rax

  v2 = *TableBase;
  v3 = v2 + 1;
  v4 = TableBase[v2] + v2;
  CodePageTable->CodePage = TableBase[1];
  CodePageTable->MaximumCharacterSize = TableBase[2];
  CodePageTable->DefaultChar = TableBase[3];
  CodePageTable->UniDefaultChar = TableBase[4];
  CodePageTable->TransDefaultChar = TableBase[5];
  CodePageTable->TransUniDefaultChar = TableBase[6];
  *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
  *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
  v5 = &TableBase[v3];
  CodePageTable->MultiByteTable = v5;
  if ( v5[256] )
    v6 = v5 + 513;
  else
    v6 = v5 + 257;
  CodePageTable->DBCSRanges = v6;
  if ( *v6 )
  {
    CodePageTable->DBCSOffsets = v6 + 1;
    CodePageTable->DBCSCodePage = 1;
  }
  else
  {
    CodePageTable->DBCSCodePage = 0;
    CodePageTable->DBCSOffsets = 0LL;
  }
  CodePageTable->WideCharTable = &TableBase[v4 + 1];
}
