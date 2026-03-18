/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1402C15D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(__int64 a1, unsigned int a2, __int64 a3, const void *a4, __int64 a5, char a6)
{
  ULONG64 v9; // rax
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rcx
  _WORD *v13; // rdi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-60h] BYREF
  void (*v21)(void *); // [rsp+58h] [rbp-50h]
  __int64 v22; // [rsp+70h] [rbp-38h]

  PtiCurrent(a1);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v9 = (ULONG64)a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v22 = *(_QWORD *)(v9 + 16);
  v10 = *(_DWORD *)v9;
  if ( (unsigned __int16)*(_DWORD *)v9 >= 0x18u )
  {
    v13 = (_WORD *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v10, 1818784597LL);
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    if ( v21 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v12);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    }
    v15 = PtiCurrent(v12);
    BugCheckParameter2[0] = *((_QWORD *)v15 + 47);
    *((_QWORD *)v15 + 47) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v13;
    v21 = Win32FreePool;
    memmove(v13, a4, (unsigned __int16)v10);
    *v13 = v10;
    UserSessionState = W32GetUserSessionState(v17, v16);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _WORD *, __int64))(UserSessionState
                                                                                + 8LL * ((a6 + 6) & 0x1F)
                                                                                + 70904))(
            a1,
            a2,
            a3,
            v13,
            a5);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v11 = 0LL;
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  return v11;
}
