/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180049B48
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049D8C (-GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180006B68 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v9; // ebx
  NTSTATUS v11; // ebx
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  LPCVOID lpBaseAddress[5]; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[52]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int16 v20; // [rsp+98h] [rbp-68h]
  LPCVOID v21; // [rsp+A0h] [rbp-60h]
  char Buffer; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v23[31]; // [rsp+471h] [rbp+371h] BYREF
  LPCVOID v24; // [rsp+490h] [rbp+390h]

  Buffer = 0;
  memset_0(v23, 0, 0x79FuLL);
  v18 = 0;
  memset_0(v19, 0, 0x40CuLL);
  ProcessInformation = 0;
  memset_0(lpBaseAddress, 0, sizeof(lpBaseAddress));
  if ( !a3 || !a4 )
    return 2147500035LL;
  *a3 = 0;
  v7 = OpenProcess(0x1010u, 0, dwProcessId);
  if ( v7 )
    goto LABEL_9;
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError == 5 )
    return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( v9 >= 0 )
  {
LABEL_9:
    v11 = NtQueryInformationProcess(v7, ProcessBasicInformation, &ProcessInformation, 0x30u, 0LL);
    if ( v11 >= 0 )
      v9 = 0;
    else
      v9 = v11 | 0x10000000;
    if ( v9 >= 0 )
    {
      if ( ReadProcessMemory(v7, lpBaseAddress[0], &Buffer, 0x7A0uLL, 0LL) )
      {
        v9 = 0;
      }
      else
      {
        v12 = GetLastError();
        v9 = v12;
        if ( v12 > 0 )
          v9 = (unsigned __int16)v12 | 0x80070000;
      }
      if ( v9 >= 0 )
      {
        if ( ReadProcessMemory(v7, v24, &v18, 0x410uLL, 0LL) )
        {
          v9 = 0;
        }
        else
        {
          v13 = GetLastError();
          v9 = v13;
          if ( v13 > 0 )
            v9 = (unsigned __int16)v13 | 0x80070000;
        }
        if ( v9 >= 0 && v21 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v20 < v14 )
          {
            if ( ReadProcessMemory(v7, v21, a3, v14, 0LL) )
            {
              v9 = 0;
            }
            else
            {
              v15 = GetLastError();
              v9 = v15;
              if ( v15 > 0 )
                v9 = (unsigned __int16)v15 | 0x80070000;
            }
          }
          else
          {
            v9 = -2147024774;
          }
          *(_DWORD *)a4 = (v20 >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v9;
}
