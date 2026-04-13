/*
 * XREFs of ?ProcessCreativeEvent@TargetedContent@ContentManagement@@YAXW4CreativeEventType@2@PEAUHSTRING__@@11@Z @ 0x180048D24
 * Callers:
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18000E1F0 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ContentManagement::TargetedContent::ProcessCreativeEvent(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HRESULT v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edx
  char *v13; // r8
  int v14; // eax
  __int64 (__fastcall ***v15)(__int64, GUID *, __int64); // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v18)(__int64, GUID *, __int64); // [rsp+58h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  HSTRING string; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v19[1] = -2LL;
  v17 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  v17 = 0LL;
  v9 = RoActivateInstance(string, v19);
  if ( v9 >= 0 )
  {
    if ( *(_QWORD *)&GUID_93693da2_ede6_456e_a82d_c215a10d97ba.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_93693da2_ede6_456e_a82d_c215a10d97ba.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v10 = v19[0];
      v17 = v19[0];
      goto LABEL_9;
    }
    v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v19[0])(
           v19[0],
           &GUID_93693da2_ede6_456e_a82d_c215a10d97ba,
           &v17);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  }
  v10 = v17;
LABEL_9:
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v9);
  v18 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, __int64 (__fastcall ****)(__int64, GUID *, __int64)))(*(_QWORD *)v10 + 48LL))(
          v10,
          a1,
          a2,
          a3,
          0LL,
          a4,
          0LL,
          0LL,
          &v18);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v14 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
          v18,
          v12,
          v13);
  if ( v14 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v14);
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64)))(*v15)[2])(v15);
  }
  v16 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
