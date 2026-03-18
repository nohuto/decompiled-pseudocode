/*
 * XREFs of NtUserGetTouchInputInfo @ 0x140232A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // eax
  SIZE_T v14; // rbx
  __int64 CurrentProcessWow64Process; // rax
  int v16; // ebx
  int v18; // ecx

  v5 = a2;
  EnterCrit(0LL, 0LL);
  v8 = PtiCurrent(v7);
  if ( !a3 || a4 != 48 )
  {
    v18 = 87;
LABEL_11:
    v16 = 0;
    UserSetLastError(v18);
    goto LABEL_9;
  }
  v9 = HMValidateHandleWithDescriptor(a1, 0x14u);
  v12 = v9;
  if ( !v9 )
  {
    v16 = 0;
    goto LABEL_9;
  }
  if ( *(struct tagTHREADINFO **)(v9 + 16) != v8 )
  {
    v18 = 5;
    goto LABEL_11;
  }
  v13 = *(_DWORD *)(v9 + 24);
  if ( v13 < (unsigned int)v5 )
    v5 = v13;
  v14 = 48 * v5;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10);
  ProbeForWrite(a3, v14, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v12 + 32), v14);
  v16 = 1;
  v11 = *((_QWORD *)v8 + 149);
  if ( v11 == a1 )
  {
    FreeTouchInputInfo(v11);
    *((_QWORD *)v8 + 149) = 0LL;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v11);
  return v16;
}
