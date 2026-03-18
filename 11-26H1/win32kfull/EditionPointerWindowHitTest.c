/*
 * XREFs of EditionPointerWindowHitTest @ 0x140086830
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-69h] BYREF
  _OWORD v26[5]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-9h]
  __int128 v28; // [rsp+D8h] [rbp+7h]

  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a3 + 80);
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18696) + 488LL) + 8LL) + 24LL);
    Win32HM_LockIntoThread<1>(a2, v15, (__int64 *)BugCheckParameter3);
  }
  v16 = xxxPointerWindowHitTest(a2, v15, a5, a6, a7, a8, a9, a4 != 0 ? 5 : 1, a10, a11, a12);
  if ( !a4 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
  v17 = HMValidateHandleNoSecure(v16, 1);
  memset_0(v26, 0, 0x70uLL);
  if ( v17 )
  {
    LODWORD(v26[0]) = 4;
    *(_QWORD *)&v27 = v17;
    HIDWORD(v27) = 2;
  }
  v18 = v26[1];
  *a1 = v26[0];
  v19 = v26[2];
  a1[1] = v18;
  v20 = v26[3];
  a1[2] = v19;
  v21 = v26[4];
  a1[3] = v20;
  v22 = v27;
  a1[4] = v21;
  v23 = v28;
  a1[5] = v22;
  a1[6] = v23;
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  return a1;
}
