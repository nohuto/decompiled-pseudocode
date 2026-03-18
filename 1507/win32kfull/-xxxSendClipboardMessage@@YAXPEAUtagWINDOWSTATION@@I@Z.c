/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01247E4
 * Callers:
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     xxxDisownClipboard @ 0x1C01F0BAC (xxxDisownClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v8[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+68h] [rbp-20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v8;
    v8[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout((struct tagWND *)v2, 0x307u, 0LL, 0LL, 2, 5000, &v10, 1, 0) )
        xxxSendNotifyMessage((struct tagWND *)v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 384LL), 0LL, 2LL, 0LL);
      v7 = v6;
      if ( v6 )
        PushW32ThreadLock(v6, v9, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((struct tagWND *)v2, a2, 0LL, 0LL, 64, 0, &v10, 1, 0);
      if ( v7 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v9);
    }
    ThreadUnlock1(v5, v4);
  }
}
