/*
 * XREFs of ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CBC80
 * Callers:
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00CBE10 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00CBE70 (EngUnlockDriverObj.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

_QWORD *__fastcall HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx

  *a1 = a2;
  v2 = a1 + 1;
  memset(a1 + 1, 0, 0x20uLL);
  v4 = 0LL;
  if ( v2 )
    v4 = (__int64)(v2 - 1);
  PushThreadGuardedObject(
    v2,
    v4,
    (__int64)UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
