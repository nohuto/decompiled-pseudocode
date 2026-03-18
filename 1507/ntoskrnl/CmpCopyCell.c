/*
 * XREFs of CmpCopyCell @ 0x1404A0A38
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  const void *v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // eax
  void *v12; // rsi
  int v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v14 = -1;
  v16 = -1;
  v15 = 0LL;
  v7 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v14);
  v9 = (const void *)v8;
  if ( v8 )
  {
    v10 = -4 - *(_DWORD *)(v8 - 4);
    v11 = HvAllocateCell(a3, v10, a4, (__int64)&v15, &v16);
    v12 = v15;
    v7 = v11;
    if ( v11 != -1 )
      memmove(v15, v9, v10);
    if ( v12 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
  }
  return v7;
}
