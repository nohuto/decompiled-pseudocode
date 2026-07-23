/*
 * XREFs of EmpParseStrings @ 0x1407A83F0
 * Callers:
 *     EmpParseInfDatabase @ 0x1407A7384 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14013D2E4 (RtlStringCchCopyA.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EmpInfParseGetSectionLineCount @ 0x1407A85B8 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1407A8AF8 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseStrings(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  unsigned int SectionLineCount; // eax
  unsigned int v4; // esi
  _BYTE *v5; // rbp
  PVOID PoolWithTag; // rax
  unsigned int v7; // edi
  __int64 SectionLineIndex; // rax
  const char *v9; // r14
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rbp
  PVOID *v13; // r13
  __int64 v14; // rdx
  PVOID v16; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // r14d
  __int64 v19; // rdx
  signed __int64 v20; // rcx

  v1 = a1;
  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "Strings");
  v4 = SectionLineCount;
  if ( !SectionLineCount )
    return v2;
  v5 = EmpStringTable;
  if ( !EmpStringTable )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * SectionLineCount, 0x74694D45u);
    EmpStringTable = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v4);
      goto LABEL_5;
    }
    return (unsigned int)-1073741670;
  }
  v16 = ExAllocatePoolWithTag(PagedPool, 8LL * (SectionLineCount + EmpNumberOfStrings), 0x74694D45u);
  EmpStringTable = v16;
  v17 = v16;
  if ( !v16 )
    return (unsigned int)-1073741670;
  v18 = EmpNumberOfStrings;
  memset(v16, 0, 8LL * (EmpNumberOfStrings + v4));
  if ( v18 )
  {
    v19 = v18;
    v20 = v5 - (_BYTE *)v17;
    do
    {
      *v17 = *(_QWORD *)((char *)v17 + v20);
      ++v17;
      --v19;
    }
    while ( v19 );
  }
  ExFreePoolWithTag(v5, 0x74694D45u);
  v1 = a1;
LABEL_5:
  v7 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      SectionLineIndex = CmpGetSectionLineIndex(v1, "Strings", v7, 0LL);
      v9 = (const char *)SectionLineIndex;
      if ( SectionLineIndex )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_BYTE *)(SectionLineIndex + v10) );
        v11 = (char *)ExAllocatePoolWithTag(PagedPool, v10 + 1, 0x74694D45u);
        v12 = (unsigned int)EmpNumberOfStrings;
        v13 = (PVOID *)EmpStringTable;
        *((_QWORD *)EmpStringTable + (unsigned int)EmpNumberOfStrings) = v11;
        if ( !v11 )
          return (unsigned int)-1073741670;
        v14 = -1LL;
        do
          ++v14;
        while ( v9[v14] );
        v2 = RtlStringCchCopyA(v11, v14 + 1, v9);
        if ( (v2 & 0x80000000) != 0 )
        {
          ExFreePoolWithTag(v13[v12], 0x74694D45u);
          v2 = 0;
        }
        else
        {
          EmpNumberOfStrings = v12 + 1;
        }
        ++v7;
      }
      if ( v7 >= v4 )
        return v2;
      v1 = a1;
    }
  }
  return v2;
}
