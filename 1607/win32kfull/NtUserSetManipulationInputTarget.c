/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C0219DE0
 * Callers:
 *     <none>
 * Callees:
 *     ResolveInputSinkToPwnd @ 0x1C000C8E0 (ResolveInputSinkToPwnd.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(
        unsigned int a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  struct tagPOINTERINPUTFRAME *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r15d
  __int64 v16; // rcx
  size_t v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v28; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+34h] [rbp-54h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+48h] [rbp-40h]
  _QWORD v32[3]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a3;
  v8 = 0LL;
  v30 = 0LL;
  v28 = 0;
  v29 = 0;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v11 = 5LL;
LABEL_18:
    v20 = 0;
    UserSetLastError(v11);
    goto LABEL_19;
  }
  if ( !(_DWORD)v5 || (v12 = FindAndReferenceFrameById(a1)) == 0LL )
  {
    v11 = 87LL;
    goto LABEL_18;
  }
  v15 = *(_DWORD *)(*((_QWORD *)v12 + 11) + 56LL);
  v31 = v15;
  UnreferenceFrameInt(v12, v13, v14);
  v17 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v16) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v17 + Src > W32UserProbeAddress || v17 + Src < Src )
      *W32UserProbeAddress = 0;
  }
  v18 = Win32AllocPoolWithQuota(v17, 1851878741LL);
  v8 = (void *)v18;
  v30 = v18;
  if ( v18 )
  {
    PushW32ThreadLock(v18, v32, (__int64)Win32FreePool, v19);
    memmove(v8, (const void *)Src, v17);
    v25 = (__int64 *)ResolveInputSinkToPwnd(a2, v15, &v28);
    if ( v25 )
      v26 = *v25;
    else
      v26 = 0LL;
    v20 = xxxSetManipulationInputTarget(a1, v26, v5, (__int64)v8, a2, v28);
  }
  else
  {
    v20 = 0;
    v29 = 0;
    UserSetLastError(8LL);
  }
LABEL_19:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v21, v23, v24);
  UserSessionSwitchLeaveCrit(v22, v21);
  return v20;
}
