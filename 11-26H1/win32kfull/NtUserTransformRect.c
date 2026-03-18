/*
 * XREFs of NtUserTransformRect @ 0x1401BC410
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1401BC5C0 (IsValidKernelDpiAwarenessContext.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserTransformRect(void *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // edi
  __int64 v9; // rcx
  _QWORD v11[6]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v12; // [rsp+50h] [rbp-58h] BYREF
  __int128 Src; // [rsp+60h] [rbp-48h] BYREF

  v8 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  Src = 0LL;
  v11[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2) && (unsigned int)IsValidKernelDpiAwarenessContext(a3) )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, a1, 0x10uLL);
    Src = v12;
    if ( a4 && (a2 & 0xF) == 2 )
      v11[0] = ValidateHmonitor(a4);
    if ( !v11[0] )
    {
      LODWORD(v12) = (DWORD2(Src) + (int)Src) / 2;
      DWORD1(v12) = (HIDWORD(Src) + DWORD1(Src)) / 2;
      v11[0] = GuessMonitorOverrideForCoordinateConversions(v12, a3, 0LL);
    }
    LogicalToPhysicalDPIRect(&Src, &Src, a3, v11);
    PhysicalToLogicalDPIRect(&Src, &Src, a2, v11);
    RtlCopyToUser(a1, &Src, 0x10uLL);
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
