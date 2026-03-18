/*
 * XREFs of xxxSetClassIcon @ 0x140152AA8
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     DestroyClassSmIcon @ 0x14014FCA0 (DestroyClassSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAU_HEAD@@@Z @ 0x1401F657C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     xxxInternalEnumWindow @ 0x1401F90C4 (xxxInternalEnumWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x140209D50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, ULONG_PTR a3, int a4)
{
  struct tagTHREADINFO *v8; // r13
  __int64 *result; // rax
  BOOL v10; // esi
  __int64 v11; // rdi
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = PtiCurrent((__int64)a1);
  if ( a4 == -14 )
    result = *(__int64 **)(**a2 + 80);
  else
    result = *(__int64 **)(**a2 + 112);
  if ( result != (__int64 *)a3 )
  {
    v10 = 1;
    if ( result )
      v11 = *result;
    else
      v11 = 0LL;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v10 = DestroyClassSmIcon(a2) != 0;
      v12 = *a2;
      BugCheckParameter3[1] = a3;
      BugCheckParameter3[0] = *v12 + 80;
    }
    else
    {
      v13 = DestroyClassSmIcon(a2);
      v14 = 0LL;
      if ( !v13 )
        v14 = v11;
      v11 = v14;
      *(_OWORD *)BugCheckParameter3 = *(_OWORD *)LockPointer(v16, **a2 + 112, a3);
    }
    HMAssignmentLock(BugCheckParameter3, 0LL);
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon((__int64 *)a2);
    if ( v10 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2);
      }
      else
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 61) + 8LL) + 24LL) + 112LL));
        xxxInternalEnumWindow(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 61) + 8LL) + 24LL) + 112LL),
          xxxSetClassIconEnum,
          **a2,
          2LL);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
      }
    }
    if ( v11 )
      return (__int64 *)HMValidateHandleNoRip(v11, 3);
    else
      return 0LL;
  }
  return result;
}
