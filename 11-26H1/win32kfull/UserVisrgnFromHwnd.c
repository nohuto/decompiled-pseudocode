/*
 * XREFs of UserVisrgnFromHwnd @ 0x140037FA0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(HRGN *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  const struct tagWND **v12; // rbx
  const struct tagWND *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  tagObjLock **v30; // r15
  int v31; // r12d
  char Prop; // r15
  __int128 v33; // [rsp+30h] [rbp-58h] BYREF
  char v34; // [rsp+40h] [rbp-48h]
  char v35; // [rsp+48h] [rbp-40h]

  PsGetCurrentThreadWin32Thread(a1);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a2 >= *(_QWORD *)(v7 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19928) * (unsigned int)(unsigned __int16)a2
      + *(_QWORD *)(UserSessionState + 19920);
  v12 = (const struct tagWND **)HMPkheFromPhe(v11);
  LOWORD(a2) = HIWORD(a2) & 0x7FFF;
  if ( (HIWORD(a2) & 0x7FFF) != *(_WORD *)(v11 + 26)
    && (_WORD)a2 != 0x7FFF
    && ((_WORD)a2 || !PsGetCurrentProcessWow64Process()) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v11 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v11 + 24) != 1 )
    return 0LL;
  v13 = *v12;
  if ( !v13 )
    return 0LL;
  v14 = 1;
  if ( (*(_DWORD *)(*((_QWORD *)v13 + 5) + 232LL) & 2) != 0 && !_GhostWindowFromHungWindow(v13) )
  {
    v19 = W32GetUserSessionState(v18, v17);
    v20 = *((_QWORD *)v13 + 18);
    v21 = *(unsigned __int16 *)(v19 + 41400);
    v34 = 0;
    W32GetUserSessionState(v23, v22);
    v33 = 0LL;
    v35 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v25, v24) == 1 )
    {
      v35 = 1;
      v28 = W32GetUserSessionState(v27, v26);
      v29 = 0LL;
      if ( v20 != v28 + 42480 )
        v29 = v20;
      *(_QWORD *)&v33 = v29;
      v30 = (tagObjLock **)&v33;
      v31 = 0;
      do
      {
        if ( *v30 )
          tagObjLock::LockExclusive(*v30);
        ++v31;
        ++v30;
      }
      while ( !v31 );
      v34 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)v13 + 18), v21, 1LL);
    if ( v34 && v35 )
    {
      if ( (_QWORD)v33 )
        tagObjLock::UnLockExclusive((tagObjLock *)v33);
    }
    if ( (Prop & 1) == 0 )
    {
      v15 = *((_QWORD *)v13 + 5);
      goto LABEL_9;
    }
  }
  v15 = *((_QWORD *)v13 + 5);
  if ( (*(_BYTE *)(v15 + 26) & 0x20) == 0 )
    return (unsigned int)CalcVisRgn(a1);
  if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0 )
  {
LABEL_9:
    SetRectRgnIndirect(*a1, v15 + 88);
    return v14;
  }
  return 0LL;
}
