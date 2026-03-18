/*
 * XREFs of NtUserGetGestureConfig @ 0x1401E45C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GetGestureConfigSettings @ 0x1401E4A1C (GetGestureConfigSettings.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetGestureConfig(__int64 a1, __int64 a2, int a3, __int64 a4, volatile void *Address, int a6)
{
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rax
  unsigned int ULongFromUser; // eax
  __int64 v14; // rbx
  size_t v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int GestureConfigSettings; // ebx
  int v22; // ecx
  _BYTE v23[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-20h] BYREF
  __int64 v26; // [rsp+88h] [rbp-10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v26, 1LL);
  v10 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v10 )
  {
    GestureConfigSettings = 0;
    goto LABEL_16;
  }
  v11 = PtiCurrent(v9);
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v11, (__int64)v10);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  if ( a6 != 12 )
    goto LABEL_18;
  if ( (a3 & 0xFFFFFFFE) == 0 )
  {
    v12 = *((_QWORD *)v10 + 5);
    if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
    {
      v22 = 1400;
      goto LABEL_22;
    }
    if ( Address )
    {
      ULongFromUser = RtlReadULongFromUser(a4);
      v14 = ULongFromUser;
      LODWORD(v26) = ULongFromUser;
      if ( ULongFromUser - 1 <= 0xFF )
      {
        v15 = 12 * ULongFromUser;
        v18 = (void *)Win32AllocPoolWithQuotaZInit(v15, 1667724117LL);
        if ( v18 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
          ProbeForWrite(Address, 12 * v14, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v18, (const void *)Address, (unsigned int)v15);
          GestureConfigSettings = GetGestureConfigSettings(v10, (__int64)v18);
          if ( GestureConfigSettings )
            memmove((void *)Address, v18, v15);
          if ( v18 )
            Win32FreePool(v18);
          if ( v23[0] )
            --*(_DWORD *)(v24 + 28);
          goto LABEL_15;
        }
        v22 = 8;
        goto LABEL_22;
      }
    }
LABEL_18:
    v22 = 87;
LABEL_22:
    GestureConfigSettings = 0;
    UserSetLastError(v22);
    goto LABEL_23;
  }
  UserSetLastError(1004);
  GestureConfigSettings = 0;
LABEL_23:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
LABEL_15:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_16:
  UserSessionSwitchLeaveCrit(v9);
  return GestureConfigSettings;
}
