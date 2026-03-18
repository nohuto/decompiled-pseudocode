/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C01025C0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 376))
    && v4 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL, v4)
    && (*(_DWORD *)(v2 + 1072) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return PostEventMessageEx(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL),
             9u,
             a1,
             0x342u,
             1LL,
             0LL,
             0LL);
  }
  UserSetLastError(5);
  return 0LL;
}
