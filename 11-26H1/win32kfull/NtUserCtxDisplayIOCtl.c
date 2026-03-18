/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1402B0C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CtxDisplayIOCtl @ 0x1402D297C (CtxDisplayIOCtl.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  void *v11; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF
  void (*v16)(void *); // [rsp+50h] [rbp-18h]

  v3 = a3;
  EnterCrit(0LL, 0LL);
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( PsGetCurrentProcess(v7) == v6 )
  {
    PtiCurrent(v8);
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    ProbeForRead(a2, v3, 1u);
    v11 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1950643029LL);
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    if ( v16 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v10);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    }
    v13 = PtiCurrent(v10);
    BugCheckParameter2[0] = *((_QWORD *)v13 + 47);
    *((_QWORD *)v13 + 47) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v11;
    v16 = Win32FreePool;
    memmove(v11, (const void *)a2, v3);
    v9 = CtxDisplayIOCtl(a1, v11, (unsigned int)v3);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
