/*
 * XREFs of EmpParseRuleExpression @ 0x14075F95C
 * Callers:
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EmpParseRuleTerm @ 0x14075F808 (EmpParseRuleTerm.c)
 *     CmpGetSectionLineIndex @ 0x1407607FC (CmpGetSectionLineIndex.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x14076086C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpRuleParserStackPush @ 0x140760A5C (EmpRuleParserStackPush.c)
 *     EmpRuleParserStackPop @ 0x140760ACC (EmpRuleParserStackPop.c)
 *     EmpInfParseSearchDependencyList @ 0x140760B1C (EmpInfParseSearchDependencyList.c)
 */

__int64 __fastcall EmpParseRuleExpression(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _QWORD *v5; // r15
  PVOID v6; // r13
  _BYTE *ValueFromSectionAndKeyName; // r14
  _DWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  char v10; // al
  _DWORD *v11; // r14
  unsigned int v12; // r10d
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  unsigned int v24; // r11d
  unsigned int v25; // ecx
  __int64 v26; // rax
  PVOID v27; // rax
  __int64 v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  ULONG v31; // edx
  void *i; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rsi
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-20h] BYREF
  int v44; // [rsp+34h] [rbp-1Ch]
  unsigned int v45; // [rsp+38h] [rbp-18h] BYREF
  __int64 v46; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v47; // [rsp+48h] [rbp-8h] BYREF
  char v49; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v44 = 0;
  v5 = 0LL;
  v6 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, "Rule", a2);
  if ( !ValueFromSectionAndKeyName )
  {
    v4 = -1073741275;
    goto LABEL_75;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74734D45u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
  }
  do
  {
    if ( *ValueFromSectionAndKeyName != 37 )
    {
      if ( *ValueFromSectionAndKeyName == 38 )
        goto LABEL_47;
      if ( *ValueFromSectionAndKeyName != 63 )
      {
        if ( *ValueFromSectionAndKeyName != 124 )
          goto LABEL_58;
LABEL_47:
        if ( *(_DWORD *)v9 < 2u )
          goto LABEL_58;
        v5 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74734D45u);
        if ( !v5
          || (v5[1] = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74734D45u),
              v27 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74734D45u),
              v28 = v5[1],
              v5[4] = v27,
              !v28)
          || !v27 )
        {
LABEL_57:
          v4 = -1073741670;
          goto LABEL_28;
        }
        *(_BYTE *)v5 = *ValueFromSectionAndKeyName;
        *(_DWORD *)(v28 + 16) = 0;
        *(_QWORD *)(v5[1] + 24LL) = 0LL;
        *(_DWORD *)(v5[4] + 16LL) = 0;
        *(_QWORD *)(v5[4] + 24LL) = 0LL;
        if ( !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 v5[4],
                                 (unsigned int)v5[4] + 8,
                                 (int)v5 + 48,
                                 (__int64)(v5 + 5))
          || !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 v5[1],
                                 (unsigned int)v5[1] + 8,
                                 (int)v5 + 24,
                                 (__int64)(v5 + 2)) )
        {
          goto LABEL_55;
        }
        EmpRuleParserStackPush((_DWORD)v9, 2, (_DWORD)v5, 0, 0);
        goto LABEL_24;
      }
    }
    v4 = EmpParseRuleTerm(a1, (__int64)ValueFromSectionAndKeyName, &v47, &v46, &v43);
    if ( v4 < 0 )
      goto LABEL_28;
    v10 = *ValueFromSectionAndKeyName;
    v11 = v47;
    v49 = v10;
    if ( v10 == 63 )
    {
      v12 = v47[14];
      v13 = v47[15];
    }
    else
    {
      v12 = v47[10];
      v13 = v47[11];
    }
    v14 = v13 + v12;
    if ( (unsigned int)v14 > v43 )
      goto LABEL_58;
    v15 = 0LL;
    if ( v12 )
    {
      while ( *(_DWORD *)(v46 + 4 * v15) < *(_DWORD *)(a3 + 40) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v12 )
          goto LABEL_14;
      }
      goto LABEL_58;
    }
LABEL_14:
    v16 = v12;
    if ( v12 < (unsigned int)v14 )
    {
      while ( *(_DWORD *)(v46 + 4LL * v16) < *(_DWORD *)(a3 + 44) )
      {
        if ( ++v16 >= (unsigned int)v14 )
          goto LABEL_17;
      }
      goto LABEL_58;
    }
