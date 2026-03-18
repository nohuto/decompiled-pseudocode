/*
 * XREFs of EngUnlockDriverObj @ 0x1C00CBE70
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CBC80 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CBCCC (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = HmgLockEx((unsigned int)hdo, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(v4, v1);
  v2 = 0;
  if ( HmgLockResultBase<DRVOBJ>::operator bool(v4) )
  {
    v2 = 1;
    _InterlockedDecrement((volatile signed __int32 *)(v4[0] + 12LL));
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v4);
  return v2;
}
