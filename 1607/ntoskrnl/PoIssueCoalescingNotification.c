/*
 * XREFs of PoIssueCoalescingNotification @ 0x1402052A4
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x1404CE6E8 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x14066E0D8 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 */

void __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  signed __int64 *v2; // rdi
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  _BYTE v6[4]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v2 = (signed __int64 *)&PopCoalescingCallbackRoutine;
  v7 = a2;
  v3 = 8LL;
  v6[0] = *(_BYTE *)(a1 + 32);
  do
  {
    v4 = ExReferenceCallBackBlock(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( LOBYTE(v4[4].Count) != v6[0] )
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, _BYTE *, __int64))v4[1].Count)(v4, v6, v8);
      ExDereferenceCallBackBlock(v2, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
