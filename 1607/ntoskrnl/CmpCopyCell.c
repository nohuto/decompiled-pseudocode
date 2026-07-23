/*
 * XREFs of CmpCopyCell @ 0x1404CE184
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v5; // r15d
  __int64 v8; // rax
  const void *v9; // r12
  unsigned int v10; // esi
  unsigned int Cell; // eax
  void *v12; // r14
  _DWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+74h] [rbp+34h]

  v14[1] = 0;
  v14[0] = -1;
  v5 = -1;
  v16 = -1;
  v17 = 0;
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v14);
  v9 = (const void *)v8;
  if ( v8 )
  {
    v10 = -4 - *(_DWORD *)(v8 - 4);
    Cell = HvAllocateCell(a3, v10, a4, (__int64)&v15, (__int64)&v16);
    v12 = v15;
    v5 = Cell;
    if ( Cell != -1 )
      memmove(v15, v9, v10);
    if ( v12 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v14);
  }
  return v5;
}
