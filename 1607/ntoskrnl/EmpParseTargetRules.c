/*
 * XREFs of EmpParseTargetRules @ 0x1407A8604
 * Callers:
 *     EmpParseInfDatabase @ 0x1407A7384 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x140009024 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140009044 (EmpSearchRuleDatabase.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpGetSectionLineIndexValueCount @ 0x1407A83A8 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x1407A8524 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x1407A85B8 (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetSectionLineIndex @ 0x1407A8AF8 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x1407A8C08 (CmpGetKeyName.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 KeyName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  int v8; // r15d
  void *v9; // r14
  unsigned int SectionLineIndexValueCount; // r13d
  _QWORD *v11; // rax
  unsigned int v12; // ebp
  PVOID v13; // rax
  unsigned int i; // edi
  __int64 SectionLineIndex; // rax
  _QWORD *v16; // rax
  PVOID PoolWithTag; // rax
  size_t v19; // r15
  int v20; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+48h] [rbp-50h]
  int GuidFromName; // [rsp+50h] [rbp-48h]
  unsigned int SectionLineCount; // [rsp+54h] [rbp-44h]
  GUID v24; // [rsp+58h] [rbp-40h] BYREF

  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  if ( SectionLineCount )
  {
    v3 = 0;
    while ( 1 )
    {
      v2 = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", v3);
      if ( !KeyName )
        goto LABEL_17;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v24);
      v2 = GuidFromName;
      if ( GuidFromName < 0 )
        goto LABEL_17;
      v5 = EmpSearchRuleDatabase(&v24);
      v6 = (__int64)v5;
      if ( !v5 )
        goto LABEL_17;
      v7 = *((_DWORD *)v5 + 10);
      v8 = 0;
      v9 = 0LL;
      v20 = 0;
      if ( !(*(_DWORD *)(v6 + 44) + v7) )
        goto LABEL_16;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, (__int64)"TargetRuleDef", v3);
      if ( SectionLineIndexValueCount )
        break;
LABEL_17:
      if ( ++v3 >= SectionLineCount )
        return v2;
    }
    v11 = EmpSearchTargetRuleList(v6);
    v12 = SectionLineIndexValueCount * (*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 40));
    Size = (size_t)v11;
    if ( v11 )
    {
      v12 += *((_DWORD *)v11 + 6);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v12, 0x74694D45u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 4LL * v12);
      v19 = Size;
      memmove(v9, *(const void **)(Size + 16), 4LL * *(unsigned int *)(Size + 24));
      LODWORD(v19) = *(_DWORD *)(v19 + 24);
      v20 = v19;
      ExFreePoolWithTag(*(PVOID *)(Size + 16), 0x74694D45u);
    }
    else
    {
      Size = 4LL * v12;
      v13 = ExAllocatePoolWithTag(PagedPool, Size, 0x74694D45u);
      v9 = v13;
      if ( !v13 )
        return (unsigned int)-1073741670;
      memset(v13, 0, Size);
    }
    LODWORD(Size) = 0;
    for ( i = Size; i < SectionLineIndexValueCount; ++i )
    {
      SectionLineIndex = CmpGetSectionLineIndex(a1, "TargetRuleDef", v3, i);
      EmpParseTargetRuleStringIndexList(
        a1,
        SectionLineIndex,
        *(unsigned int *)(v6 + 40),
        *(unsigned int *)(v6 + 44),
        v9,
        v12,
        &v20);
    }
    v2 = GuidFromName;
    v8 = v20;
    if ( !v20 )
    {
      ExFreePoolWithTag(v9, 0x74694D45u);
      goto LABEL_17;
    }
LABEL_16:
    v16 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74694D45u);
    *(_DWORD *)v16 = 0;
    ++EmpNumberOfTargetRules;
    v16[1] = v6;
    v16[2] = v9;
    *((_DWORD *)v16 + 6) = v8;
    v16[4] = EmpTargetRuleListHead;
    EmpTargetRuleListHead = (__int64)(v16 + 4);
    goto LABEL_17;
  }
  return v2;
}
