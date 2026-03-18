/*
 * XREFs of zzzMoveShadow @ 0x14024B140
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v4; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  struct tagPOINT v6; // [rsp+78h] [rbp+10h] BYREF

  result = FindShadow(a1, a2);
  v4 = result;
  if ( result )
  {
    v6 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *((_QWORD *)result + 1));
    zzzUpdateLayeredWindow(*((struct tagWND **)v4 + 1), 0LL, &v6, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  return result;
}
