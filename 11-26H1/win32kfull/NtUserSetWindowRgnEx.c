/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1402BE780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     MirrorRegion @ 0x14002C1A8 (MirrorRegion.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 */

__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  v7 = EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 40), v11 = *(_WORD *)(v9 + 42) & 0x2FFF, v11 == 669) || v11 == 671 )
  {
    v5 = 0;
    goto LABEL_21;
  }
  Win32HM_LockIntoThread<0>(v7, (__int64)v10, BugCheckParameter3);
  if ( (unsigned int)IsCurrentProcessDwm(v12) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v13 = UserValidateCopyRgn(a2);
        v14 = v13;
        if ( !v13
          || (v15 = *((_QWORD *)v10 + 5), (*(_BYTE *)(v15 + 26) & 0x40) != 0)
          && v13 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v13,
                               (unsigned int)-*(_DWORD *)(v15 + 88),
                               (unsigned int)-*(_DWORD *)(v15 + 92))
           || !(unsigned int)MirrorRegion((__int64)v10, v14, 0)
           || !(unsigned int)GreOffsetRgn(
                               v14,
                               *(unsigned int *)(*((_QWORD *)v10 + 5) + 88LL),
                               *(unsigned int *)(*((_QWORD *)v10 + 5) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v14 = 1LL;
      }
      SelectWindowRgn(v10, v14, 0);
      goto LABEL_6;
    }
    v5 = xxxSetWindowRgn((__int64)v10, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5);
  }
LABEL_6:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_21:
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
