/*
 * XREFs of MakeExportSuppressedPfnValid @ 0x14013C4D8
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x14013C170 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MakeExportSuppressedPfnValid(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-9h] BYREF
  __int64 ProcessInformation; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v6[5]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+78h] [rbp+3Fh] BYREF

  ProcessInformation = 7LL;
  v3 = 0;
  result = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL);
  if ( result >= 0 && (ProcessInformation & 0x200000000LL) != 0 )
  {
    v5[1] = 4096LL;
    v5[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7[1] = 4LL;
    v6[1] = &v3;
    v7[0] = a1 & 0xFFF;
    v6[2] = v7;
    v6[0] = 1LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    return ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v5, v6, 40, v3);
  }
  return result;
}
