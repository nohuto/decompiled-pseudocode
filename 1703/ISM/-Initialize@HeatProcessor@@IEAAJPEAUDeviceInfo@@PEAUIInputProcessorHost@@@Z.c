/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003B5A0
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003B7E0 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z @ 0x18003BA8C (-GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HMODULE LibraryW; // rax
  HMODULE v12; // r15
  FARPROC ProcAddress; // rax
  int v14; // eax
  __int64 v15; // rcx
  signed int v16; // ebx
  signed int LastError; // eax
  int v18; // eax
  __int64 v19; // rcx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = malloc(0x20uLL);
  v8 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x20uLL);
    v8[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 4) = 1;
    *v8 = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
    v8[1] = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
    v8[3] = a3;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 34, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 56, 14);
    }
    return 0LL;
  }
  (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *((_QWORD *)this + 8) = v8;
  LibraryW = LoadLibraryW(L"HeatCore.dll");
  v12 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "InitializeHeatFramework");
    v14 = ((__int64 (__fastcall *)(_QWORD, char *))ProcAddress)(*((_QWORD *)this + 8), (char *)this + 56);
    v16 = v14;
    if ( v14 >= 0 )
    {
      *((_QWORD *)this + 6) = v12;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 261, v14);
    }
  }
  else
  {
    LastError = GetLastError();
    v16 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v16 = LastError;
    if ( v16 >= 0 )
      goto LABEL_23;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 268, v16);
  }
  if ( v16 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 60, v16);
    return 0LL;
  }
LABEL_23:
  if ( !a2 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( *((_QWORD *)this + 7) )
  {
    HeatProcessor::GetHeatDeviceInfo(this, a2, (struct HeatDeviceInfo *)v21);
    v18 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v21);
    if ( v18 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 160, v18);
  }
  return 0LL;
}
