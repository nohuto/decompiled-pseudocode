/*
 * XREFs of ?GenerateKernelBugCheckEx@@YAJW4_CRASHER_EXCEPTION_CODE@@KKKKPEBG1@Z @ 0x18003C37C
 * Callers:
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z @ 0x18003D328 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 GenerateKernelBugCheckEx()
{
  HANDLE FileW; // rax
  void *v1; // rdi
  signed int LastError; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  int InBuffer; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Destination[256]; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t v8[256]; // [rsp+254h] [rbp+154h] BYREF
  wchar_t v9[258]; // [rsp+454h] [rbp+354h] BYREF
  __int64 v10; // [rsp+658h] [rbp+558h]
  __int64 v11; // [rsp+660h] [rbp+560h]
  __int64 v12; // [rsp+668h] [rbp+568h]
  __int64 v13; // [rsp+670h] [rbp+570h]
  __int64 v14; // [rsp+678h] [rbp+578h]
  wchar_t Drive[8]; // [rsp+680h] [rbp+580h] BYREF
  WCHAR Filename[2]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v17[524]; // [rsp+694h] [rbp+594h] BYREF
  wchar_t v18[256]; // [rsp+8A0h] [rbp+7A0h] BYREF
  wchar_t Ext[256]; // [rsp+AA0h] [rbp+9A0h] BYREF
  wchar_t Dir[256]; // [rsp+CA0h] [rbp+BA0h] BYREF

  *(_DWORD *)Filename = 0;
  memset_0(v17, 0, 0x204uLL);
  GetModuleFileNameW(0LL, Filename, 0x104u);
  _wsplitpath_s(Filename, Drive, 3uLL, Dir, 0x100uLL, v18, 0x100uLL, Ext, 0x100uLL);
  swprintf_s(Filename, 0x104uLL, L"%s%s", v18, Ext);
  InBuffer = 1584;
  wcsncpy_s(Destination, 0x100uLL, L"RmpMemoryMonitorRebootIfAble", 0xFFFFFFFFFFFFFFFFuLL);
  wcsncpy_s(v8, 0x100uLL, Filename, 0xFFFFFFFFFFFFFFFFuLL);
  wcsncpy_s(v9, 0x100uLL, L"OutOfMemory", 0xFFFFFFFFFFFFFFFFuLL);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v10 = 268496903LL;
  FileW = CreateFileW(L"\\\\.\\SAVER", 0xC0000000, 0, 0LL, 3u, 0, 0LL);
  v1 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
  }
  else
  {
    if ( DeviceIoControl(FileW, 0xCFC42004, &InBuffer, 0x630u, 0LL, 0, 0LL, 0LL) )
    {
      v3 = -2147467259;
    }
    else
    {
      v4 = GetLastError();
      v3 = v4;
      if ( v4 > 0 )
        v3 = (unsigned __int16)v4 | 0x80070000;
    }
    CloseHandle(v1);
  }
  return v3;
}
