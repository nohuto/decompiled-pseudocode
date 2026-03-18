/*
 * XREFs of xxxCsEvent @ 0x1402EF878
 * Callers:
 *     xxxChangeMonitorFlags @ 0x14008574C (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1402B20B0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1402EFAA8 (xxxMessageEvent.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x14002300C (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$?0X@?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@PEAUtagEVENT_PACKET_TARGETS@@P6AX0@Z@Z @ 0x1402EF7C4 (--$-0X@-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@PEAUtagEVENT_PACKET_TARGETS@@P6.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall xxxCsEvent(const void *a1, unsigned __int16 a2)
{
  int v2; // esi
  struct tagTHREADINFO *v3; // r15
  _WORD *v4; // rax
  _WORD *v5; // rbx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  int v16; // r14d
  __int64 i; // rsi
  int j; // esi
  _QWORD *v19; // rax
  __int64 v20; // rax
  struct tagWND *v21; // r14
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v24[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = a2;
  v3 = PtiCurrent((__int64)a1);
  v4 = (_WORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v2 + 8), 895775573LL);
  v5 = v4;
  if ( !v4 )
    return 16392LL;
  RtlCopyVolatileMemory(v4, a1, (unsigned int)(v2 + 8));
  v5[3] = v2;
  v7 = 0;
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 66672);
  if ( v10 )
  {
    v11 = *(_DWORD *)v5;
    do
    {
      if ( ((*(_DWORD *)(v10 + 40) & v11) == 0 || v5[2]) && ((*(_DWORD *)(v10 + 40) & v11) != 0 || !v5[2]) )
        ++v7;
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v10 );
  }
  v12 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v7 + 8, 912552789LL);
  v15 = v12;
  if ( !v12 )
  {
    Win32FreePool(v5);
    return 16392LL;
  }
  *v12 = v7;
  v16 = 0;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 66672); i && v16 < *v15; i = *(_QWORD *)(i + 24) )
  {
    if ( ((*(_DWORD *)v5 & *(_DWORD *)(i + 40)) == 0 || v5[2]) && ((*(_DWORD *)v5 & *(_DWORD *)(i + 40)) != 0 || !v5[2]) )
    {
      BugCheckParameter3[0] = (ULONG_PTR)&v15[2 * v16 + 2];
      BugCheckParameter3[1] = *(_QWORD *)(i + 48);
      HMAssignmentLock(BugCheckParameter3, 0LL);
      ++v16;
    }
  }
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v24,
    (__int64)v5,
    (__int64)Win32FreePool);
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(v23, (__int64)v15);
  for ( j = 0; j < *v15; ++j )
  {
    v19 = (_QWORD *)HMAssignmentUnlock(&v15[2 * j + 2]);
    if ( v19 )
    {
      v20 = ValidateHwnd(*v19);
      v21 = (struct tagWND *)v20;
      if ( v20 )
      {
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v3, v20);
        xxxSendMessage(v21, 0x3Cu);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
  }
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v23);
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v24);
  return 0LL;
}
