/*
 * XREFs of _SetTimer @ 0x1C01EA450
 * Callers:
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0133720 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  if ( !a1 || PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5);
  return 0LL;
}
