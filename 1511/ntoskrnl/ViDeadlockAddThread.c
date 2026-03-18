/*
 * XREFs of ViDeadlockAddThread @ 0x1406CCBA8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x1406CBE74 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     VfUtilAddressRangeAdd @ 0x1406B7368 (VfUtilAddressRangeAdd.c)
 */

__int64 __fastcall ViDeadlockAddThread(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r9

  result = 0LL;
  if ( a2 )
  {
    v5 = ViDeadlockGlobals;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
    *(_QWORD *)a2 = a1;
    v6 = a2 + 24;
    v7 = (a1 >> 12) % 0x3FF;
    v8 = (__int64 *)(v5[2050] + 16 * v7);
    v9 = *v8;
    *(_QWORD *)(a2 + 24) = *v8;
    *(_QWORD *)(a2 + 32) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v6;
    *v8 = v6;
    VfUtilAddressRangeAdd(&v5[2 * v7 + 2052], a1, 1984LL);
    ++*(_QWORD *)(v10 + 16408);
    return v11;
  }
  return result;
}
