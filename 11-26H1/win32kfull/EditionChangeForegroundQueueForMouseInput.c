/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x14029CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x14029D06C (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, UIPrivilegeIsolation *a2)
{
  struct tagTHREADINFO *v4; // rax
  const struct tagUIPI_INFO *v5; // r8
  struct tagWND *v6; // rsi
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  const struct tagWND *v14; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int16 *v18; // rdx
  __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v25; // r8
  __int64 v26; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28; // [rsp+38h] [rbp-20h]

  v4 = PtiCurrent(a1);
  v6 = *(struct tagWND **)(a1 + 80);
  v7 = (__int64)v4;
  if ( a2 )
  {
    v8 = 1;
    if ( !UIPrivilegeIsolation::CheckAccess(
            a2,
            (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 464LL) + 472LL),
            v5) )
    {
      v9 = *((_QWORD *)v6 + 2);
      v10 = *(_QWORD *)(v9 + 464);
      v11 = *(_DWORD *)(v10 + 480);
      BugCheckParameter3 = *(_QWORD *)(v10 + 472);
      LODWORD(v28) = v11;
      EtwTraceUIPIInputError(v7, v9, v10, &BugCheckParameter3, 1);
      return 0LL;
    }
  }
  else
  {
    v8 = 0;
  }
  CompositionInputWindowUIOwner = v6;
  if ( (unsigned int)IsIndependentInputWindow(v6) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v14);
    if ( !CompositionInputWindowUIOwner )
      return 0LL;
  }
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 95) & 0x2000) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor((__int64)CompositionInputWindowUIOwner);
    v16 = NonChildAncestor;
    if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 27LL) & 8) != 0
      || (v17 = *(_QWORD *)(NonChildAncestor + 136),
          v18 = *(__int16 **)(v17 + 8),
          v19 = *v18,
          v19 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v18) + 19904) + 898LL))
      || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 136) + 8LL) + 10LL) & 1) != 0
      || (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)CompositionInputWindowUIOwner + 2)) )
    {
      if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() )
        UpdateDelegationTargetForMouseInput(*((_QWORD *)CompositionInputWindowUIOwner + 2));
    }
    else
    {
      v28 = 0LL;
      BugCheckParameter3 = -1LL;
      if ( CompositionInputWindowUIOwner != v6 )
        Win32HM_LockIntoThread<0>(v7, (__int64)CompositionInputWindowUIOwner, &BugCheckParameter3);
      xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
      if ( v8 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18928) )
        {
          UserSessionState = W32GetUserSessionState(v23, v22);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  a2,
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18928) + 472LL),
                  v25) )
          {
            MSGLUA_GPQFOREGROUND(v26);
            return 0LL;
          }
        }
      }
    }
  }
  return 1LL;
}
