/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1403F4074 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpGetValueDataFromCache @ 0x1403F4358 (CmpGetValueDataFromCache.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpFindValueByNameFromCache @ 0x1403FBA30 (CmpFindValueByNameFromCache.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, __int64 a2, int a3, const void *a4, int a5)
{
  void *ValueDataFromCache; // r14
  char v7; // r12
  __int64 ValueByNameFromCache; // rax
  __int64 v12; // rsi
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+34h] [rbp-Ch] BYREF
  int v22; // [rsp+38h] [rbp-8h] BYREF
  _BYTE v23[4]; // [rsp+3Ch] [rbp-4h] BYREF
  char v24; // [rsp+70h] [rbp+30h] BYREF

  ValueDataFromCache = 0LL;
  v24 = 0;
  v7 = 0;
  v20 = -1;
  v22 = -1;
  if ( (*(_BYTE *)(a1 + 186) & 0x10) != 0 )
  {
    v21 = -1;
    if ( *(struct _KTHREAD **)(a1 + 56) != KeGetCurrentThread()
      && !(unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(a1) )
    {
      return 1LL;
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 32) + 2848LL), 1u);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a1 + 40),
            &v21);
    v18 = *(_QWORD *)(a1 + 32);
    v19 = v17;
    if ( !v17 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      return 2LL;
    }
    CmpUpdateKeyNodeAccessBits(v18, v17, *(unsigned int *)(a1 + 40));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 32) + 2848LL));
    CmpCleanUpKcbValueCache(a1);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v19 + 36);
    *(_QWORD *)(a1 + 104) = *(unsigned int *)(v19 + 40);
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v21);
  }
  ValueByNameFromCache = CmpFindValueByNameFromCache(a1, a2, v23, &v20);
  v12 = ValueByNameFromCache;
  if ( !ValueByNameFromCache
    || a3 != *(_DWORD *)(ValueByNameFromCache + 12)
    || (v13 = a5, a5 != (*(_DWORD *)(ValueByNameFromCache + 4) & 0x7FFFFFFF)) )
  {
    v15 = 2;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(ValueByNameFromCache + 4) >= 0x80000000 )
  {
    ValueDataFromCache = (void *)(ValueByNameFromCache + 8);
    goto LABEL_7;
  }
  v7 = 1;
  ValueDataFromCache = (void *)CmpGetValueDataFromCache(
                                 a1,
                                 v20,
                                 ValueByNameFromCache,
                                 (unsigned int)&v24,
                                 (__int64)&v22);
  if ( ValueDataFromCache )
  {
LABEL_7:
    if ( v13 )
      v14 = RtlCompareMemory(ValueDataFromCache, a4, v13 & 0x7FFFFFFF);
    else
      v14 = 0;
    v15 = v14 != v13 ? 2 : 0;
LABEL_10:
    if ( ValueDataFromCache && v7 )
    {
      if ( v24 == 1 )
        ExFreePoolWithTag(ValueDataFromCache, 0);
      else
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v22);
    }
    goto LABEL_14;
  }
  v15 = 2;
LABEL_14:
  if ( v12 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v20);
  return v15;
}
