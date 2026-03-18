/*
 * XREFs of xxxCancelTracking @ 0x14005359C
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1400537A0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void xxxCancelTracking()
{
  __int64 v0; // rdi
  tagTLBLOCK::_unnamed_type_list_ *v1; // rbx
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // ebp
  struct tagTHREADINFO *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // r14
  _QWORD *i; // rsi
  _QWORD *v12; // r15
  int v13; // ebx
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  Win32RawLockedW32Thread *v16; // rbx
  __int64 v17; // rbx
  struct tagTHREADINFO **v18; // r14
  _QWORD *v19; // rbp
  _QWORD *v20; // rsi
  struct tagTHREADINFO *v21; // rcx
  _QWORD v22[12]; // [rsp+20h] [rbp-278h] BYREF
  _QWORD v23[24]; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v24[36]; // [rsp+140h] [rbp-158h] BYREF
  __int64 v25; // [rsp+260h] [rbp-38h] BYREF

  memset_0(v22, 0, sizeof(v22));
  v0 = 12LL;
  v1 = (tagTLBLOCK::_unnamed_type_list_ *)v24;
  v2 = 12LL;
  do
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_(v1);
    v1 = (tagTLBLOCK::_unnamed_type_list_ *)((char *)v1 + 24);
    --v2;
  }
  while ( v2 );
  v3 = v23;
  v4 = 12LL;
  do
  {
    Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v3);
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v6 = 0;
  v7 = PtiCurrent(v5);
  v10 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19176) + 176LL);
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v12 = i - 96;
    if ( *(i - 8) )
    {
      if ( v6 < 0xC )
      {
        v17 = v6;
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)&v24[3 * v6], (ULONG_PTR)(i - 96));
        Win32HM_LockIntoThread<0>((__int64)v7, *(_QWORD *)(v12[88] + 16LL), &v23[2 * v6++]);
        v22[v17] = v12;
      }
    }
  }
  v13 = v6 - 1;
  if ( (int)(v6 - 1) >= 0 )
  {
    v18 = (struct tagTHREADINFO **)&v22[v13];
    v19 = &v23[2 * v13];
    v20 = &v24[3 * v13];
    do
    {
      v21 = *v18;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v18 + 130, 0, 0) & 1) == 0 )
        xxxCancelTrackingForThread(v21);
      Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v19);
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v20);
      v19 -= 2;
      v20 -= 3;
      --v18;
      --v13;
    }
    while ( v13 >= 0 );
  }
  v14 = v24;
  v15 = 12LL;
  do
  {
    v14 -= 2;
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v14);
    --v15;
  }
  while ( v15 );
  v16 = (Win32RawLockedW32Thread *)&v25;
  do
  {
    v16 = (Win32RawLockedW32Thread *)((char *)v16 - 24);
    Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v16);
    --v0;
  }
  while ( v0 );
}
