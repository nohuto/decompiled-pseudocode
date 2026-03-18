/*
 * XREFs of NtUserCsDdeUninitialize @ 0x140259750
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x140253250 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  struct tagTHREADINFO *v5; // rax

  EnterCrit(0LL, 0LL);
  v3 = (_QWORD *)HMValidateHandleNoRip(a1, 9);
  if ( v3 )
  {
    v5 = PtiCurrent(v2);
    xxxDestroyThreadDDEObject((__int64)v5, v3);
  }
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
