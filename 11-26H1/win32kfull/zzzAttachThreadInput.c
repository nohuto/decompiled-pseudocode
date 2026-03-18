/*
 * XREFs of zzzAttachThreadInput @ 0x1401CA1C8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     NtUserAttachThreadInput @ 0x1401CA0A0 (NtUserAttachThreadInput.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402A6DF8 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbp
  const struct tagUIPI_INFO *v9; // r8
  int v10; // r14d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 UserSessionState; // rax
  __int64 *j; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *i; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  int v34; // [rsp+38h] [rbp-20h]

  v8 = PtiCurrent(a1);
  v10 = a3 & 1;
  v11 = a3 & 0x8000;
  if ( (a3 & 0x4000) == 0 || (v12 = 1, v10) )
    v12 = 0;
  if ( a1 == a2 )
    return 3221225485LL;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(a2 + 456);
    if ( v13 != *(_QWORD *)(a1 + 456) || *((_QWORD *)v8 + 57) != v13 )
    {
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 57) + 864LL),
              (const struct tagUIPI_INFO *)(*(_QWORD *)(a2 + 464) + 472LL),
              v9)
        && *(int *)(*((_QWORD *)v8 + 57) + 12LL) >= 0 )
      {
        v15 = *(_QWORD *)(a2 + 464);
        v16 = a2;
LABEL_11:
        v17 = *(_DWORD *)(v15 + 480);
        v33 = *(_QWORD *)(v15 + 472);
        v34 = v17;
        EtwTraceUIPIInputError(v8, v16, v15, &v33, 2);
        return 3221225506LL;
      }
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 57) + 864LL),
              (const struct tagUIPI_INFO *)(*(_QWORD *)(a1 + 464) + 472LL),
              v14)
        && *(int *)(*((_QWORD *)v8 + 57) + 12LL) >= 0
        || (unsigned int)IsDesktopApp(*((_QWORD *)v8 + 57))
        && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 456))
         || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 456)))
        && !(unsigned int)ExemptedFromImmersiveRestrictions(v8)
        && (v7 = *(unsigned int *)(*((_QWORD *)v8 + 57) + 808LL), (v7 & 0x100) == 0) )
      {
        v15 = *(_QWORD *)(a1 + 464);
        v16 = a1;
        goto LABEL_11;
      }
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 520), 0, 0) & 0x40) != 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x40) != 0
    || *(_QWORD *)(a2 + 488) != *(_QWORD *)(a1 + 488) )
  {
    return 3221225506LL;
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( !v10 )
  {
    for ( i = (_QWORD *)(UserSessionState + 16896); ; i = (_QWORD *)*i )
    {
      v30 = (_QWORD *)*i;
      if ( !*i )
        break;
      v31 = v30[2];
      if ( v31 == a2 && v30[1] == a1 || v31 == a1 && v30[1] == a2 )
      {
        --*((_DWORD *)v30 + 6);
        v32 = (_QWORD *)*i;
        if ( !*(_DWORD *)(*i + 24LL) || v12 )
        {
          *i = *v32;
          Win32FreePool(v32);
          goto LABEL_48;
        }
        return 0LL;
      }
    }
    return 3221225485LL;
  }
  for ( j = *(__int64 **)(UserSessionState + 16896); j; j = (__int64 *)*j )
  {
    v21 = j[2];
    if ( v21 == a2 && j[1] == a1 || v21 == a1 && j[1] == a2 )
    {
      v22 = *((_DWORD *)j + 6);
      if ( v22 == -1 )
        return 3221225485LL;
      *((_DWORD *)j + 6) = v22 + 1;
      return 0LL;
    }
  }
  v23 = Win32AllocPoolZInit(32LL, 1767994197LL);
  v26 = (_QWORD *)v23;
  if ( !v23 )
    return 3221225495LL;
  *(_QWORD *)(v23 + 8) = a1;
  *(_QWORD *)(v23 + 16) = a2;
  *(_DWORD *)(v23 + 24) = 1;
  v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 16896);
  *v26 = v27;
  *(_QWORD *)(W32GetUserSessionState(v27, v28) + 16896) = v26;
LABEL_48:
  *(_QWORD *)(a2 + 1360) |= 0x200uLL;
  *(_QWORD *)(a1 + 1360) |= 0x200uLL;
  if ( _bittest64((const signed __int64 *)(a1 + 1360), 0xAu) )
    KeSetEvent(*(PRKEVENT *)(a1 + 760), 1, 0);
  if ( (*(_DWORD *)(a2 + 1360) & 0x400LL) != 0 )
    KeSetEvent(*(PRKEVENT *)(a2 + 760), 1, 0);
  zzzReattachThreads(0LL, a1, a2);
  return 0LL;
}
