/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14060A9A8
 * Callers:
 *     CmpLightWeightDuplicateParentLists @ 0x14060EC9C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpUnlockHiveWriter @ 0x140564B84 (CmpUnlockHiveWriter.c)
 *     CmpLockHiveWriter @ 0x140564BE8 (CmpLockHiveWriter.c)
 */

char __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _WORD *v5; // rsi
  char v6; // bl
  int v7; // ebp
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  HvpGetCellContextReinitialize((__int64)&v9);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, char *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v4,
                  &v9);
  CmpLockHiveWriter(BugCheckParameter2);
  v6 = HvpMarkCellDirty(BugCheckParameter2, v3, 1);
  if ( v6 )
  {
    if ( *v5 == 26994 && (v7 = 0, v5[1]) )
    {
      while ( 1 )
      {
        v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)&v5[2 * v7 + 2], 1);
        if ( !v6 )
          break;
        if ( ++v7 >= (unsigned int)(unsigned __int16)v5[1] )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 1;
    }
  }
  CmpUnlockHiveWriter(BugCheckParameter2);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v6;
}
