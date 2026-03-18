/*
 * XREFs of xxxChangeClipboardChain @ 0x1C0123C68
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0123BA0 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  struct tagWND **v4; // rdi
  struct tagWND **v5; // rsi
  struct tagWND *v6; // rdx
  unsigned int v7; // edi
  struct _LARGE_STRING *v9; // r9
  unsigned __int64 v10; // r8
  struct tagWND *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-20h] BYREF

  v4 = (struct tagWND **)CheckClipboardAccess();
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v5 = v4 + 9;
  if ( !v4[9] )
    return 0LL;
  if ( a2 && *(struct tagWND ***)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 384LL) + 640LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock((__int64)v4, v15, UserDereferenceObject);
  ObfReferenceObject(v4);
  v6 = *v5;
  if ( a1 == (unsigned __int64 *)*v5 )
  {
    HMAssignmentLock(v4 + 9, a2);
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
    v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v14;
    v14[1] = v6;
    ++*((_DWORD *)v6 + 2);
    if ( a2 )
      v9 = *(struct _LARGE_STRING **)a2;
    v10 = *a1;
    v11 = *v5;
    _InterlockedAdd(&glSendMessage, 1u);
    v7 = xxxSendTransformableMessageTimeout(v11, 0x30Du, v10, v9, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v13, v12);
  }
  PopAndFreeW32ThreadLock((__int64)v15);
  return v7;
}
