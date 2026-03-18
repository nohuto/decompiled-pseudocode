/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x14013E810
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetAncestor @ 0x14013EA2C (_GetAncestor.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     QueueShutdownData @ 0x14018E3C0 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 *v12; // r14
  int v13; // ecx
  __int64 UserSessionState; // rax
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // edi

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_14;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v5 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v5 + 456) != CurrentProcessWin32Process )
  {
    v7 = 5LL;
    goto LABEL_14;
  }
  if ( v6 != GetAncestor(v6, 2LL) || a3 > 0x101 )
  {
    v13 = 87;
    goto LABEL_13;
  }
  v9 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (a3 + 1), 1919054677LL);
  v12 = v9;
  if ( !v9 )
  {
    v13 = 8;
LABEL_13:
    UserSetLastError(v13);
    goto LABEL_14;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v12, a3 + 1, (const unsigned __int16 *)a2);
  }
  else
  {
    *v9 = 0;
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  v16 = (void *)InternalRemoveProp(v6, *(unsigned __int16 *)(UserSessionState + 41392), 1u);
  if ( v16 )
    Win32FreePool(v16);
  v19 = W32GetUserSessionState(v18, v17);
  if ( (unsigned int)InternalSetProp(v6, *(unsigned __int16 *)(v19 + 41392), (__int64)v12, 1u) )
  {
    v21 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v20) + 69032) )
      QueueShutdownData(a1, 1uLL);
  }
  else
  {
    v21 = -1073741823;
  }
  if ( v21 < 0 )
    Win32FreePool(v12);
  else
    v7 = 1LL;
LABEL_14:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
