/*
 * XREFs of PopIssueCoalescingNotification @ 0x1406B5498
 * Callers:
 *     PoIssueCoalescingNotification @ 0x14023AB10 (PoIssueCoalescingNotification.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 */

void __fastcall PopIssueCoalescingNotification(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rbp
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  void (__fastcall *v6)(struct _EX_RUNDOWN_REF *, __int64, _QWORD); // rax

  v2 = PopCoalescingCallbackRoutine;
  v3 = 8LL;
  do
  {
    v4 = ExReferenceCallBackBlock(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( LOBYTE(v4[4].Count) != *(_BYTE *)(a1 + 32) )
      {
        v6 = (void (__fastcall *)(struct _EX_RUNDOWN_REF *, __int64, _QWORD))ExGetCallBackBlockRoutine((__int64)v4);
        v6(v5, a1, *(_QWORD *)(a1 + 40));
      }
      ExDereferenceCallBackBlock(v2, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag((PVOID)a1, 0x70436F50u);
}
