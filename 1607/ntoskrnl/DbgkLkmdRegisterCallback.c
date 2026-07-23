/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x14057D260
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140013BB4 (ExGetCallBackBlockRoutine.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // rdi
  unsigned int j; // ebx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i);
    v8 = v7;
    if ( v7 )
    {
      if ( a1 == ExGetCallBackBlockRoutine((__int64)v7) )
      {
        ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i, v8);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i, v8);
    }
  }
  v9 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v9 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v9, 0LL) )
    {
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v9, 0);
  return 3221226539LL;
}
