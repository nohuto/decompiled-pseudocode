/*
 * XREFs of SmpCreateVolumeDescriptors @ 0x1400052D8
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpCreateVolumeDescriptor @ 0x1400059B8 (SmpCreateVolumeDescriptor.c)
 *     RtlStringCbCopyW @ 0x140007004 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 */

__int64 SmpCreateVolumeDescriptors()
{
  unsigned int v0; // edi
  NTSTATUS InformationProcess; // ecx
  WCHAR i; // bx
  int v3; // eax
  __int64 v5; // rax
  struct _UNICODE_STRING v6; // [rsp+38h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  _DWORD ProcessInformation[10]; // [rsp+58h] [rbp+7h] BYREF
  wchar_t pszDest[8]; // [rsp+80h] [rbp+2Fh] BYREF
  wchar_t SourceString[8]; // [rsp+90h] [rbp+3Fh] BYREF

  v0 = 0;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessDeviceMap,
                         ProcessInformation,
                         0x24u,
                         0LL);
  if ( InformationProcess < 0 )
  {
    v5 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v5) = 1548;
    *((_DWORD *)&SmpPagefileLog + 2 * v5 + 1) = InformationProcess;
    *((_QWORD *)&SmpPagefileLog + v5 + 1) = 0LL;
    return (unsigned int)InformationProcess;
  }
  else
  {
    RtlStringCbCopyW(pszDest, 0x10uLL, L"\\??\\A:\\");
    RtlInitUnicodeStringEx(&DestinationString, pszDest);
    RtlStringCbCopyW(SourceString, 0x10uLL, L"\\??\\A:");
    RtlInitUnicodeStringEx(&v6, SourceString);
    for ( i = 67; i <= 0x5Au; ++i )
    {
      v3 = ProcessInformation[0];
      if ( _bittest(&v3, (unsigned __int8)(i - 65)) && (SmpPagefileOnOsVolume != 1 || i == SmpOsVolumeLetter) )
      {
        DestinationString.Buffer[4] = i;
        v6.Buffer[4] = i;
        SmpCreateVolumeDescriptor(i, &DestinationString, &v6);
      }
    }
    if ( (__int64 *)SmpVolumeDescriptorList == &SmpVolumeDescriptorList )
      return (unsigned int)-1073741591;
    return v0;
  }
}
