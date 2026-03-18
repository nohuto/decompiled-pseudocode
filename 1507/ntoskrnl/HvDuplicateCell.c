/*
 * XREFs of HvDuplicateCell @ 0x1404F3250
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x1404F3184 (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x14065AFC8 (CmpDuplicateIndex.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 */

__int64 __fastcall HvDuplicateCell(ULONG_PTR a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  const void *v8; // rbp
  int v9; // esi
  unsigned int v10; // eax
  void *v11; // rdi
  unsigned int v12; // r14d
  int v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = -1;
  v14 = -1;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v16);
  v8 = (const void *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = -4 - *(_DWORD *)(v7 - 4);
  v10 = HvAllocateCell(a1, v9, a3, (__int64)&v15, &v14);
  v11 = v15;
  v12 = v10;
  if ( v10 != -1 )
  {
    if ( a4 == 1 )
      memmove(v15, v8, v9);
    else
      memset(v15, 0, v9);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v16);
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v14);
  return v12;
}
