/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18
 * Callers:
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpGetValueDataFromCache @ 0x1404018B0 (CmpGetValueDataFromCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140401954 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, __int64 a2, int a3, const void *a4, int a5)
{
  bool v8; // zf
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  void *ValueDataFromCache; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v27[4]; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+90h] [rbp+30h] BYREF

  v26[1] = 0;
  v26[0] = -1;
  v28 = 0;
  v8 = (*(_BYTE *)(a1 + 178) & 0x10) == 0;
  v10 = 0;
  v25[0] = -1;
  v25[1] = 0;
  if ( v8 )
  {
LABEL_2:
    v11 = *(_QWORD *)(a1 + 24);
    v27[0] = *(_DWORD *)(a1 + 88);
    v27[1] = *(_DWORD *)(a1 + 96);
    if ( (int)CmpFindNameInListWithStatus(v11, v27, a2, 0, 0LL, (__int64)&v23) < 0 )
      return 2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
            *(_QWORD *)(a1 + 24),
            v23,
            v26);
    if ( a3 == *(_DWORD *)(v12 + 12) )
    {
      v13 = a5;
      if ( a5 == (*(_DWORD *)(v12 + 4) & 0x7FFFFFFF) )
      {
        if ( *(_DWORD *)(v12 + 4) >= 0x80000000 )
        {
          ValueDataFromCache = (void *)(v12 + 8);
LABEL_7:
          if ( v13 )
            v15 = RtlCompareMemory(ValueDataFromCache, a4, v13 & 0x7FFFFFFF);
          else
            v15 = 0;
          v16 = v15 != v13 ? 2 : 0;
          if ( ValueDataFromCache && v10 )
          {
            if ( v28 == 1 )
              ExFreePoolWithTag(ValueDataFromCache, 0);
            else
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v25);
          }
          goto LABEL_11;
        }
        v10 = 1;
        ValueDataFromCache = (void *)CmpGetValueDataFromCache(a1, v23, v12, (__int64)&v28, (__int64)v25);
        if ( ValueDataFromCache )
          goto LABEL_7;
      }
    }
    v16 = 2;
LABEL_11:
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v26);
    return v16;
  }
  v24[0] = -1;
  v24[1] = 0;
  if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(a1) )
    return 1LL;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL), 1u);
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 32),
          v24);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = v18;
  if ( v18 )
  {
    CmpUpdateKeyNodeAccessBits(v19, v18, *(_DWORD *)(a1 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL));
    CmpCleanUpKcbValueCache(a1);
    v21 = *(unsigned int *)(v20 + 40);
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(v20 + 36);
    v22 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 96) = v21;
    (*(void (__fastcall **)(__int64, _DWORD *))(v22 + 16))(v22, v24);
    goto LABEL_2;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v19 + 2848));
  return 2LL;
}
