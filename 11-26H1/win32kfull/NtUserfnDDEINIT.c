/*
 * XREFs of NtUserfnDDEINIT @ 0x140210450
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14021067C (--$ManualLock@X@-$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // r14
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  ULONG_PTR *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  _WORD *Prop; // rdi
  ULONG_PTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v30; // ecx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h]

  v9 = a1;
  v10 = PtiCurrent(a1);
  v11 = ValidateHwnd(a3);
  v12 = 0LL;
  v13 = (ULONG_PTR *)v11;
  if ( v11 )
  {
    Win32HM_LockIntoThread<0>((__int64)v10, v11, BugCheckParameter3);
    UserSessionState = W32GetUserSessionState(v15, v14);
    Prop = (_WORD *)GetProp((__int64)v13, *(unsigned __int16 *)(UserSessionState + 41380), 1u);
    if ( !Prop )
    {
      v18 = v13[5];
      if ( *(char *)(v18 + 19) < 0 || *(char *)(v18 + 20) < 0 )
      {
        v30 = 87;
      }
      else
      {
        Prop = (_WORD *)Win32AllocPoolWithQuotaZInit(96LL, 1147433813LL);
        if ( Prop )
        {
          v21 = W32GetUserSessionState(v20, v19);
          *(_QWORD *)Prop = *(_QWORD *)(v21 + 36452);
          *((_DWORD *)Prop + 2) = *(_DWORD *)(v21 + 36460);
          if ( SeCreateClientSecurity(
                 KeGetCurrentThread(),
                 (PSECURITY_QUALITY_OF_SERVICE)(v21 + 36452),
                 0,
                 (PSECURITY_CLIENT_CONTEXT)(Prop + 8)) >= 0 )
          {
            *((_DWORD *)Prop + 22) = 0;
            v24 = W32GetUserSessionState(v23, v22);
            if ( (unsigned int)InternalSetProp((__int64)v13, *(unsigned __int16 *)(v24 + 41380), (__int64)Prop, 1u) )
            {
              v9 = a1;
              goto LABEL_9;
            }
            SeDeleteClientSecurity(Prop + 8);
          }
          Win32FreePool(Prop);
        }
        v30 = 8;
      }
      UserSetLastError(v30);
LABEL_13:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      return v12;
    }
LABEL_9:
    v25 = Prop[44];
    v33 = -1LL;
    *(_OWORD *)BugCheckParameter2 = 0LL;
    if ( v25 >= 4096 )
    {
      UserSetLastError(87);
    }
    else
    {
      Prop[44] = v25 + 1;
      Win32RawLockedItemBase<void,0,1,0,1>::ManualLock<void>((ULONG_PTR)BugCheckParameter2, *v13);
      v28 = W32GetUserSessionState(v27, v26);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v28 + 8LL * ((a6 + 6) & 0x1F) + 70904))(
              v9,
              a2,
              a3,
              a4,
              a5);
    }
    if ( v33 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2);
    goto LABEL_13;
  }
  return v12;
}
