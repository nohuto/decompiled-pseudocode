/*
 * XREFs of CmpFreeKeyValues @ 0x140608CBC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpMarkKeyValuesDirty @ 0x140608E88 (CmpMarkKeyValuesDirty.c)
 */

char __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // esi
  int v8; // [rsp+58h] [rbp+20h] BYREF
  int v9; // [rsp+5Ch] [rbp+24h]

  v8 = -1;
  v9 = 0;
  if ( !(unsigned __int8)CmpMarkKeyValuesDirty(BugCheckParameter2) )
    return 0;
  if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
  {
    if ( *(_DWORD *)(a3 + 36) )
    {
      v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             *(unsigned int *)(a3 + 40),
             &v8);
      if ( !v6 )
        return 0;
      v7 = 0;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v6 + 4LL * v7)) )
        {
          if ( ++v7 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_9;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
        return 0;
      }
LABEL_9:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40));
    }
    *(_DWORD *)(a3 + 40) = -1;
    *(_DWORD *)(a3 + 36) = 0;
    if ( *(_WORD *)(a3 + 74) )
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48));
      *(_DWORD *)(a3 + 48) = -1;
      *(_WORD *)(a3 + 74) = 0;
    }
  }
  return 1;
}
