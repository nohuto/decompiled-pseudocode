/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01F0810
 * Callers:
 *     xxxGetClipboardData @ 0x1C0121734 (xxxGetClipboardData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     FindClipFormat @ 0x1C00D651C (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  BOOL v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ClipFormat; // rax
  _QWORD v15[3]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF

  v3 = a2;
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) = v5 | 0x80;
    v6 = ((unsigned __int8)v5 >> 6) & 1;
    v7 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 384LL), 0LL, 2LL, 0LL);
    v8 = v7;
    if ( v7 )
      PushW32ThreadLock(v7, v16, (__int64)ReleaseWakeReference);
    v9 = *((_QWORD *)a1 + 10);
    v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v15;
    v15[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    v10 = xxxSendTransformableMessageTimeout(*((struct tagWND **)a1 + 10), 0x305u, v3, 0LL, 66, 30000, &v17, 1, 0) != 0;
    ThreadUnlock1(v12, v11);
    if ( v8 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v16);
    if ( v6 )
      *((_DWORD *)a1 + 8) |= 0x40u;
    else
      *((_DWORD *)a1 + 8) &= ~0x40u;
    *((_DWORD *)a1 + 8) &= ~0x80u;
    if ( !v10 )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, v3, 1);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}
