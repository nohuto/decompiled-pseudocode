/*
 * XREFs of sub_18002032C @ 0x18002032C
 * Callers:
 *     sub_180020420 @ 0x180020420 (sub_180020420.c)
 * Callees:
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

void sub_18002032C()
{
  HANDLE CurrentProcess; // rbx
  DWORD dwSize[4]; // [rsp+30h] [rbp-448h] BYREF
  WCHAR Dst[264]; // [rsp+40h] [rbp-438h] BYREF
  WCHAR ExeName[264]; // [rsp+250h] [rbp-228h] BYREF

  if ( !byte_18003AD50 )
  {
    dwSize[0] = 260;
    CurrentProcess = GetCurrentProcess();
    if ( QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, dwSize) )
    {
      if ( ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\RuntimeBroker.exe", Dst, 0x104u) )
      {
        if ( CompareStringOrdinal(ExeName, -1, Dst, -1, 1) == 2 )
          dword_18003A0E8 = GetProcessId(CurrentProcess);
      }
    }
    else
    {
      GetLastError();
    }
    byte_18003AD50 = 1;
  }
}
