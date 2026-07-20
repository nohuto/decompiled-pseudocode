/*
 * XREFs of sub_140004F9C @ 0x140004F9C
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140005660 @ 0x140005660 (sub_140005660.c)
 *     sub_140006D10 @ 0x140006D10 (sub_140006D10.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 sub_140004F9C()
{
  unsigned int v0; // edi
  NTSTATUS InformationProcess; // ecx
  WCHAR i; // bx
  int v3; // eax
  __int64 v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  struct _UNICODE_STRING v7; // [rsp+48h] [rbp-9h] BYREF
  _DWORD ProcessInformation[10]; // [rsp+58h] [rbp+7h] BYREF
  WCHAR SourceString[8]; // [rsp+80h] [rbp+2Fh] BYREF
  WCHAR v10[8]; // [rsp+90h] [rbp+3Fh] BYREF

  v0 = 0;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessDeviceMap,
                         ProcessInformation,
                         0x24u,
                         0LL);
  if ( InformationProcess < 0 )
  {
    v5 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v5) = 1416;
    *((_DWORD *)&unk_140020220 + 2 * v5 + 1) = InformationProcess;
    *((_QWORD *)&unk_140020220 + v5 + 1) = 0LL;
    return (unsigned int)InformationProcess;
  }
  else
  {
    sub_140006D10(SourceString, 16LL, L"\\??\\A:\\");
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    sub_140006D10(v10, 16LL, L"\\??\\A:");
    RtlInitUnicodeStringEx(&v7, v10);
    for ( i = 67; i <= 0x5Au; ++i )
    {
      v3 = ProcessInformation[0];
      if ( _bittest(&v3, (unsigned __int8)(i - 65)) && (dword_1400201C0 != 1 || i == word_140020448) )
      {
        DestinationString.Buffer[4] = i;
        v7.Buffer[4] = i;
        sub_140005660(i, &DestinationString, &v7);
      }
    }
    if ( (__int64 *)qword_140020430 == &qword_140020430 )
      return (unsigned int)-1073741591;
    return v0;
  }
}
