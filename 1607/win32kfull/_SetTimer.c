/*
 * XREFs of _SetTimer @ 0x1C01E0CD0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C014052C (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  if ( !a1 || PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL);
  return 0LL;
}
