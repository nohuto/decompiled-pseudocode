/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C0098B90
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     IsShellProcess @ 0x1C009B064 (IsShellProcess.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 376))
    && v4 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL)
    && (*(_DWORD *)(v2 + 1096) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return (int)PostEventMessageEx(
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL),
                  9u,
                  a1,
                  0x342u,
                  1LL,
                  0LL,
                  0LL);
  }
  UserSetLastError(5LL);
  return 0LL;
}
