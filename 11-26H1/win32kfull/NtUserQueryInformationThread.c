/*
 * XREFs of NtUserQueryInformationThread @ 0x1401533A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE *v11; // rdi
  __int64 v12; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v14; // rax
  unsigned int InformationThread; // esi
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-A8h] BYREF
  void (*v19)(void *); // [rsp+50h] [rbp-98h]
  _BYTE Src[64]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a4;
  memset_0(Src, 0, sizeof(Src));
  EnterCrit(0LL, 0LL);
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v7) + 40);
  if ( PsGetCurrentProcess(v9) == v8 )
  {
    PtiCurrent(v10);
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v11 = (_BYTE *)Win32AllocPoolWithQuotaZInit((unsigned int)v4, 1230271317LL);
        if ( !v11 )
          ExRaiseStatus(-1073741801);
        if ( v19 != (void (*)(void *))-1LL )
        {
          BugCheckParameter4 = PtiCurrent(v12);
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
        }
        v14 = PtiCurrent(v12);
        BugCheckParameter2[0] = *((_QWORD *)v14 + 47);
        *((_QWORD *)v14 + 47) = BugCheckParameter2;
        BugCheckParameter2[1] = (ULONG_PTR)v11;
        v19 = Win32FreePool;
      }
      else
      {
        v11 = Src;
      }
      memmove(v11, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v11 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v11, (unsigned int)v4);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v11, v4);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return InformationThread;
}
