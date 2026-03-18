/*
 * XREFs of EngLockDriverObj @ 0x1C00BE650
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     HmgLockEx @ 0x1C003BFB0 (HmgLockEx.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00BE4C8 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00BE514 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = HmgLockEx((int)hdo, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(v4, v2);
  if ( HmgLockResultBase<DRVOBJ>::operator bool(v4) )
  {
    v1 = (DRIVEROBJ *)v4[0];
    if ( v4[0] )
      v1 = (DRIVEROBJ *)(v4[0] + 24LL);
    v4[0] = 0LL;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v4);
  return v1;
}
