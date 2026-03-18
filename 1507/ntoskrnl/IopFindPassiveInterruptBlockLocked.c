/*
 * XREFs of IopFindPassiveInterruptBlockLocked @ 0x1401FAEB4
 * Callers:
 *     IopFindPassiveInterruptBlock @ 0x1401FAE24 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401FAEE4 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindPassiveInterruptBlockLocked(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = PassiveInterruptList;
  v2 = 0LL;
  while ( (__int64 *)v1 != &PassiveInterruptList )
  {
    if ( *(_DWORD *)(v1 + 16) == a1 )
    {
      v2 = v1;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 184));
      return v2;
    }
    v1 = *(_QWORD *)v1;
  }
  return v2;
}
