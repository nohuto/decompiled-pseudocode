/*
 * XREFs of VfSetVerifierInformationEx @ 0x1406D4F60
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     VfFreeCapturedUnicodeString @ 0x1406B7080 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1406B71F0 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x1406C3DC8 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x1406C848C (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // ecx
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 || (v2 != -1 ? (v5 = v2) : (v5 = 0), v4 = VfWdSetCancelTimeout(v5), v4 >= 0) )
    {
      ++dword_1402E18F8;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v7, (ULONG64)(a1 + 2), 0x200u);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v8 = xmmword_1402E1900;
        xmmword_1402E1900 = v7;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        VfFreeCapturedUnicodeString((__int64)&v8);
      }
    }
  }
  return (unsigned int)v4;
}
