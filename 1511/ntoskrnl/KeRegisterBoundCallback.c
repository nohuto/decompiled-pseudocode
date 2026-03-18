/*
 * XREFs of KeRegisterBoundCallback @ 0x1401C3ED8
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1404B8A08 (PspQueueApcSpecialApc.c)
 *     MmVerifyCallbackFunction @ 0x1404E2C04 (MmVerifyCallbackFunction.c)
 *     ExAllocateCallBack @ 0x1405308A0 (ExAllocateCallBack.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)MmVerifyCallbackFunction() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( ExCompareExchangeCallBack(&KiBoundsCallback, v3, 0LL) )
        return a1;
      else
        PspQueueApcSpecialApc(v4);
    }
  }
  return v2;
}
