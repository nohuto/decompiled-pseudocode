/*
 * XREFs of IopFindPassiveInterruptBlockLocked @ 0x1401CD918
 * Callers:
 *     IopFindPassiveInterruptBlock @ 0x1401CD8E8 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401CD948 (IopInsertPassiveInterruptBlock.c)
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
    if ( *(_DWORD *)(v1 + 20) == a1 )
    {
      v2 = v1;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 192));
      return v2;
    }
    v1 = *(_QWORD *)v1;
  }
  return v2;
}
