/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0006F50
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     VerifyChildMenu @ 0x1C02239A8 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetModernAppWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // esi
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  BOOL v18; // ebx
  __int64 v19; // rcx
  BOOL v20; // ebx
  __int64 v21; // rdx
  _QWORD v23[3]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp+1Fh] BYREF
  char v27; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(v2 + 1240);
  if ( (*(_DWORD *)(v2 + 1080) & 0x40000) == 0 )
    goto LABEL_55;
  v9 = *(_QWORD *)(v2 + 1232);
  if ( !v9 || v9 != a1 )
    goto LABEL_55;
  v10 = (__int64 *)gptiCurrent;
  if ( *(_QWORD *)(v2 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
  {
    if ( a2 )
    {
      v12 = ValidateHwnd(a2);
      v6 = v12;
      if ( !v12
        || v12 == a1
        || *(_QWORD *)(v12 + 88) == a1
        || v12 == *(_QWORD *)(v2 + 1240)
        || *(_QWORD *)(v12 + 16) == v2 )
      {
        v11 = 1400LL;
        goto LABEL_56;
      }
      v10 = (__int64 *)gptiCurrent;
    }
    if ( !v8 )
    {
LABEL_17:
      if ( gpqForeground )
      {
        if ( v8 )
        {
          v13 = *(_QWORD *)(v2 + 392);
          if ( gpqForeground == v13 )
          {
            v14 = *(_QWORD *)(v8 + 16);
            if ( *(_QWORD *)(v14 + 392) == v13 && gptiForeground == v14 )
              v7 = 1;
          }
        }
      }
      v15 = *v10;
      v23[0] = *(_QWORD *)(*v10 + 376);
      *(_QWORD *)(v15 + 376) = v23;
      v23[1] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v16 = *v10;
      v24[0] = *(_QWORD *)(*v10 + 376);
      *(_QWORD *)(v16 + 376) = v24;
      v24[1] = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v17 = *v10;
      v25[0] = *(_QWORD *)(*v10 + 376);
      *(_QWORD *)(v17 + 376) = v25;
      ++*(_DWORD *)(a1 + 8);
      v25[1] = a1;
      LockW32Thread(v2, v26);
      HMAssignmentLock(v2 + 1240, v6);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
      if ( v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 392) + 80LL) == a1 )
          xxxSendNotifyMessage(v8, 841LL, (unsigned __int8)(*(_BYTE *)(a1 + 55) & 0x20) << 16, 0LL, 0);
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 392) + 72LL) == v8 )
        {
          xxxSendNotifyMessage(v8, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL) + 72LL);
        }
      }
      if ( v6 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) + 80LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 841LL, (unsigned __int8)(*(_BYTE *)(v6 + 55) & 0x20) << 16, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) + 80LL);
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) + 72LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) + 72LL);
        }
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
      if ( v6 )
      {
        v18 = (*(_BYTE *)(v6 + 55) & 0xC0) == 64;
        SetOrClrWF(0LL, v6, 3968LL, 1LL);
        SetOrClrWF(1LL, v6, 3904LL, 1LL);
        VerifyChildMenu(v6, v18);
        xxxSetWindowStyle((struct tagWND *)v6);
        xxxSetParentWorker((struct tagWND *)v6);
        if ( *(_QWORD *)(v6 + 88) != a1
          || (v19 = *(_QWORD *)(v2 + 392), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL) != v19) )
        {
LABEL_53:
          PopAndFreeW32ThreadLock(v26);
          ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          return v3;
        }
        if ( gpqForeground == v19 && *(_QWORD *)(v2 + 1240) == v6 && *(_QWORD *)(v19 + 80) == a1 )
          xxxSendNotifyMessage(v6, 841LL, 1LL, 0LL, 0);
      }
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 88) == a1 )
        {
          xxxSetParentWorker((struct tagWND *)v8);
          v20 = (*(_BYTE *)(v8 + 55) & 0xC0) == 64;
          SetOrClrWF(0LL, v8, 3904LL, 1LL);
          SetOrClrWF(1LL, v8, 3968LL, 1LL);
          VerifyChildMenu(v8, v20);
          xxxSetWindowStyle((struct tagWND *)v8);
          v21 = *(_QWORD *)(v8 + 16);
          if ( *(_QWORD *)(v21 + 392) == *(_QWORD *)(v2 + 392) )
          {
            zzzAttachThreadInput(v2, v21, 0LL);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
            if ( v7 && gptiForeground == *(_QWORD *)(v8 + 16) && *(_QWORD *)(v2 + 392) == gpqForeground )
              xxxSetForegroundThreadWithWindowHint(0LL, 0LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
          }
        }
      }
      v3 = 1;
      goto LABEL_53;
    }
    if ( *(_QWORD *)(v8 + 16) != v2 )
    {
      if ( *(_QWORD *)(v8 + 88) != a1 )
        v8 = 0LL;
      goto LABEL_17;
    }
LABEL_55:
    v11 = 87LL;
    goto LABEL_56;
  }
  v11 = 5LL;
LABEL_56:
  UserSetLastError(v11);
  return 0LL;
}
