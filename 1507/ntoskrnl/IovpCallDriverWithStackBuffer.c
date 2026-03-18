/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x1407355F4
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopPerfCallDriver @ 0x1401F7F54 (IopPerfCallDriver.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfBugCheckNoStackUsage @ 0x14025AF78 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140735CC4 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  bool v6; // zf
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v8; // bl
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int8 v11; // di
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v17; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v18[24]; // [rsp+38h] [rbp-91h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = *(_WORD *)BugCheckParameter1 == 6;
  v18[20] = Object;
  v18[21] = BugCheckParameter1;
  v18[22] = a3;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
    }
    BYTE5(v18[19]) = CurrentIrql;
    qword_140763040 = 0LL;
    BugCheckParameter4 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    ::BugCheckParameter1 = 3LL;
    qword_140763038 = BugCheckParameter1;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) )
  {
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
    }
    BYTE5(v18[19]) = v8;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    ::BugCheckParameter1 = 4LL;
    qword_140763038 = (ULONG_PTR)Object;
    qword_140763040 = 0LL;
    BugCheckParameter4 = 0LL;
    VfBugCheckNoStackUsage();
  }
  v9 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( !*(_BYTE *)(v9 - 72) )
  {
    v10 = *(_QWORD *)(v9 - 24);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 80) & 0x204000) == 0x204000 )
      {
        v11 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
        }
        BYTE5(v18[19]) = v11;
        BugCheckParameter4 = *(_QWORD *)(v9 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        ::BugCheckParameter1 = 15LL;
        qword_140763038 = (ULONG_PTR)Object;
        qword_140763040 = BugCheckParameter1;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v12 = VfBeforeCallDriver(Object, BugCheckParameter1, v18);
  if ( (IopFunctionPointerMask & 2) != 0 )
  {
    v13 = IopPerfCallDriver(Object, BugCheckParameter1);
  }
  else
  {
    if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
      KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
    v14 = *(_QWORD *)(BugCheckParameter1 + 184) - 72LL;
    *(_QWORD *)(BugCheckParameter1 + 184) = v14;
    v15 = *(_BYTE *)v14;
    *(_QWORD *)(v14 + 40) = Object;
    if ( v15 == 22 && (unsigned __int8)(*(_BYTE *)(v14 + 1) - 2) <= 1u )
      v13 = IopPoHandleIrp(BugCheckParameter1);
    else
      v13 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*((_QWORD *)Object + 1) + 8LL * v15 + 112))(
              Object,
              BugCheckParameter1);
  }
  v17 = v13;
  VfAfterCallDriver(v18, &v17, v12);
  return v17;
}
