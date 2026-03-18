/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998
 * Callers:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 * Callees:
 *     xxxFocusSetInputContext @ 0x1C0046C38 (xxxFocusSetInputContext.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxInternalEnumWindow @ 0x1C007E7F8 (xxxInternalEnumWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00D53CC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     UnlockCaptureWindow @ 0x1C00ED560 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-38h]
  unsigned int v13; // [rsp+3Ch] [rbp-34h]
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  _QWORD v16[3]; // [rsp+58h] [rbp-18h] BYREF
  char v17; // [rsp+90h] [rbp+20h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        goto LABEL_12;
      *(_DWORD *)(*((_QWORD *)a1 + 49) + 332LL) &= ~0x100000u;
      v7 = *(_QWORD *)(*((_QWORD *)a1 + 49) + 64LL);
      v14 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v14;
      v15 = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      QueueNotifyTransformableMessage((struct tagWND *)v7, 0x1Fu, 0LL, 0LL, 0, 0);
      if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 49) + 64LL) )
        UnlockCaptureWindow();
    }
    else
    {
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 49) + 72LL);
      v14 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v14;
      v15 = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      QueueNotifyTransformableMessage((struct tagWND *)v5, 8u, 0LL, 0LL, 0, 0);
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0LL, 1LL);
      v6 = (_QWORD *)(*((_QWORD *)a1 + 49) + 72LL);
      if ( v5 == *v6 )
      {
        HMAssignmentUnlock(v6);
        if ( v5 )
        {
          if ( *((_QWORD *)a1 + 49) == gpqForeground )
            xxxWindowEvent(-2147483645, v5, 0, 0, 53);
        }
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 49) + 80LL);
    v14 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v14;
    v15 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    QueueNotifyTransformableMessage((struct tagWND *)v8, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v8,
      6u,
      (unsigned __int8)(*(_BYTE *)(v8 + 55) & 0x20) << 16,
      0LL,
      0,
      0);
    v9 = (_QWORD *)(*((_QWORD *)a1 + 49) + 80LL);
    if ( v8 == *v9 )
      HMAssignmentUnlock(v9);
    v11 = *(_QWORD *)(v8 + 16);
    ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(v8 + 16));
    v13 = v13 & 0xFFFFFFFC | 2;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 16LL) + 96LL);
    v16[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v16;
    v16[1] = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      &v11);
    ThreadUnlock1();
  }
  ThreadUnlock1();
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
}
