/*
 * XREFs of xxxSetModernAppWindow @ 0x1C000A1E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     VerifyChildMenu @ 0x1C02245FC (VerifyChildMenu.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v29[3]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v30[3]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v31[3]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v32[24]; // [rsp+80h] [rbp+1Fh] BYREF
  char v33; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(v2 + 1256);
  if ( (*(_DWORD *)(v2 + 1096) & 0x40000) == 0 )
    goto LABEL_55;
  v9 = *(_QWORD *)(v2 + 1248);
  if ( !v9 || v9 != a1 )
    goto LABEL_55;
  v10 = (__int64 *)gptiCurrent;
  if ( *(_QWORD *)(v2 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( a2 )
    {
      v12 = ValidateHwnd(a2);
      v6 = v12;
      if ( !v12
        || v12 == a1
        || *(_QWORD *)(v12 + 88) == a1
        || v12 == *(_QWORD *)(v2 + 1256)
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
          v13 = *(_QWORD *)(v2 + 384);
          if ( gpqForeground == v13 )
          {
            v14 = *(_QWORD *)(v8 + 16);
            if ( *(_QWORD *)(v14 + 384) == v13 && gptiForeground == v14 )
              v7 = 1;
          }
        }
      }
      v15 = *v10;
      v29[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v15 + 368) = v29;
      v29[1] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v16 = *v10;
      v30[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v16 + 368) = v30;
      v30[1] = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v17 = *v10;
      v31[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v17 + 368) = v31;
      ++*(_DWORD *)(a1 + 8);
      v31[1] = a1;
      LockW32Thread(v2, v32);
      HMAssignmentLock(v2 + 1256, v6);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v33);
      if ( v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 88LL) == a1 )
          xxxSendNotifyMessage(v8, 841LL, (unsigned __int8)(*(_BYTE *)(a1 + 55) & 0x20) << 16, 0LL, 0);
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 80LL) == v8 )
        {
          xxxSendNotifyMessage(v8, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 80LL);
        }
      }
      if ( v6 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 88LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 841LL, (unsigned __int8)(*(_BYTE *)(v6 + 55) & 0x20) << 16, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 88LL);
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL);
        }
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v33);
      if ( v6 )
      {
        v18 = (*(_BYTE *)(v6 + 55) & 0xC0) == 64;
        SetOrClrWF(0LL, v6, 3968LL, 1LL);
        SetOrClrWF(1LL, v6, 3904LL, 1LL);
        VerifyChildMenu(v6, v18);
        xxxSetWindowStyle((struct tagWND *)v6);
        xxxSetParentWorker((struct tagWND *)v6);
        if ( *(_QWORD *)(v6 + 88) != a1
          || (v19 = *(_QWORD *)(v2 + 384), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) != v19) )
        {
LABEL_53:
          PopAndFreeW32ThreadLock(v32);
          ThreadUnlock1(v23, v22);
          ThreadUnlock1(v25, v24);
          ThreadUnlock1(v27, v26);
          return v3;
        }
        if ( gpqForeground == v19 && *(_QWORD *)(v2 + 1256) == v6 && *(_QWORD *)(v19 + 88) == a1 )
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
          if ( *(_QWORD *)(v21 + 384) == *(_QWORD *)(v2 + 384) )
          {
            zzzAttachThreadInput(v2, v21, 0LL);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v33);
            if ( v7 && gptiForeground == *(_QWORD *)(v8 + 16) && *(_QWORD *)(v2 + 384) == gpqForeground )
              xxxSetForegroundThreadWithWindowHint(v2, 0LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v33);
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