LABEL_17:
    if ( (unsigned int)v14 < v43 )
    {
      v24 = v12;
      do
      {
        v25 = *(_DWORD *)(v46 + 4 * v14);
        if ( v25 >= *(_DWORD *)(a3 + 48) )
          goto LABEL_58;
        v26 = v49 == 63 ? *(_QWORD *)&v47[2 * (v24 - v12) + 18] : *(_QWORD *)(*((_QWORD *)v47 + 7) + 8LL * (v24 - v12));
        if ( *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL * v25) != v26 )
          goto LABEL_58;
        v14 = (unsigned int)(v14 + 1);
        ++v24;
      }
      while ( (unsigned int)v14 < v43 );
    }
    if ( v49 == 63 )
    {
      v21 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74694D45u);
      if ( !v21 )
        goto LABEL_57;
      *v21 = v11;
      v22 = v11 + 12;
      v21[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v21 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 12, a3) )
      {
        v23 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
        if ( !v23 )
          goto LABEL_57;
        *v23 = a3;
        v23[1] = *v22;
        *v22 = v23 + 1;
      }
      EmpRuleParserStackPush((_DWORD)v9, 0, (_DWORD)v11, v46, v43);
    }
    else
    {
      v17 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
      if ( !v17 )
        goto LABEL_57;
      *v17 = v11;
      v18 = v11 + 8;
      v17[1] = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 72) = v17 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 8, a3) )
      {
        v19 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
        if ( !v19 )
          goto LABEL_57;
        *v19 = a3;
        v19[1] = *v18;
        *v18 = v19 + 1;
      }
      EmpRuleParserStackPush((_DWORD)v9, 1, (_DWORD)v11, v46, v43);
    }
LABEL_24:
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v45, (unsigned int)++v44);
  }
  while ( ValueFromSectionAndKeyName );
  if ( *(_DWORD *)v9 == 1 )
  {
    v6 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74694D45u);
    if ( (unsigned __int8)EmpRuleParserStackPop((_DWORD)v9, (_DWORD)v6, (int)v6 + 8, (int)v6 + 24, (__int64)v6 + 16) )
    {
      *(_QWORD *)(a3 + 96) = v6;
      goto LABEL_28;
    }
LABEL_55:
    v4 = -1073741275;
    goto LABEL_28;
  }
LABEL_58:
  v4 = -1073741811;
LABEL_28:
  if ( v9 )
  {
    while ( v9[1] )
      EmpRuleParserStackPop((_DWORD)v9, (unsigned int)&v45, (unsigned int)&v46, (unsigned int)&v47, (__int64)&v49);
    ExFreePoolWithTag(v9, 0x74734D45u);
  }
  if ( v4 < 0 )
  {
    if ( !v5 )
      goto LABEL_75;
    v29 = (void *)v5[1];
    if ( v29 )
      ExFreePoolWithTag(v29, 0x74734D45u);
    v30 = (void *)v5[4];
    if ( v30 )
      ExFreePoolWithTag(v30, 0x74734D45u);
    v31 = 1953713477;
    for ( i = v5; ; i = v34 )
    {
      ExFreePoolWithTag(i, v31);
LABEL_75:
      if ( !*(_QWORD *)(a3 + 72) )
        break;
      v33 = *(_QWORD **)(a3 + 72);
      if ( v33 )
        *(_QWORD *)(a3 + 72) = *v33;
      v34 = v33 - 1;
      v35 = *(v33 - 1);
      v36 = (_QWORD *)(*(_QWORD *)(v35 + 32) - 8LL);
      if ( *v36 == a3 )
      {
        v37 = *(_QWORD **)(v35 + 32);
        if ( v37 )
          *(_QWORD *)(v35 + 32) = *v37;
        ExFreePoolWithTag(v36, 0x74694D45u);
      }
      v31 = 1953058117;
    }
    while ( *(_QWORD *)(a3 + 64) )
    {
      v38 = *(_QWORD **)(a3 + 64);
      if ( v38 )
        *(_QWORD *)(a3 + 64) = *v38;
      v39 = v38 - 1;
      v40 = *(v38 - 1);
      v41 = (_QWORD *)(*(_QWORD *)(v40 + 48) - 8LL);
      if ( *v41 == a3 )
      {
        v42 = *(_QWORD **)(v40 + 48);
        if ( v42 )
          *(_QWORD *)(v40 + 48) = *v42;
        ExFreePoolWithTag(v41, 0x74694D45u);
      }
      ExFreePoolWithTag(v39, 0x74694D45u);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x74694D45u);
  }
  return (unsigned int)v4;
}
