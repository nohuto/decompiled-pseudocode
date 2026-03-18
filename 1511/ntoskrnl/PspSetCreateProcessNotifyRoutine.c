/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x1405306E4
 * Callers:
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x140530444 (PsSetCreateProcessNotifyRoutineEx2.c)
 *     PsSetCreateProcessNotifyRoutineEx @ 0x140530468 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140530614 (PsSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140038604 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x14003876C (ExGetCallBackBlockContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x1405308A0 (ExAllocateCallBack.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // bl
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  int v10; // edx
  struct _EX_RUNDOWN_REF *v11; // rsi
  __int64 v12; // rdi

  v2 = a2;
  v4 = (a2 & 2) != 0;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v6);
      v8 = v7;
      if ( v7 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( ExGetCallBackBlockRoutine((__int64)v7) == a1
          && (unsigned int)ExGetCallBackBlockContext((__int64)v8) == (_DWORD)v2
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v6, 0LL, (__int64)v8) )
        {
          if ( v4 )
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineExCount);
          else
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineCount);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v6, v8);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v8);
          ExFreePoolWithTag(v8, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v6, v8);
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= 0x40 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        return 3221225594LL;
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v10 = 32;
  else
    v10 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v10) )
    return 3221225506LL;
  v11 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v2);
  if ( !v11 )
    return 3221225626LL;
  v12 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v12, v11, 0LL) )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= 0x40 )
    {
      ExFreePoolWithTag(v11, 0);
      return 3221225485LL;
    }
  }
  if ( v4 )
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineExCount);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}
