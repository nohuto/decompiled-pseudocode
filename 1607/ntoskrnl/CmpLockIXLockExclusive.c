/*
 * XREFs of CmpLockIXLockExclusive @ 0x1403FCC14
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, int a3)
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
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
    return 1;
  }
  if ( v3 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) != 0;
  if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
  {
    *(_DWORD *)a1 |= 0x80000000;
    return 1;
  }
  return 0;
}
