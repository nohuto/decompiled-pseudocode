/*
 * XREFs of EditionDriverInitialize @ 0x1402A25E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeWin32kApiSetTable @ 0x14022FD4C (FreeWin32kApiSetTable.c)
 *     CreateWin32kApiSetTable @ 0x1402478CC (CreateWin32kApiSetTable.c)
 *     ?Initialize@CursorApiRouter@@SAJXZ @ 0x140257160 (-Initialize@CursorApiRouter@@SAJXZ.c)
 *     ?InitializeWinArrangeGlobal@@YAJXZ @ 0x140258F20 (-InitializeWinArrangeGlobal@@YAJXZ.c)
 *     ?InitializeFeedbackData@@YAJXZ @ 0x14025E188 (-InitializeFeedbackData@@YAJXZ.c)
 *     CreatePerSessionWin32kCall @ 0x140265400 (CreatePerSessionWin32kCall.c)
 *     ?Initialize@ForegroundLaunch@@YAJXZ @ 0x140266A80 (-Initialize@ForegroundLaunch@@YAJXZ.c)
 *     _anonymous_namespace_::InitializeTimerGlobals @ 0x14026E7C8 (_anonymous_namespace_--InitializeTimerGlobals.c)
 *     ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x14029118C (-Initialize@ShellForegroundBoost@@YAJXZ.c)
 *     wil_InitializeFeatureStaging @ 0x1403FA09C (wil_InitializeFeatureStaging.c)
 */

__int64 __fastcall EditionDriverInitialize(int a1, __int64 a2)
{
  int v3; // eax
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rbx
  __int64 KernelEvent; // rax
  ForegroundLaunch *v20; // rcx
  ShellForegroundBoost *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx

  if ( a1 )
  {
    v3 = wil_InitializeFeatureStaging();
    if ( v3 < 0 )
      KeBugCheckEx(0x164u, 0x3EuLL, v3, 0LL, 0LL);
  }
  SessionState = W32GetSessionState(a1, a2);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 144));
  if ( Win32kApiSetTable < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, Win32kApiSetTable, 0LL, 0LL);
    v8 = W32GetSessionState(v7, v6);
    FreeWin32kApiSetTable((PVOID **)(v8 + 144));
    return 3221225473LL;
  }
  if ( a1 )
    W32PageEntireDriver(EditionDriverInitialize);
  *(_DWORD *)(W32GetUserSessionState(v7, v6) + 32) = 1;
  *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56996) = 0x100000000LL;
  v13 = W32GetSessionState(0, v12);
  result = CreatePerSessionWin32kCall((__int64 *)(v13 + 144));
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  result = anonymous_namespace_::InitializeTimerGlobals(v15, v14);
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  UserSessionState = W32GetUserSessionState(v17, v16);
  KernelEvent = CreateKernelEvent(1LL);
  *(_QWORD *)(UserSessionState + 18760) = KernelEvent;
  if ( !KernelEvent )
    goto LABEL_31;
  *(_QWORD *)(UserSessionState + 18768) = 0LL;
  result = ForegroundLaunch::Initialize(v20);
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  result = ShellForegroundBoost::Initialize(v21);
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  result = CursorApiRouter::Initialize();
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  result = InitializeFeedbackData();
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  v22 = CreateKernelEvent(1LL);
  *(_QWORD *)(W32GetUserSessionState(v24, v23) + 62936) = v22;
  if ( *(_QWORD *)(W32GetUserSessionState(v26, v25) + 62936) )
  {
    result = InitializeWinArrangeGlobal(v28, v27);
    if ( (int)result < 0 && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
  }
  else
  {
LABEL_31:
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
    return 3221225495LL;
  }
  return result;
}
