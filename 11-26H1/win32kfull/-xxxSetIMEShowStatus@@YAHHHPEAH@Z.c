/*
 * XREFs of ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140250050
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     UpdateWinIniInt @ 0x140201560 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402A16B4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(__int64 a1, __int64 a2, int *a3)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 ProfileUserName; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]

  *a3 = 0;
  v4 = a2;
  v5 = a1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14296) == (_DWORD)a1 )
    return 1LL;
  if ( !v4 )
  {
LABEL_3:
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 14296) = v5;
    v11 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19904);
    if ( (*v11 & 4) != 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18928) )
      {
        v17 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18928);
        if ( *(_QWORD *)(v17 + 120) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928) + 120LL) + 16LL);
          if ( *(_QWORD *)(v18 + 816) )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 520), 0, 0) & 1) == 0 )
            {
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
                BugCheckParameter3,
                *(_QWORD *)(v18 + 816));
              xxxNotifyImeShowStatus(*(struct tagWND **)(v18 + 816));
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            }
          }
        }
      }
    }
    return 1LL;
  }
  v20 = -1LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  ProfileUserName = CreateProfileUserName(BugCheckParameter3);
  if ( ProfileUserName )
    *a3 = UpdateWinIniInt(ProfileUserName, 0x23u, 0xECu);
  if ( *a3 )
  {
    if ( v20 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter3);
    goto LABEL_3;
  }
  if ( v20 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter3);
  return 0LL;
}
