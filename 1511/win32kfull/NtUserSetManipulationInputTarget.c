/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C0220020
 * Callers:
 *     <none>
 * Callees:
 *     ResolveInputSinkToPwnd @ 0x1C0008E18 (ResolveInputSinkToPwnd.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  int v14; // ecx
  struct tagPOINTERINPUTFRAME *v15; // rax
  int v16; // r15d
  __int64 v17; // rcx
  size_t v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  int v26[3]; // [rsp+34h] [rbp-54h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+48h] [rbp-40h]
  _QWORD v29[3]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a3;
  v8 = 0LL;
  v27 = 0LL;
  v26[0] = 0;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v14 = 5;
LABEL_18:
    v20 = 0;
    UserSetLastError(v14);
    goto LABEL_19;
  }
  if ( !(_DWORD)v5 || (v15 = FindAndReferenceFrameById(a1)) == 0LL )
  {
    v14 = 87;
    goto LABEL_18;
  }
  v16 = *(_DWORD *)(*((_QWORD *)v15 + 9) + 56LL);
  v28 = v16;
  UnreferenceFrameInt(v15);
  v18 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v17) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v18 + a4 > W32UserProbeAddress || v18 + a4 < a4 )
      *W32UserProbeAddress = 0;
  }
  v19 = Win32AllocPoolWithQuota(v18, 1851878741LL);
  v8 = (void *)v19;
  v27 = v19;
  if ( v19 )
  {
    PushW32ThreadLock(v19, v29, (__int64)Win32FreePool);
    memmove(v8, (const void *)a4, v18);
    v23 = (__int64 *)ResolveInputSinkToPwnd(a2, v16, v26);
    if ( v23 )
      v24 = *v23;
    else
      LODWORD(v24) = 0;
    v20 = xxxSetManipulationInputTarget(a1, v24, v5, (int)v8, (struct tagWND *)a2, v26[0]);
  }
  else
  {
    v20 = 0;
    UserSetLastError(8);
  }
LABEL_19:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v29);
  UserSessionSwitchLeaveCrit(v22, v21);
  return v20;
}
