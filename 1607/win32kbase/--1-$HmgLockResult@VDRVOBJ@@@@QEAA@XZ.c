/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CBCCC
 * Callers:
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00CBE10 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00CBE70 (EngUnlockDriverObj.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(_QWORD *a1)
{
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12LL));
    *a1 = 0LL;
  }
  PopThreadGuardedObject(a1 + 1);
}
