/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x140575E94
 * Callers:
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x140575E44 (PsSetCreateProcessNotifyRoutineEx2.c)
 *     PsSetCreateProcessNotifyRoutineEx @ 0x140575E68 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140575E80 (PsSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140013BB4 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140013D04 (ExGetCallBackBlockContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401485B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // bl
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rsi
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rbp
  struct _EX_RUNDOWN_REF *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  v2 = a2;
  v4 = (a2 & 2) != 0;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9);
      v14 = v10;
      if ( v10 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( ExGetCallBackBlockRoutine((__int64)v10) == a1
          && (unsigned int)ExGetCallBackBlockContext((__int64)v14) == (_DWORD)v2
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, 0LL, (__int64)v14) )
        {
          if ( v4 )
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineExCount);
          else
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineCount);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, v14);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
          ExWaitForRundownProtectionRelease(v14);
          ExFreePoolWithTag(v14, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, v14);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
        return 3221225594LL;
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v5 = 32;
  else
    v5 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v5) )
    return 3221225506LL;
  v6 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v2);
  if ( !v6 )
    return 3221225626LL;
  v7 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v7, v6, 0LL) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
    {
      ExFreePoolWithTag(v6, 0);
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
