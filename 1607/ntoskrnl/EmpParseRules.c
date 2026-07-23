/*
 * XREFs of EmpParseRules @ 0x1407A8094
 * Callers:
 *     EmpParseInfDatabase @ 0x1407A7384 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x140009044 (EmpSearchRuleDatabase.c)
 *     EmpSearchEntryDatabase @ 0x14013D3A0 (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strtoul @ 0x14014FDF8 (strtoul.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EmpParseRuleExpression @ 0x1407A7BE4 (EmpParseRuleExpression.c)
 *     CmpGetSectionLineIndexValueCount @ 0x1407A83A8 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x1407A8524 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x1407A85B8 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1407A8AF8 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x1407A8C08 (CmpGetKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x1407A8E10 (EmpInfParseSearchDependencyList.c)
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
  unsigned int i; // edi
  void *v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
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
          goto LABEL_29;
        *(_DWORD *)(v7 + 40) = strtoul(SectionLineIndex, 0LL, 10);
        v12 = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v1, 1LL);
        if ( !v12 )
          goto LABEL_29;
        *(_DWORD *)(v7 + 44) = strtoul(v12, 0LL, 10);
        SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "RuleDef", v1);
        v14 = SectionLineIndexValueCount;
        if ( SectionLineIndexValueCount < 2 )
          goto LABEL_29;
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
LABEL_32:
            v15 = v19 == 2;
            v26 = v19 - 2;
            if ( !v15 )
            {
              v27 = 0LL;
              do
              {
                v28 = *(_QWORD *)(v27 + *(_QWORD *)(v7 + 56));
                v29 = (_QWORD *)(*(_QWORD *)(v28 + 72) - 8LL);
                if ( *v29 == v7 )
                {
                  v30 = *(_QWORD **)(v28 + 72);
                  if ( v30 )
                    *(_QWORD *)(v28 + 72) = *v30;
                  ExFreePoolWithTag(v29, 0x74694D45u);
                }
                v27 += 8LL;
                --v26;
              }
              while ( v26 );
            }
            goto LABEL_27;
          }
LABEL_23:
          if ( GuidFromName < 0 )
            goto LABEL_32;
        }
        GuidFromName = EmpParseRuleExpression(a1, KeyName, v7);
        if ( GuidFromName < 0 )
        {
          for ( i = 0; i < *(_DWORD *)(v7 + 48); ++i )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * i);
            v32 = (_QWORD *)(*(_QWORD *)(v31 + 72) - 8LL);
            if ( *v32 == v7 )
            {
              v33 = *(_QWORD **)(v31 + 72);
              if ( v33 )
                *(_QWORD *)(v31 + 72) = *v33;
              ExFreePoolWithTag(v32, 0x74694D45u);
            }
          }
LABEL_27:
          v25 = *(void **)(v7 + 56);
          if ( v25 )
            ExFreePoolWithTag(v25, 0x74694D45u);
LABEL_29:
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
