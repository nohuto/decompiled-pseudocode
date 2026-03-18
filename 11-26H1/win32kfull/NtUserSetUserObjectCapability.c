/*
 * XREFs of NtUserSetUserObjectCapability @ 0x140248530
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall NtUserSetUserObjectCapability(void *a1, unsigned int a2, void *a3, int a4)
{
  int v8; // edi
  KPROCESSOR_MODE PreviousMode; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // r8
  __int16 v19; // ax
  _QWORD *v20; // rax
  __int64 v21; // rax
  void *v22; // [rsp+20h] [rbp-28h] BYREF
  char v23[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v24; // [rsp+30h] [rbp-18h]

  v8 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v22 = 0LL;
  PreviousMode = ExGetPreviousMode();
  if ( (int)UserCaptureSid(a3, PreviousMode, &v22) >= 0 )
  {
    v11 = HMValidateHandleNoSecure((__int64)a1, 255);
    v12 = v11;
    if ( !v11 )
    {
LABEL_16:
      Win32FreePool(v22);
      goto LABEL_6;
    }
    v13 = _HMPheFromObject(v11);
    v14 = _HMPkheFromObject(v12);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v17 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      goto LABEL_5;
    v19 = gahti[12 * *(unsigned __int8 *)(v13 + 24) + 6];
    if ( (v19 & 2) != 0 )
    {
      v20 = *(_QWORD **)(v14 + 8);
    }
    else
    {
      if ( (v19 & 1) == 0 )
        goto LABEL_5;
      v21 = *(_QWORD *)(v14 + 8);
      if ( !v21 )
        goto LABEL_5;
      v20 = *(_QWORD **)(v21 + 456);
    }
    if ( v20 == v17 )
    {
      v8 = UserSetUserObjectCapability(a1, a2, v22, a4);
      goto LABEL_16;
    }
LABEL_5:
    UserSetLastError(5);
    v8 = 0;
  }
LABEL_6:
  if ( v23[0] )
    --*(_DWORD *)(v24 + 28);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
