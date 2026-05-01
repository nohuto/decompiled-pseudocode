/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180018F10
 * Callers:
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180019120 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044848 (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180044954 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  signed int v6; // edi
  int v7; // esi
  int v8; // r14d
  HANDLE v11; // rax
  int v12; // ebx
  void *v13; // r15
  wchar_t *v14; // rax
  const unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rdx
  signed int LastError; // eax
  signed int v20; // eax
  unsigned __int16 *v21; // rbx
  unsigned __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  DWORD dwSize; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 *v24; // [rsp+30h] [rbp-D0h]
  WCHAR ExeName; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[2078]; // [rsp+42h] [rbp-BEh] BYREF

  v22 = (unsigned __int64)a3;
  v6 = 0;
  ExeName = 0;
  v7 = 0;
  v24 = a5;
  v8 = 0;
  memset_0(v26, 0, sizeof(v26));
  dwSize = 1040;
  v11 = OpenProcess(0x1000u, 0, dwProcessId);
  v12 = 0;
  v13 = v11;
  if ( v11 )
    goto LABEL_35;
  LastError = GetLastError();
  v6 = LastError;
  if ( LastError > 0 )
    v6 = (unsigned __int16)LastError | 0x80070000;
  if ( v6 >= 0 )
  {
LABEL_35:
    if ( !QueryFullProcessImageNameW(v13, 0, &ExeName, &dwSize) )
    {
      v20 = GetLastError();
      v6 = v20;
      if ( v20 > 0 )
        v6 = (unsigned __int16)v20 | 0x80070000;
    }
    if ( v6 < 0 )
      goto LABEL_15;
    v14 = wcsrchr(&ExeName, 0x5Cu);
    if ( !v14 )
    {
      v6 = -2147418113;
LABEL_15:
      if ( v13 )
        CloseHandle(v13);
      if ( v6 >= 0 )
      {
        if ( v7 < 0 )
          return (unsigned int)v7;
        return (unsigned int)v8;
      }
      return (unsigned int)v6;
    }
    *v14 = 0;
    v15 = v14 + 1;
    if ( !a2 )
    {
LABEL_14:
      if ( a4 )
      {
        v8 = StringCchLengthW(&ExeName, 0x7FFFFFFFuLL, &v22);
        if ( v8 >= 0 )
        {
          v21 = v24;
          v8 = StringCchCopyW(a4, *(unsigned int *)v24, &ExeName);
          *(_DWORD *)v21 = v22 + 1;
        }
      }
      goto LABEL_15;
    }
    if ( v15 )
    {
      v16 = 0x7FFFFFFFLL;
      v17 = v15;
      do
      {
        if ( !*v17 )
          break;
        ++v17;
        --v16;
      }
      while ( v16 );
      if ( v16 )
      {
        v12 = 0x7FFFFFFF - v16;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = (int)v24;
    }
    v7 = -2147024809;
LABEL_12:
    if ( v7 >= 0 )
    {
      v7 = StringCchCopyW(a2, *(unsigned int *)v22, v15);
      *(_DWORD *)v22 = v12 + 1;
    }
    goto LABEL_14;
  }
  return (unsigned int)v6;
}
