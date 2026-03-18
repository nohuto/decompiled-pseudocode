/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C0220200
 * Callers:
 *     <none>
 * Callees:
 *     ResolveInputSinkToPwnd @ 0x1C0007858 (ResolveInputSinkToPwnd.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  int v12; // ecx
  struct tagPOINTERINPUTFRAME *v13; // rax
  int v14; // r15d
  __int64 v15; // rcx
  size_t v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  int v24[3]; // [rsp+34h] [rbp-54h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  int v26; // [rsp+48h] [rbp-40h]
  _QWORD v27[3]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a3;
  v8 = 0LL;
  v25 = 0LL;
  v24[0] = 0;
  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5;
LABEL_18:
    v18 = 0;
    UserSetLastError(v12);
    goto LABEL_19;
  }
  if ( !(_DWORD)v5 || (v13 = FindAndReferenceFrameById(a1)) == 0LL )
  {
    v12 = 87;
    goto LABEL_18;
  }
  v14 = *(_DWORD *)(*((_QWORD *)v13 + 9) + 56LL);
  v26 = v14;
  UnreferenceFrameInt(v13);
  v16 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v16 + a4 > W32UserProbeAddress || v16 + a4 < a4 )
      *W32UserProbeAddress = 0;
  }
  v17 = Win32AllocPoolWithQuota(v16, 1851878741LL);
  v8 = (void *)v17;
  v25 = v17;
  if ( v17 )
  {
    PushW32ThreadLock(v17, v27, (__int64)Win32FreePool);
    memmove(v8, (const void *)a4, v16);
    v21 = (__int64 *)ResolveInputSinkToPwnd(a2, v14, v24);
    if ( v21 )
      v22 = *v21;
    else
      LODWORD(v22) = 0;
    v18 = xxxSetManipulationInputTarget(a1, v22, v5, (int)v8, (struct tagWND *)a2, v24[0]);
  }
  else
  {
    v18 = 0;
    UserSetLastError(8);
  }
LABEL_19:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v27);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v18;
}
