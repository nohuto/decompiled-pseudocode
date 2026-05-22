/*
 * XREFs of ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x180025950
 * Callers:
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x180025C08 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MobileCursorBroker::Initialize(MobileCursorBroker *this)
{
  HMODULE LibraryA; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  int CursorManager; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+50h] [rbp-28h]
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h]

  v20 = 0LL;
  v21 = 0;
  v23 = 0LL;
  v22 = 0;
  LibraryA = LoadLibraryA("ShellChrome.dll");
  *((_QWORD *)this + 6) = LibraryA;
  if ( !LibraryA )
  {
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 57, 5);
    goto LABEL_31;
  }
  CursorManager = CreateCursorManager((char *)this + 8, (char *)this + 88);
  v4 = CursorManager;
  if ( CursorManager < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 61, CursorManager);
    goto LABEL_31;
  }
  *((_QWORD *)this + 8) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorPosition");
  *((_QWORD *)this + 7) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorVisible");
  *((_QWORD *)this + 9) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorType");
  *((_QWORD *)this + 10) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorOrientation");
  v7 = CoreUICreate((char *)this + 1312);
  v4 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 72, v7);
    goto LABEL_31;
  }
  v9 = InputSecurityDescriptor::QueryDescriptor(&v20, 8LL, L"System\\Input\\CursorBrokerPort");
  v4 = v9;
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 76, v9);
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(**((_QWORD **)this + 164) + 48LL))(
          *((_QWORD *)this + 164),
          v20,
          L"System\\Input\\CursorBrokerPort",
          (char *)this + 1336);
  v4 = v11;
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 81, v11);
    goto LABEL_31;
  }
  v13 = (_QWORD *)((char *)this + 1320);
  v14 = CoreUIFactoryCreate((char *)this + 1320);
  v4 = v14;
  if ( v14 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v13 + 24LL))(
            *v13,
            &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
            &v22);
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v13 + 32LL))(
              *v13,
              (char *)this + 24,
              0LL,
              v22,
              L"System\\Input\\CursorBrokerEndpoint",
              *((_QWORD *)this + 167),
              (char *)this + 1328);
      v4 = v16;
      if ( v16 >= 0 )
      {
        *((_DWORD *)this + 336) = 2;
        goto LABEL_31;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_24:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v18 = 95;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v18 = 87;
    }
    Template_qqq(v17, &MinInput_Warning_CheckResult, 0, v18, v16);
    goto LABEL_24;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 83, v14);
LABEL_31:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
  return v4;
}
