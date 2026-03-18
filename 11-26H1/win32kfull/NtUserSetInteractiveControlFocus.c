/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1402BCDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x140261B54 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

unsigned __int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = 0LL;
  v8 = v6;
  v9 = 0LL;
  if ( !a3 )
    goto LABEL_7;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(v6 + 456)) )
  {
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v15);
    v9 = (void *)ValidateHwnd(a3);
    if ( v16 )
    {
      v10 = v15;
      *(_BYTE *)(v15 + 1708) = 1;
    }
  }
  else
  {
    v9 = (void *)ValidateHwnd(a3);
  }
  if ( v9 )
  {
LABEL_7:
    Win32HM_LockIntoThread<1>(v8, (__int64)v9, (__int64 *)BugCheckParameter3);
    v13 = (__int64 *)InteractiveControlManager::Instance(v12, v11);
    v7 = (unsigned __int64)(unsigned int)~InteractiveControlManager::SetDeviceFocus(v13, a1, a2, v9) >> 31;
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v7;
}
