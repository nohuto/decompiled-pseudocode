/*
 * XREFs of ?TryGetMatchingEventTokenForInteractionName@TargetedContent@ContentManagement@@YA_NPEBGPEAUIJsonObject@Json@Data@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180048F14
 * Callers:
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall ContentManagement::TargetedContent::TryGetMatchingEventTokenForInteractionName(
        LPCWCH lpString1,
        const unsigned __int16 *a2,
        struct Windows::Data::Json::IJsonObject *a3,
        HSTRING *a4)
{
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  char v12; // si
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  int v17; // eax
  int v18; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v20; // bl
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+50h] [rbp-19h] BYREF
  HSTRING string[2]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v38[32]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  string[1] = (HSTRING)-2LL;
  *(_QWORD *)a3 = 0LL;
  v35 = 0LL;
  v7 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v38, (const WCHAR **)&off_18006EB00);
  v8 = (*(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, *v7, &v35);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v36 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
         v35,
         &GUID_d44662bc_dce3_59a8_9272_4b210f33908b,
         &v36);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 56LL))(v36, &v34);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = 0;
  if ( v34 )
  {
    v12 = 1;
    while ( 1 )
    {
      v33 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, v11, &v33);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_31;
      v15 = v33;
      v32 = 0LL;
      string[0] = 0LL;
      v16 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v38, (const WCHAR **)off_18006EAF0);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, *v16, &v32);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
          (const char *)(unsigned int)v17);
LABEL_31:
        wil::details::in1diag3::_Throw_Hr(
          v14,
          (void *)0x9C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_32;
      }
      v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 64LL))(v32, string);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x85,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
      v20 = CompareStringOrdinal(lpString1, -1, StringRawBuffer, -1, 1) == 2;
      if ( string[0] )
        WindowsDeleteString(string[0]);
      v21 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( v20 )
        break;
      v22 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( ++v11 >= v34 )
        goto LABEL_32;
    }
    v32 = 0LL;
    v23 = v33;
    v24 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v38, (const WCHAR **)off_18006EAE8);
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, *v24, &v32);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
        (const char *)(unsigned int)v25);
      __debugbreak();
    }
    v26 = (*(__int64 (__fastcall **)(__int64, struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v32 + 64LL))(
            v32,
            a3);
    if ( v26 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
        (const char *)(unsigned int)v26);
    v27 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  else
  {
LABEL_32:
    v12 = 0;
  }
  v29 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v12;
}
