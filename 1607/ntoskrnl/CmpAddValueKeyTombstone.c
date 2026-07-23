/*
 * XREFs of CmpAddValueKeyTombstone @ 0x1405FEBF8
 * Callers:
 *     CmpSetValueKeyTombstone @ 0x1405FF3F4 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyTombstone(ULONG_PTR a1, const void **a2)
{
  unsigned __int16 *v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  unsigned int Cell; // esi
  size_t v9; // r8
  _WORD *v10; // rbx
  unsigned __int16 v11; // ax
  void *v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  HvpGetCellContextReinitialize((__int64)&v13);
  v5 = (unsigned __int16)CmpNameSize(v4) + 20;
  Cell = HvAllocateCell(a1, v5, v6, (__int64)&v12, (__int64)&v13);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v9 = v5;
  v10 = v12;
  memset(v12, 0, v9);
  *v10 = 27510;
  v10[8] = 2;
  *((_DWORD *)v10 + 1) = 0;
  *((_DWORD *)v10 + 2) = -1;
  *((_DWORD *)v10 + 3) = 0;
  v11 = CmpCopyName((_BYTE *)v10 + 20, a2);
  v10[1] = v11;
  if ( v11 < *(_WORD *)a2 )
    v10[8] |= 1u;
  (*(void (__fastcall **)(ULONG_PTR, char *))(a1 + 16))(a1, &v13);
  return Cell;
}
