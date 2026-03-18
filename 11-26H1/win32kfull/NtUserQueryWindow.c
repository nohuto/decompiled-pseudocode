/*
 * XREFs of NtUserQueryWindow @ 0x14019A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402953CC (--0LeaveEnterCritShared@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  __int64 ThreadProcessId; // rdi
  int v11; // edi
  int v12; // edi
  __int64 *v13; // rdi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  bool v19; // al
  __int64 *v20; // rax
  __int64 v21; // rbx
  struct tagWND *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+40h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v4;
  if ( !v4 )
    goto LABEL_9;
  v8 = *(_QWORD *)(v4 + 16);
  if ( !a2 )
  {
    ThreadProcessId = *(int *)(*(_QWORD *)(v4 + 40) + 332LL);
    goto LABEL_4;
  }
  v14 = a2 - 1;
  if ( !v14 )
  {
    ThreadProcessId = (__int64)PsGetThreadProcessId(*(PETHREAD *)v8);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    ThreadProcessId = *(int *)(*(_QWORD *)(v4 + 40) + 328LL);
    goto LABEL_4;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v13 = *(__int64 **)(*(_QWORD *)(v8 + 464) + 128LL);
    goto LABEL_8;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v13 = *(__int64 **)(*(_QWORD *)(v8 + 464) + 120LL);
    goto LABEL_8;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v11 = v18 - 2;
    if ( !v11 )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928);
      ThreadProcessId = *(_QWORD *)(v8 + 464) == v6;
      goto LABEL_4;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = *(__int64 **)(v8 + 816);
      goto LABEL_8;
    }
    if ( v12 == 1 )
    {
      v13 = *(__int64 **)(v8 + 824);
LABEL_8:
      if ( v13 )
      {
        ThreadProcessId = *v13;
        goto LABEL_4;
      }
    }
LABEL_9:
    ThreadProcessId = 0LL;
    goto LABEL_4;
  }
  v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v6 == 682 )
  {
    ThreadProcessId = 1LL;
  }
  else
  {
    v19 = IsHungWindow((const struct tagTHREADINFO **)v4);
    ThreadProcessId = v19;
    if ( v19 )
    {
      v20 = (__int64 *)ShouldProcessHungWindow(v7);
      if ( v20 )
      {
        v21 = *v20;
        LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v24);
        EnterCrit(1LL, 0LL);
        v22 = (struct tagWND *)HMValidateHandleNoSecure(v21, 1);
        if ( v22 )
          ProcessHungWindow(v22);
        UserSessionSwitchLeaveCrit(v23);
        EnterSharedCrit(0LL, v24);
      }
    }
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v6);
  return ThreadProcessId;
}
