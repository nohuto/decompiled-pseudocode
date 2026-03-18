/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01E64B4
 * Callers:
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r8
  BOOL v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 ClipFormat; // rax
  _QWORD v19[3]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+8h] BYREF

  v3 = a2;
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) = v5 | 0x80;
    v6 = ((unsigned __int8)v5 >> 6) & 1;
    v7 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 376LL), 0LL, 2LL);
    v9 = v7;
    if ( v7 )
      PushW32ThreadLock(v7, v20, (__int64)ReleaseWakeReference, v8);
    v10 = *((_QWORD *)a1 + 10);
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    v11 = xxxSendTransformableMessageTimeout(
            *((struct tagWND **)a1 + 10),
            773LL,
            v3,
            0LL,
            66,
            30000,
            (__int64 *)&BugCheckParameter3,
            1,
            0) != 0;
    ThreadUnlock1(v13, v12);
    if ( v9 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, v14, v15, v16);
    if ( v6 )
      *((_DWORD *)a1 + 8) |= 0x40u;
    else
      *((_DWORD *)a1 + 8) &= ~0x40u;
    *((_DWORD *)a1 + 8) &= ~0x80u;
    if ( !v11 )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, (unsigned int)v3, 1);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}
