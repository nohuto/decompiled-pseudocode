/*
 * XREFs of xxxInternalEnumWindow @ 0x1401F90C4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetClassIcon @ 0x140152AA8 (xxxSetClassIcon.c)
 *     xxxTurnOffCompositing @ 0x1401F9048 (xxxTurnOffCompositing.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        struct tagWND *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  struct tagBWL *result; // rax
  __int64 v7; // rdx
  struct tagBWL *v8; // rdi
  unsigned int v9; // esi
  __int64 *i; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  result = BuildHwndList(a1, a4, 0LL, 1);
  v8 = result;
  if ( result )
  {
    v9 = 1;
    for ( i = (__int64 *)((char *)result + 32); *i != 1; ++i )
    {
      v12 = HMValidateHandleNoSecure(*i, 1);
      if ( v12 )
      {
        v13 = PtiCurrent(v11);
        Win32HM_LockIntoThread<0>((__int64)v13, v12, BugCheckParameter3);
        v9 = a2(v12, a3);
        if ( !v9 )
        {
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          break;
        }
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
    FreeHwndList(v8, v7);
    return (struct tagBWL *)v9;
  }
  return result;
}
