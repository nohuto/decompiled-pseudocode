/*
 * XREFs of NtUserInjectGesture @ 0x1402B6830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     _PostMessageCheckIL @ 0x1401EE5AC (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x14022EF8C (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x14025C55C (ValidateGestureInfo.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ValidateGestureCaller @ 0x1402D4BAC (ValidateGestureCaller.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, void *a4, volatile void *Address)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  _BYTE v24[16]; // [rsp+30h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-8Ch]
  const void *v27; // [rsp+60h] [rbp-88h]
  __int128 v28; // [rsp+68h] [rbp-80h] BYREF
  __int128 v29; // [rsp+78h] [rbp-70h]
  __int128 v30; // [rsp+88h] [rbp-60h]
  SIZE_T Length; // [rsp+98h] [rbp-50h]
  _OWORD v32[3]; // [rsp+A0h] [rbp-48h] BYREF
  SIZE_T v33; // [rsp+D0h] [rbp-18h]

  v27 = 0LL;
  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = v10;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87;
    }
    else
    {
      v15 = *(_QWORD *)(v12 + 40);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(v9, v12) )
        {
LABEL_10:
          v13 = 0;
LABEL_24:
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          goto LABEL_25;
        }
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        Length = 0LL;
        RtlCopyFromUser(&v28, a4, 0x38uLL);
        v32[0] = v28;
        v32[1] = v29;
        v32[2] = v30;
        v33 = Length;
        v18 = Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_16;
        }
        else if ( !Address )
        {
LABEL_16:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
            ProbeForRead(Address, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            v27 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v32) )
          {
            v20 = AllocGestureInfo(v12, 0, (__int64)v32, v27);
            v21 = v20;
            if ( v20 )
            {
              EtwTracePostInjectedGestureMessage(v12, v20);
              v22 = _HMObjectFromHandle(v21);
              v13 = PostMessageCheckIL(v12, 0x119u, *(unsigned int *)(v22 + 40), v21);
              if ( !v13 )
                FreeGestureInfo(v21);
              goto LABEL_24;
            }
          }
          goto LABEL_10;
        }
        v13 = 0;
        v26 = 0;
        UserSetLastError(87);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        goto LABEL_25;
      }
      v14 = 1400;
    }
    v13 = 0;
    UserSetLastError(v14);
    goto LABEL_24;
  }
  v13 = 0;
LABEL_25:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
