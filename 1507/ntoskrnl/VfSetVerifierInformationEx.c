/*
 * XREFs of VfSetVerifierInformationEx @ 0x140758B4C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfFreeCapturedUnicodeString @ 0x1407373E8 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140737558 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x140745668 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x14074AF50 (VfWdSetCancelTimeout.c)
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
      ++dword_140331D78;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v7, (ULONG64)(a1 + 2), 0x200u);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v8 = xmmword_140331D80;
        xmmword_140331D80 = v7;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        VfFreeCapturedUnicodeString((__int64)&v8);
      }
    }
  }
  return (unsigned int)v4;
}
