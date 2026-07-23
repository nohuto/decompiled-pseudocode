/*
 * XREFs of PsEstablishWin32Callouts @ 0x140581884
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 */

void __fastcall PsEstablishWin32Callouts(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
  v2 = v1;
  if ( v1 )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&PsWin32CallBack, v1, 0LL) )
      PsWin32CalloutsEstablished = 1;
    else
      ExFreePoolWithTag(v2, 0);
  }
}
