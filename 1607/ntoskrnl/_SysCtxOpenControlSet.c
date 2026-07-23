/*
 * XREFs of _SysCtxOpenControlSet @ 0x140579DF4
 * Callers:
 *     _SysCtxOpenMachine @ 0x140579C44 (_SysCtxOpenMachine.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1404E09F0 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxOpenControlSet(__int64 a1, char *a2, void *a3, HANDLE *a4)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v10[4]; // [rsp+40h] [rbp-19h] BYREF
  int v11; // [rsp+50h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-1h] BYREF
  wchar_t pszDest[16]; // [rsp+60h] [rbp+7h] BYREF

  *a4 = 0LL;
  v10[0] = 0;
  Handle = 0LL;
  v7 = RegRtlOpenKeyTransacted(a2, L"CurrentControlSet", 0, 0x2000000u, a4, a3);
  if ( v7 == -1073741772 )
  {
    v7 = RegRtlOpenKeyTransacted(a2, L"Select", 0, 1u, &Handle, a3);
    if ( !v7 )
    {
      LODWORD(v9) = 4;
      v7 = RegRtlQueryValue(Handle, L"Current", &v11, v10, (unsigned int *)&v9);
      if ( !v7 )
      {
        if ( v11 == 4
          && (_DWORD)v9 == 4
          && v10[0] <= 0x3E7
          && RtlStringCchPrintfW(pszDest, 0xEuLL, L"ControlSet%03d") >= 0 )
        {
          v7 = RegRtlOpenKeyTransacted(a2, pszDest, 0, 0x2000000u, a4, a3);
        }
        else
        {
          v7 = -1073741811;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return v7;
}
