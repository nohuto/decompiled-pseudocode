/*
 * XREFs of CmpAddValueToListEx @ 0x1403FEB9C
 * Callers:
 *     CmpSetValueKeyNew @ 0x1404009D0 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF3F4 (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpAddValueToList @ 0x14060B3E8 (CmpAddValueToList.c)
 * Callees:
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned int Cell; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  int v14; // edx
  _DWORD *v15; // r9
  _DWORD v16[2]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v16[0] = -1;
  v17[0] = 0LL;
  v16[1] = 0;
  v8 = *a5 + 1;
  v9 = a3;
  if ( v8 <= 1 )
  {
    v14 = a6;
    if ( !a6 )
      v14 = 1;
    Cell = HvAllocateCell(a1, (unsigned int)(4 * v14), a4, v17, v16);
  }
  else
  {
    Cell = HvReallocateCell(a1, a5[1], (__int64)v17, (__int64)v16);
  }
  if ( Cell == -1 )
    return 3221225626LL;
  v11 = v17[0];
  v12 = v8 - 1;
  a5[1] = Cell;
  if ( (unsigned int)v12 > (unsigned int)v9 )
  {
    v15 = (_DWORD *)(v11 + 4 * v12);
    do
    {
      v12 = (unsigned int)(v12 - 1);
      *v15-- = *(_DWORD *)(v11 + 4 * v12);
    }
    while ( (unsigned int)v12 > (unsigned int)v9 );
  }
  *(_DWORD *)(v11 + 4 * v9) = a2;
  *a5 = v8;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v16);
  return 0LL;
}
