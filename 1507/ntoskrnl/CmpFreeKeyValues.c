/*
 * XREFs of CmpFreeKeyValues @ 0x140585C38
 * Callers:
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpMarkKeyValuesDirty @ 0x140585CFC (CmpMarkKeyValuesDirty.c)
 */

char __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = -1;
  if ( (unsigned __int8)CmpMarkKeyValuesDirty(BugCheckParameter2) )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) != 0 )
      return 1;
    if ( !*(_DWORD *)(a3 + 36) )
    {
LABEL_9:
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48), v5, v6);
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
      return 1;
    }
    v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(a3 + 40),
           &v12);
    if ( v7 )
    {
      v8 = 0;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v7 + 4LL * v8)) )
        {
          if ( ++v8 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_8;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v12);
        return 0;
      }
LABEL_8:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v12);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40), v9, v10);
      goto LABEL_9;
    }
  }
  return 0;
}
