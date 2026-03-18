/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x1405F0F98
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140038604 (ExGetCallBackBlockRoutine.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int v2; // ebx
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi

  v2 = 0;
  while ( 1 )
  {
    v3 = (signed __int64 *)(&RunOnce + 2 * v2);
    v4 = ExReferenceCallBackBlock(v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    if ( ++v2 >= 8 )
      return 3221226021LL;
  }
  if ( a1 != ExGetCallBackBlockRoutine((__int64)v4) || !ExCompareExchangeCallBack(v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock(v3, v5);
    goto LABEL_6;
  }
  ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * v2, v5);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
