/*
 * XREFs of xxxChangeClipboardChain @ 0x1C015224C
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0152180 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxChangeClipboardChain(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  struct tagWND **v6; // rdi
  __int64 v7; // r9
  struct tagWND **v8; // rsi
  struct tagWND *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 v15; // r9
  __int64 v16; // r8
  struct tagWND *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-20h] BYREF

  v4 = (__int64 *)a2;
  v6 = (struct tagWND **)CheckClipboardAccess((__int64)a1, a2, a3, a4);
  if ( !v6 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v8 = v6 + 9;
  if ( !v6[9] )
    return 0LL;
  if ( v4 && *(struct tagWND ***)(*(_QWORD *)(v4[2] + 376) + 632LL) != v6 )
    v4 = 0LL;
  PushW32ThreadLock((__int64)v6, v21, UserDereferenceObject, v7);
  ObfReferenceObject(v6);
  v9 = *v8;
  if ( a1 == (__int64 *)*v8 )
  {
    HMAssignmentLock(v6 + 9, v4);
    v13 = 1;
  }
  else
  {
    v15 = 0LL;
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    v20[1] = v9;
    ++*((_DWORD *)v9 + 2);
    if ( v4 )
      v15 = *v4;
    v16 = *a1;
    v17 = *v8;
    _InterlockedAdd(&glSendMessage, 1u);
    v13 = xxxSendTransformableMessageTimeout(v17, 781LL, v16, v15, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v19, v18);
  }
  PopAndFreeW32ThreadLock((__int64)v21, v10, v11, v12);
  return v13;
}
