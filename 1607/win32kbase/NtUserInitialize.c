/*
 * XREFs of NtUserInitialize @ 0x1C0051920
 * Callers:
 *     <none>
 * Callees:
 *     IsVerifyTcbPrivilegesSupported_0 @ 0x1C0002AE0 (IsVerifyTcbPrivilegesSupported_0.c)
 *     VerifyTcbPrivileges_0 @ 0x1C0002AE8 (VerifyTcbPrivileges_0.c)
 *     IsInitializeMediaChangeSupported_0 @ 0x1C0002AF0 (IsInitializeMediaChangeSupported_0.c)
 *     InitializeMediaChange_0 @ 0x1C0002AF8 (InitializeMediaChange_0.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00531CC (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x1C006DE20 (InitializeGreCSRSS.c)
 *     InitializePowerRequestList @ 0x1C01550AC (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(HANDLE Handle)
{
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  BOOL v4; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rax
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle);
  if ( (int)IsVerifyTcbPrivilegesSupported_0() >= 0 && !(unsigned __int8)VerifyTcbPrivileges_0() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned int)GetConfigUlong(
                         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AdaptiveDisplayBrightness"
                          "\\{23B44AF2-78CE-4943-81DF-89817E8D23FD}",
                         L"LoadCustomAdbAlgorithm",
                         &v7)
      && v7;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = v4;
    if ( (int)IsInitializeMediaChangeSupported_0() < 0 || (result = InitializeMediaChange_0(), (int)result >= 0) )
    {
      if ( (unsigned int)InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v6 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v6 + 768) |= 0x200000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        return UserInitialize();
      }
      return 3221225473LL;
    }
  }
  return result;
}
