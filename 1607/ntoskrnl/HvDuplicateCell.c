/*
 * XREFs of HvDuplicateCell @ 0x1404C642C
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x1404C6364 (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x140609E24 (CmpDuplicateIndex.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 */

__int64 __fastcall HvDuplicateCell(ULONG_PTR a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  const void *v8; // r15
  int v9; // edi
  unsigned int Cell; // eax
  void *v11; // rsi
  unsigned int v12; // r14d
  _DWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+74h] [rbp+34h]

  v16 = -1;
  v14[0] = -1;
  v17 = 0;
  v14[1] = 0;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v16);
  v8 = (const void *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = -4 - *(_DWORD *)(v7 - 4);
  Cell = HvAllocateCell(a1, v9, a3, (__int64)&v15, (__int64)v14);
  v11 = v15;
  v12 = Cell;
  if ( Cell != -1 )
  {
    if ( a4 == 1 )
      memmove(v15, v8, v9);
    else
      memset(v15, 0, v9);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v16);
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v14);
  return v12;
}
