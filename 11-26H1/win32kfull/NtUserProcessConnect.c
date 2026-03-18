/*
 * XREFs of NtUserProcessConnect @ 0x140190320
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x14018FD54 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(void *a1, unsigned int a2, volatile void *a3)
{
  HANDLE v4; // rsi
  __int64 v5; // rdx
  struct MOVESIZEDATA *v6; // rcx
  char v7; // bl
  char v8; // r14
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 (*v15)(void); // rax
  int v16; // eax
  int v17; // ebx
  __int64 (*v18)(void); // rax
  NTSTATUS result; // eax
  __int64 v20; // rcx
  HANDLE v21; // rdi
  int inited; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  signed __int64 v29; // rsi
  _OWORD *v30; // rsi
  signed __int32 v31[8]; // [rsp+0h] [rbp-388h] BYREF
  char v32; // [rsp+40h] [rbp-348h]
  unsigned int v33; // [rsp+48h] [rbp-340h]
  HANDLE v34; // [rsp+50h] [rbp-338h]
  HANDLE Handle; // [rsp+58h] [rbp-330h] BYREF
  _OWORD *v36; // [rsp+60h] [rbp-328h]
  volatile void *v37[2]; // [rsp+68h] [rbp-320h]
  __int64 ProcessPeb; // [rsp+78h] [rbp-310h]
  volatile void *Address; // [rsp+80h] [rbp-308h]
  SIZE_T Length; // [rsp+88h] [rbp-300h]
  int Src; // [rsp+C0h] [rbp-2C8h] BYREF
  _BYTE v42[584]; // [rsp+C8h] [rbp-2C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+310h] [rbp-78h] BYREF

  v4 = a1;
  Handle = a1;
  v33 = a2;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&Src, 0, 0x248uLL);
  v37[0] = 0LL;
  ProcessPeb = 0LL;
  Length = a2 + 8;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    v7 = 1;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      16,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
    v4 = Handle;
  }
  if ( a2 > 0x248 )
    return -1073741823;
  v13 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( v13 != PsGetCurrentProcess(v14) )
    return -1073741823;
  v15 = **(__int64 (***)(void))(W32GetWin32kFullApiSetTable()
                              + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex);
  if ( v15 )
    v16 = v15();
  else
    v16 = -1073741637;
  if ( v16 < 0 )
    return -1073741637;
  ProbeForWrite(Address, Length, 4u);
  v17 = *(_DWORD *)Address;
  Src = *(_DWORD *)Address;
  v18 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kFullApiSetTable()
                                        + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                            + 8LL);
  if ( v18 )
    LODWORD(v18) = v18();
  if ( v17 != (_DWORD)v18 )
    return -1073741811;
  Handle = 0LL;
  result = ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)PsProcessType, 1, &Handle, 0LL);
  v21 = Handle;
  v34 = Handle;
  if ( result >= 0 )
  {
    if ( v21 == (HANDLE)PsGetCurrentProcess(v20)
      || !(unsigned int)PsIsProtectedProcess(v21)
      || (unsigned int)PsIsProtectedProcessLight(v21) )
    {
      v32 = 0;
    }
    else
    {
      v36 = 0LL;
      *(_OWORD *)v37 = 0LL;
      inited = PsAcquireProcessExitSynchronization(v21);
      if ( inited < 0 )
      {
LABEL_23:
        ObfDereferenceObject(v21);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v8 = 0;
        }
        v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
          LOBYTE(v27) = v25;
          LOBYTE(v28) = v8;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 69152),
            4,
            3,
            17,
            (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
        }
        return inited;
      }
      v32 = 1;
      ProcessPeb = PsGetProcessPeb(v21);
      KeStackAttachProcess((PRKPROCESS)v21, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v29 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v36 = (_OWORD *)v29;
      if ( (v29 & 1) == 0 )
      {
        inited = -1073741823;
        goto LABEL_21;
      }
      v30 = (_OWORD *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
      v36 = v30;
      ProbeForRead(v30, 0x10uLL, 4u);
      *(_OWORD *)v37 = *v30;
      if ( LODWORD(v37[0]) != a2 )
      {
        inited = -1073741823;
        goto LABEL_21;
      }
      v37[0] = v37[1];
      ProbeForWrite(v37[1], a2, 4u);
    }
    EnterCrit(1LL, 0LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v21, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v23);
    if ( inited >= 0 )
    {
      if ( v32 )
      {
        memmove((void *)v37[0], v42, a2);
        _InterlockedOr(v31, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
LABEL_22:
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(v21);
        goto LABEL_23;
      }
      memmove((void *)Address, &Src, Length);
    }
LABEL_21:
    if ( !v32 )
      goto LABEL_23;
    goto LABEL_22;
  }
  return result;
}
