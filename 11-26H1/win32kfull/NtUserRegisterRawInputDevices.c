/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x14016FB50
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(volatile void *a1, unsigned int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r13
  SIZE_T v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  unsigned int *v11; // rdi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  unsigned int v15; // ebx
  unsigned int *v16; // rdi
  _BYTE v18[8]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v19; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-48h] BYREF
  void (*v21)(void *); // [rsp+90h] [rbp-38h]
  struct tagTHREADINFO *v23; // [rsp+E8h] [rbp+20h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  PsGetCurrentProcessWin32Process(v5);
  v23 = PtiCurrent(v6);
  if ( a1 && a2 && a3 == 16 )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    v7 = a2;
    v8 = 16LL * a2;
    ProbeForRead(a1, v8, 8u);
    if ( v8 > 0xFFFFFFFF )
    {
      v15 = 0;
      UserSetLastError(87);
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
    else
    {
      v9 = v8;
      v11 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1769108309LL);
      if ( !v11 )
        ExRaiseStatus(-1073741801);
      if ( v21 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v10);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
      }
      v12 = PtiCurrent(v10);
      BugCheckParameter2[0] = *((_QWORD *)v12 + 47);
      *((_QWORD *)v12 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)v11;
      v21 = Win32FreePool;
      if ( (unsigned int)v8 >= v8 )
        v9 = v8;
      memmove(v11, (const void *)a1, v9);
      v15 = RegisterRawInputDevices(v11, a2, 0LL);
      v16 = v11 + 1;
      do
      {
        EtwTraceAuditApiRegisterRawInputDevices(
          v15,
          *((unsigned __int16 *)v16 - 2),
          *((unsigned __int16 *)v16 - 1),
          *v16,
          *(_QWORD *)(v16 + 1),
          v23,
          *(_QWORD *)(*(_QWORD *)v23 + 1376LL),
          *(_QWORD *)(*(_QWORD *)v23 + 1216LL),
          *(_DWORD *)(*(_QWORD *)v23 + 1296LL));
        v16 += 4;
        --v7;
      }
      while ( v7 );
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
  }
  else
  {
    v15 = 0;
    UserSetLastError(87);
  }
  if ( v18[0] )
    --*(_DWORD *)(v19 + 28);
  UserSessionSwitchLeaveCrit(v13);
  return (int)v15;
}
