/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00BE514
 * Callers:
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BE650 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00BE6B0 (EngUnlockDriverObj.c)
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
