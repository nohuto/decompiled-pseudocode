/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x140669C18
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int v1; // edi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  unsigned __int64 v7; // rax

  v1 = 0;
  while ( 1 )
  {
    v3 = (signed __int64 *)(&RunOnce + 2 * v1);
    v4 = ExReferenceCallBackBlock(v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    if ( ++v1 >= 8 )
      return 3221226021LL;
  }
  if ( a1 != ExGetCallBackBlockRoutine((__int64)v4) || !ExCompareExchangeCallBack(v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock(v3, v5);
    goto LABEL_6;
  }
  ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * v1, v5);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 1LL, 0LL);
  if ( v7 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v5, v7);
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
