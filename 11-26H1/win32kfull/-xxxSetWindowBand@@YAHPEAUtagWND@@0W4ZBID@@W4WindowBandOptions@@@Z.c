/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402454B4 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x14027A3C0 (NtUserSetWindowBand.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002BB6C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _BeginDeferWindowPos @ 0x140179558 (_BeginDeferWindowPos.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x140179668 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1401796D0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 */

__int64 __fastcall xxxSetWindowBand(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  struct tagWND *v6; // rcx
  __int64 v7; // rcx
  struct tagSMWP *v8; // rbx
  struct tagTHREADINFO *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  int v14; // [rsp+20h] [rbp-50h] BYREF
  struct tagSMWP *v15[3]; // [rsp+28h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+90h] [rbp+20h] BYREF
  int v19; // [rsp+98h] [rbp+28h] BYREF

  v19 = a4;
  v18 = a3;
  v15[0] = 0LL;
  v14 = 19;
  if ( (a4 & 4) != 0 )
    v14 = 394263;
  v17[0] = v15;
  v17[1] = &v14;
  v17[2] = &v18;
  v17[3] = &v19;
  v15[0] = (struct tagSMWP *)BeginDeferWindowPos(0LL);
  if ( !v15[0] )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v17, a1, a2);
  if ( !v15[0] )
    return 0LL;
  v6 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1592LL);
  v15[1] = (struct tagSMWP *)v17;
  if ( !v6 )
    v6 = a1;
  v15[2] = (struct tagSMWP *)&v18;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v6);
  v8 = v15[0];
  if ( !v15[0] )
    return 0LL;
  v9 = PtiCurrent(v7);
  Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v8, BugCheckParameter3);
  v10 = xxxEndDeferWindowPosEx(v15[0], 1);
  v12 = PtiCurrent(v11);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, BugCheckParameter3);
  return v10;
}
