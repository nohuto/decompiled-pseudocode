/*
 * XREFs of _SetTimer @ 0x1C01E9C40
 * Callers:
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 */

__int64 __fastcall SetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  if ( !a1 || PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5);
  return 0LL;
}
