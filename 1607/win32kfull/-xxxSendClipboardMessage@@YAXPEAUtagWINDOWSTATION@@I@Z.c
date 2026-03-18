/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0152EF0
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v11[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (struct tagWND *)v2,
              775LL,
              0LL,
              0LL,
              2,
              5000,
              (__int64 *)&BugCheckParameter3,
              1,
              0) )
        xxxSendNotifyMessage((struct tagWND *)v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 376LL), 0LL, 2LL);
      v8 = v6;
      if ( v6 )
        PushW32ThreadLock(v6, v12, (__int64)ReleaseWakeReference, v7);
      xxxSendTransformableMessageTimeout((struct tagWND *)v2, a2, 0LL, 0LL, 64, 0, (__int64 *)&BugCheckParameter3, 1, 0);
      if ( v8 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v12, v4, v9, v10);
    }
    ThreadUnlock1(v5, v4);
  }
}
