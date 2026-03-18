/*
 * XREFs of CmpLockIXLockExclusive @ 0x1403DDE20
 * Callers:
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockExclusive(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( a3 )
    {
      if ( a3 == 1 )
        *(_QWORD *)(a2 + 24) = a1;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = a1;
    }
    return 1;
  }
  if ( v3 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) != 0;
  if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
  {
    *(_DWORD *)a1 |= 0x80000000;
    return 1;
  }
  return 0;
}
