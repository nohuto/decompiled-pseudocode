/*
 * XREFs of ViDeadlockAddThread @ 0x140714984
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x140713C50 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     VfUtilAddressRangeAdd @ 0x140702B88 (VfUtilAddressRangeAdd.c)
 */

__int64 __fastcall ViDeadlockAddThread(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r10
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9

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
    v7 = (_QWORD *)(a2 + 24);
    v8 = (a1 >> 12) % 0x3FF;
    v9 = v5[2050] + 16 * v8;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v7 = v10;
    *(_QWORD *)(a2 + 32) = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *(_QWORD *)v9 = v7;
    VfUtilAddressRangeAdd(&v5[2 * v8 + 2052], a1, 2016LL);
    ++*(_QWORD *)(v11 + 16408);
    return v12;
  }
  return result;
}
