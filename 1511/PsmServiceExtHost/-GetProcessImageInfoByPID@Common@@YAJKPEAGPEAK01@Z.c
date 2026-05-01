/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180006B68
 * Callers:
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180006AB0 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049A3C (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180049B48 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  signed int LastError; // edi
  int v8; // r14d
  int v9; // esi
  HANDLE v11; // rbx
  wchar_t *v12; // r11
  __int64 v13; // r11
  bool v15; // sf
  signed int v16; // eax
  unsigned __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  DWORD dwSize; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 *v19; // [rsp+30h] [rbp-D0h]
  WCHAR ExeName; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[2078]; // [rsp+42h] [rbp-BEh] BYREF

  v19 = a3;
  ExeName = 0;
  LastError = 0;
  v8 = 0;
  v9 = 0;
  memset_0(v21, 0, sizeof(v21));
  dwSize = 1040;
  v11 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v11 )
    goto LABEL_27;
  LastError = GetLastError();
  v15 = LastError < 0;
  if ( LastError > 0 )
  {
    LastError = (unsigned __int16)LastError | 0x80070000;
    v15 = LastError < 0;
  }
  if ( !v15 )
  {
LABEL_27:
    if ( !QueryFullProcessImageNameW(v11, 0, &ExeName, &dwSize) )
    {
      v16 = GetLastError();
      LastError = v16;
      if ( v16 > 0 )
        LastError = (unsigned __int16)v16 | 0x80070000;
    }
    if ( LastError >= 0 )
    {
      v12 = wcsrchr(&ExeName, 0x5Cu);
      if ( v12 )
      {
        *v12 = 0;
        if ( a2 )
        {
          v8 = StringCchLengthW(v12 + 1, 0x7FFFFFFFuLL, &v17);
          if ( v8 >= 0 )
          {
            v8 = StringCchCopyW(a2, *(unsigned int *)v19, (const unsigned __int16 *)(v13 + 2));
            *(_DWORD *)v19 = v17 + 1;
          }
        }
        if ( a4 )
        {
          v9 = StringCchLengthW(&ExeName, 0x7FFFFFFFuLL, &v17);
          if ( v9 >= 0 )
          {
            v9 = StringCchCopyW(a4, *(unsigned int *)a5, &ExeName);
            *(_DWORD *)a5 = v17 + 1;
          }
        }
      }
      else
      {
        LastError = -2147418113;
      }
    }
    if ( v11 )
      CloseHandle(v11);
    if ( LastError >= 0 )
    {
      if ( v8 < 0 )
        return (unsigned int)v8;
      return (unsigned int)v9;
    }
  }
  return (unsigned int)LastError;
}
