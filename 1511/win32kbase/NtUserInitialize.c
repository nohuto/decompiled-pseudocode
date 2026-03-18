/*
 * XREFs of NtUserInitialize @ 0x1C007DC70
 * Callers:
 *     <none>
 * Callees:
 *     IsVerifyTcbPrivilegesSupported_0 @ 0x1C0002AE0 (IsVerifyTcbPrivilegesSupported_0.c)
 *     VerifyTcbPrivileges_0 @ 0x1C0002AE8 (VerifyTcbPrivileges_0.c)
 *     IsInitializeMediaChangeSupported_0 @ 0x1C0002AF0 (IsInitializeMediaChangeSupported_0.c)
 *     InitializeMediaChange_0 @ 0x1C0002AF8 (InitializeMediaChange_0.c)
 *     InitializeGreCSRSS @ 0x1C00641EC (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     sub_1C007E418 @ 0x1C007E418 (sub_1C007E418.c)
 *     InitializePowerRequestList @ 0x1C013C6F0 (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(__int64 a1, __int64 a2)
{
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(a1, a2);
  if ( (int)IsVerifyTcbPrivilegesSupported_0() >= 0 && !(unsigned __int8)VerifyTcbPrivileges_0() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(a1);
  if ( (int)result >= 0 )
  {
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = sub_1C007E418();
    if ( (int)IsInitializeMediaChangeSupported_0() < 0 || (result = InitializeMediaChange_0(), (int)result >= 0) )
    {
      if ( InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v6 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v6 + 776) |= 0x4000u;
        return UserInitialize(v7);
      }
      return 3221225473LL;
    }
  }
  return result;
}
