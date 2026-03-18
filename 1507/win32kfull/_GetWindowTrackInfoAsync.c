/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C007D610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 384))
    && v4 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 63LL)
    && (*(_DWORD *)(v2 + 1080) & 0x20) == 0
    && !(unsigned int)IsThreadHung(v2, 0LL) )
  {
    return PostEventMessageEx(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL),
             9,
             a1,
             834,
             1LL,
             0LL,
             0LL);
  }
  UserSetLastError(5);
  return 0LL;
}
