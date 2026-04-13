/*
 * XREFs of ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18000AD18
 * Callers:
 *     ?put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z @ 0x18000C640 (-put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180013AFC (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::EnableContextualSuggestions(ContentManagement *this)
{
  char v1; // di
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  v1 = (char)this;
  v10 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v10 = 0LL;
  v3 = RoActivateInstance(string, v12);
  if ( v3 < 0
    || (*(_QWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12[0])(
                v12[0],
                &GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4,
                &v10),
         (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]),
         v4 = v10)
      : (v4 = v12[0], v10 = v12[0]),
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x47,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_18;
  }
  v11 = 0LL;
  LOBYTE(v2) = v1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, v2, &v11);
  v3 = v5;
  if ( v5 < 0 )
  {
    v6 = 73LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_15;
  }
  v5 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(v11);
  v3 = v5;
  if ( v5 < 0 )
  {
    v6 = 74LL;
    goto LABEL_13;
  }
  v3 = 0;
LABEL_15:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_18:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v3;
}
