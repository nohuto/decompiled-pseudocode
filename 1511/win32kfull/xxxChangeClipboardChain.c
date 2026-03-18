/*
 * XREFs of xxxChangeClipboardChain @ 0x1C014CC7C
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C014CBB0 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00DBFC0 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 *a2)
{
  struct tagWND **v4; // rdi
  struct tagWND **v5; // rsi
  struct tagWND *v6; // rdx
  unsigned int v7; // edi
  __int64 v9; // r9
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
  if ( a2 && *(struct tagWND ***)(*(_QWORD *)(a2[2] + 376) + 640LL) != v4 )
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
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v6;
    ++*((_DWORD *)v6 + 2);
    if ( a2 )
      v9 = *a2;
    v10 = *a1;
    v11 = *v5;
    _InterlockedAdd(&glSendMessage, 1u);
    v7 = xxxSendTransformableMessageTimeout(v11, 781LL, v10, v9, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v13, v12);
  }
  PopAndFreeW32ThreadLock((__int64)v15);
  return v7;
}
