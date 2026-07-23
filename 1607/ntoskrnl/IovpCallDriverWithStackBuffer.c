/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x14070126C
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopPerfCallDriver @ 0x1401CA5A8 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1402231C4 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140701848 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  bool v6; // zf
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[24]; // [rsp+28h] [rbp-91h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = *(_WORD *)a2 == 6;
  v13[20] = Object;
  v13[21] = a2;
  v13[22] = a3;
  if ( !v6 )
  {
    BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_14072C040 = 0LL;
    BugCheckParameter4 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_14072C038 = a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) )
  {
    BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_14072C038 = (ULONG_PTR)Object;
    qword_14072C040 = 0LL;
    BugCheckParameter4 = 0LL;
    VfBugCheckNoStackUsage();
  }
  v7 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v7 - 72) )
  {
    v8 = *(_QWORD *)(v7 - 24);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 80) & 0x204000) == 0x204000 )
      {
        BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        BugCheckParameter4 = *(_QWORD *)(v7 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_14072C038 = (ULONG_PTR)Object;
        qword_14072C040 = a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v9 = VfBeforeCallDriver(Object, a2, v13);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v10 = IopPerfCallDriver(Object, a2);
  else
    v10 = IopfCallDriver((__int64)Object, a2);
  v12 = v10;
  VfAfterCallDriver(v13, &v12, v9);
  return v12;
}
