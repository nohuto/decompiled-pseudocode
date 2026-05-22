/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001DD34
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18001DF74 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this)
{
  int Device3; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  _QWORD *v10; // r14
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  char v13; // [rsp+50h] [rbp-28h]
  unsigned int v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  Device3 = InputSecurityDescriptor::QueryDescriptor(&v12, 8LL, L"System\\Input\\CursorBrokerPort");
  v4 = Device3;
  if ( Device3 >= 0 )
  {
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, (char *)this + 48);
    v4 = Device3;
    if ( Device3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v5 = 64;
      goto LABEL_4;
    }
    Device3 = CoreUICreate((char *)this + 1272);
    v4 = Device3;
    if ( Device3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v5 = 66;
      goto LABEL_4;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(**((_QWORD **)this + 159) + 48LL))(
           *((_QWORD *)this + 159),
           v12,
           L"System\\Input\\CursorBrokerPort",
           (char *)this + 1296);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_17;
      v9 = 71;
      goto LABEL_16;
    }
    v10 = (_QWORD *)((char *)this + 1280);
    Device3 = CoreUIFactoryCreate((char *)this + 1280);
    v4 = Device3;
    if ( Device3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v5 = 73;
      goto LABEL_4;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v10 + 24LL))(
           *v10,
           &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
           &v14);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v10 + 32LL))(
             *v10,
             (char *)this + 24,
             0LL,
             v14,
             L"System\\Input\\CursorBrokerEndpoint",
             *((_QWORD *)this + 162),
             (char *)this + 1288);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *((_DWORD *)this + 350) = 3;
        goto LABEL_30;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 85;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 77;
LABEL_16:
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
    }
LABEL_17:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 61;
LABEL_4:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v5, Device3);
  }
LABEL_30:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v12);
  return v4;
}
