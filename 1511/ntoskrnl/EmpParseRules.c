/*
 * XREFs of EmpParseRules @ 0x14075FDC8
 * Callers:
 *     EmpParseInfDatabase @ 0x14075F0F8 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x1400995C4 (EmpSearchRuleDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1401352C8 (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strtoul @ 0x14014645C (strtoul.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EmpParseRuleExpression @ 0x14075F95C (EmpParseRuleExpression.c)
 *     CmpGetSectionLineIndexValueCount @ 0x1407600AC (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140760228 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x1407602BC (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1407607FC (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x14076090C (CmpGetKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x140760B1C (EmpInfParseSearchDependencyList.c)
 */

__int64 __fastcall EmpParseRules(__int64 a1)
{
  unsigned int v1; // esi
  int GuidFromName; // edi
  unsigned int v4; // r15d
  __int64 KeyName; // r13
  char *PoolWithTag; // rax
  __int64 v7; // rbx
  char *v8; // r9
  _QWORD *v9; // rax
  void *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v14; // r14d
  bool v15; // zf
  unsigned int v16; // eax
  PVOID v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  unsigned int i; // edi
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  void *v33; // rcx
  unsigned int SectionLineCount; // [rsp+20h] [rbp-48h]
  _QWORD v35[2]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "RuleDef");
  v4 = SectionLineCount;
  if ( SectionLineCount )
  {
    do
    {
      KeyName = CmpGetKeyName(a1, "RuleDef", v1);
      if ( !KeyName )
        return 0;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x74694D45u);
      v7 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *((_DWORD *)PoolWithTag + 4) = 1;
      PoolWithTag[20] = 0;
      v8 = PoolWithTag;
      *((_QWORD *)PoolWithTag + 7) = 0LL;
      *((_QWORD *)PoolWithTag + 8) = 0LL;
      *((_QWORD *)PoolWithTag + 9) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      v9 = PoolWithTag + 80;
      v9[1] = v9;
      *v9 = v9;
      *(_DWORD *)(v7 + 48) = 0;
      *(_DWORD *)(v7 + 40) = 0;
      GuidFromName = EmpInfParseGetGuidFromName(a1, "RuleNameGuidDef", KeyName, v8);
      v10 = (void *)v7;
      if ( GuidFromName < 0 || EmpSearchRuleDatabase((_QWORD *)v7) )
      {
        ExFreePoolWithTag(v10, 0x74694D45u);
        ++v1;
      }
      else
      {
        SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v1, 0LL);
        if ( !SectionLineIndex )
          goto LABEL_44;
        *(_DWORD *)(v7 + 40) = strtoul(SectionLineIndex, 0LL, 10);
        v12 = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v1, 1LL);
        if ( !v12 )
          goto LABEL_44;
        *(_DWORD *)(v7 + 44) = strtoul(v12, 0LL, 10);
        SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "RuleDef", v1);
        v14 = SectionLineIndexValueCount;
        if ( SectionLineIndexValueCount < 2 )
          goto LABEL_44;
        v15 = SectionLineIndexValueCount == 2;
        v16 = SectionLineIndexValueCount - 2;
        *(_DWORD *)(v7 + 48) = v16;
        if ( !v15 )
        {
          v18 = ExAllocatePoolWithTag(PagedPool, 8LL * v16, 0x74694D45u);
          *(_QWORD *)(v7 + 56) = v18;
          if ( !v18 )
          {
            ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
            return (unsigned int)-1073741670;
          }
          memset(v18, 0, 8LL * *(unsigned int *)(v7 + 48));
          v19 = 2;
          if ( v14 > 2 )
          {
            while ( 1 )
            {
              v20 = CmpGetSectionLineIndex(a1, "RuleDef", v1, v19);
              GuidFromName = EmpInfParseGetGuidFromName(a1, "EntryTypeGuidDef", v20, v35);
              if ( GuidFromName < 0 )
                break;
              v21 = EmpSearchEntryDatabase(v35);
              if ( !v21 )
                break;
              v22 = v21 + 9;
              *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * (v19 - 2)) = v21;
              if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v21 + 9, v7) )
              {
                v23 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
                if ( !v23 )
                {
                  GuidFromName = -1073741670;
LABEL_22:
                  v4 = SectionLineCount;
                  goto LABEL_23;
                }
                *v23 = v7;
                v23[1] = *v22;
                *v22 = v23 + 1;
              }
              if ( ++v19 >= v14 )
                goto LABEL_22;
            }
            v4 = SectionLineCount;
LABEL_28:
            v15 = v19 == 2;
            v24 = v19 - 2;
            if ( !v15 )
            {
              v25 = 0LL;
              do
              {
                v26 = *(_QWORD *)(v25 + *(_QWORD *)(v7 + 56));
                v27 = (_QWORD *)(*(_QWORD *)(v26 + 72) - 8LL);
                if ( *v27 == v7 )
                {
                  v28 = *(_QWORD **)(v26 + 72);
                  if ( v28 )
                    *(_QWORD *)(v26 + 72) = *v28;
                  ExFreePoolWithTag(v27, 0x74694D45u);
                }
                v25 += 8LL;
                --v24;
              }
              while ( v24 );
            }
            goto LABEL_42;
          }
LABEL_23:
          if ( GuidFromName < 0 )
            goto LABEL_28;
        }
        GuidFromName = EmpParseRuleExpression(a1, KeyName, v7);
        if ( GuidFromName < 0 )
        {
          for ( i = 0; i < *(_DWORD *)(v7 + 48); ++i )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * i);
            v31 = (_QWORD *)(*(_QWORD *)(v30 + 72) - 8LL);
            if ( *v31 == v7 )
            {
              v32 = *(_QWORD **)(v30 + 72);
              if ( v32 )
                *(_QWORD *)(v30 + 72) = *v32;
              ExFreePoolWithTag(v31, 0x74694D45u);
            }
          }
LABEL_42:
          v33 = *(void **)(v7 + 56);
          if ( v33 )
            ExFreePoolWithTag(v33, 0x74694D45u);
LABEL_44:
          ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
          ++v1;
          GuidFromName = 0;
          continue;
        }
        ++v1;
        *(_QWORD *)(v7 + 24) = EmpRuleListHead;
        ++EmpNumberOfRules;
        EmpRuleListHead = v7 + 24;
      }
    }
    while ( v1 < v4 );
  }
  return (unsigned int)GuidFromName;
}
