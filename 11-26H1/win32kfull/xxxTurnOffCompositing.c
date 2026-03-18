/*
 * XREFs of xxxTurnOffCompositing @ 0x1401F9048
 * Callers:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     xxxInternalEnumWindow @ 0x1401F90C4 (xxxInternalEnumWindow.c)
 */

void __fastcall xxxTurnOffCompositing(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  BugCheckParameter3[1] = 0LL;
  v2 = a1;
  BugCheckParameter3[0] = -1LL;
  v3 = 1;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( !v2 )
      goto LABEL_3;
    v3 = 3;
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, *(_QWORD *)(a1 + 112));
  }
  xxxInternalEnumWindow(v2, xxxEnumTurnOffCompositing, 0LL, v3);
LABEL_3:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
}
