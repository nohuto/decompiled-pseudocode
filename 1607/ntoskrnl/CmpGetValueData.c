/*
 * XREFs of CmpGetValueData @ 0x140441E30
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpGetValueDataFromCache @ 0x1404018B0 (CmpGetValueDataFromCache.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x1407AFCE0 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  __int64 v13; // rax
  bool result; // al
  __int64 v15; // rdx
  char *PoolWithTag; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r12
  unsigned int v20; // edi
  const void *v21; // rax
  size_t v22; // r8
  char v23; // di
  int v24; // [rsp+60h] [rbp+18h] BYREF
  int v25; // [rsp+64h] [rbp+1Ch]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  if ( v12 >= 0x80000000 )
    v12 += 0x80000000;
  *a4 = v12;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(a1, a2, a7) )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 196) < 4u || v12 - 16345 > 0x7FFFC026 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, *(unsigned int *)(a3 + 8), a7);
    *v9 = v13;
    return v13 != 0;
  }
  v15 = *(unsigned int *)(a3 + 8);
  PoolWithTag = 0LL;
  v24 = -1;
  v25 = 0;
  a6 = 0xFFFFFFFFLL;
  a5 = 0xFFFFFFFFLL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v15, &v24);
  v18 = v17;
  if ( !v17 )
    return 0;
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v17 + 4), &a5);
  if ( v19 )
  {
    v20 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v18 + 2) )
      {
LABEL_18:
        v23 = 1;
LABEL_19:
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a5);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v21 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(v19 + 4LL * v8),
                              &a6);
        if ( !v21 )
          break;
        v22 = v20;
        if ( v20 > 0x3FD8 )
          v22 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v21, v22);
        v20 -= 16344;
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a6);
        if ( ++v8 >= *(_WORD *)(v18 + 2) )
          goto LABEL_18;
      }
    }
    v23 = 0;
    goto LABEL_19;
  }
  v23 = 0;
LABEL_20:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  if ( !v23 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  *v9 = (__int64)PoolWithTag;
  result = 1;
  *v7 = 1;
  return result;
}
