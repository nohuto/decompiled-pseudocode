/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4
 * Callers:
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     xxxFocusSetInputContext @ 0x1C00A8920 (xxxFocusSetInputContext.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     UnlockCaptureWindow @ 0x1C0113840 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-38h]
  unsigned int v16; // [rsp+3Ch] [rbp-34h]
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  _QWORD v19[3]; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+90h] [rbp+20h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        goto LABEL_12;
      *(_DWORD *)(*((_QWORD *)a1 + 48) + 340LL) &= ~0x100000u;
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL);
      v17 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v17;
      v18 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      QueueNotifyTransformableMessage((struct tagWND *)v8, 0x1Fu, 0LL, 0LL, 0, 0);
      v7 = (_QWORD *)*((_QWORD *)a1 + 48);
      if ( v8 == v7[9] )
        UnlockCaptureWindow(v7);
    }
    else
    {
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 80LL);
      v17 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v17;
      v18 = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      QueueNotifyTransformableMessage((struct tagWND *)v5, 8u, 0LL, 0LL, 0, 0);
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext((__int64 *)v5, 0, 1);
      v7 = (_QWORD *)(*((_QWORD *)a1 + 48) + 80LL);
      if ( v5 == *v7 )
      {
        HMAssignmentUnlock(v7);
        if ( v5 )
        {
          v7 = (_QWORD *)gpqForeground;
          if ( *((_QWORD *)a1 + 48) == gpqForeground )
            xxxWindowEvent(0x80000003, (__int64 *)v5, 0, 0, 53);
        }
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
    v17 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v17;
    v18 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    QueueNotifyTransformableMessage((struct tagWND *)v9, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v9,
      6u,
      (unsigned __int8)(*(_BYTE *)(v9 + 55) & 0x20) << 16,
      0LL,
      0,
      0);
    v10 = (_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
    if ( v9 == *v10 )
      HMAssignmentUnlock(v10);
    v14 = *(_QWORD *)(v9 + 16);
    ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(v9 + 16));
    v16 = v16 & 0xFFFFFFFC | 2;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL) + 8LL) + 16LL) + 96LL);
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      (__int64)&v14,
      2u);
    ThreadUnlock1(v13, v12);
  }
  ThreadUnlock1(v7, v6);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
}
