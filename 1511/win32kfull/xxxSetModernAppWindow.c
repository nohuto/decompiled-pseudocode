/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0007700
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0081354 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 */

__int64 __fastcall xxxSetModernAppWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  __int64 v6; // rbx
  int v7; // r12d
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[3]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v29[3]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v30[3]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v31[24]; // [rsp+80h] [rbp+1Fh] BYREF
  char v32; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (_QWORD *)(v2 + 1232);
  v9 = *(_QWORD *)(v2 + 1232);
  if ( (*(_DWORD *)(v2 + 1072) & 0x40000) == 0 || (v10 = *(_QWORD *)(v2 + 1224)) == 0 || v10 != a1 )
  {
LABEL_59:
    v24 = 87LL;
    goto LABEL_36;
  }
  v11 = (__int64 *)gptiCurrent;
  if ( *(_QWORD *)(v2 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( !a2 )
    {
LABEL_12:
      if ( !v9 )
        goto LABEL_13;
      if ( *(_QWORD *)(v9 + 16) != v2 )
      {
        if ( *(_QWORD *)(v9 + 88) != a1 )
          v9 = 0LL;
LABEL_13:
        if ( gpqForeground )
        {
          if ( v9 )
          {
            v25 = *(_QWORD *)(v2 + 384);
            if ( gpqForeground == v25 )
            {
              v27 = *(_QWORD *)(v9 + 16);
              if ( *(_QWORD *)(v27 + 384) == v25 && gptiForeground == v27 )
                v7 = 1;
            }
          }
        }
        v13 = *v11;
        v28[0] = *(_QWORD *)(*v11 + 368);
        *(_QWORD *)(v13 + 368) = v28;
        v28[1] = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v14 = *v11;
        v29[0] = *(_QWORD *)(*v11 + 368);
        *(_QWORD *)(v14 + 368) = v29;
        v29[1] = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v15 = *v11;
        v30[0] = *(_QWORD *)(*v11 + 368);
        *(_QWORD *)(v15 + 368) = v30;
        ++*(_DWORD *)(a1 + 8);
        v30[1] = a1;
        LockW32Thread(v2, v31);
        HMAssignmentLock(v2 + 1232, v6);
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v32);
        if ( v9 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 80LL) == a1 )
            xxxSendNotifyMessage(v9, 841LL, (unsigned __int8)(*(_BYTE *)(a1 + 55) & 0x20) << 16, 0LL, 0);
          if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 72LL) == v9 )
          {
            xxxSendNotifyMessage(v9, 8LL, 0LL, 0LL, 0);
            HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 72LL);
          }
        }
        if ( v6 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL) == v6 )
          {
            xxxSendNotifyMessage(v6, 841LL, (unsigned __int8)(*(_BYTE *)(v6 + 55) & 0x20) << 16, 0LL, 0);
            HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL);
          }
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 72LL) == v6 )
          {
            xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
            HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 72LL);
          }
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
        if ( v6 )
        {
          SetOrClrWF(0LL, v6, 3968LL, 1LL);
          SetOrClrWF(1LL, v6, 3904LL, 1LL);
          xxxSetWindowStyle((struct tagWND *)v6);
          xxxSetParentWorker((struct tagWND *)v6);
          if ( *(_QWORD *)(v6 + 88) != a1
            || (v16 = *(_QWORD *)(v2 + 384), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) != v16) )
          {
LABEL_34:
            PopAndFreeW32ThreadLock(v31);
            ThreadUnlock1(v18, v17);
            ThreadUnlock1(v20, v19);
            ThreadUnlock1(v22, v21);
            return v3;
          }
          if ( gpqForeground == v16 && *v8 == v6 && *(_QWORD *)(v16 + 80) == a1 )
            xxxSendNotifyMessage(v6, 841LL, 1LL, 0LL, 0);
        }
        if ( v9 )
        {
          if ( *(_QWORD *)(v9 + 88) == a1 )
          {
            xxxSetParentWorker((struct tagWND *)v9);
            SetOrClrWF(0LL, v9, 3904LL, 1LL);
            SetOrClrWF(1LL, v9, 3968LL, 1LL);
            xxxSetWindowStyle((struct tagWND *)v9);
            v26 = *(_QWORD *)(v9 + 16);
            if ( *(_QWORD *)(v26 + 384) == *(_QWORD *)(v2 + 384) )
            {
              zzzAttachThreadInput(v2, v26, 0LL);
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v32);
              if ( v7 && gptiForeground == *(_QWORD *)(v9 + 16) && *(_QWORD *)(v2 + 384) == gpqForeground )
                xxxSetForegroundThreadWithWindowHint(0LL, 0LL);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
            }
          }
        }
        v3 = 1;
        goto LABEL_34;
      }
      goto LABEL_59;
    }
    v12 = ValidateHwnd(a2);
    v6 = v12;
    if ( v12 && v12 != a1 && *(_QWORD *)(v12 + 88) != a1 && v12 != *v8 && *(_QWORD *)(v12 + 16) != v2 )
    {
      v11 = (__int64 *)gptiCurrent;
      goto LABEL_12;
    }
    v24 = 1400LL;
  }
  else
  {
    v24 = 5LL;
  }
LABEL_36:
  UserSetLastError(v24);
  return 0LL;
}
