/*
 * XREFs of ??$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@YAJPEBGPEAUICreativeEventReportedCache@0@PEAUHSTRING__@@W4CreativeEventType@0@2$$QEAV_lambda_3824f3ba179c9c834d671447a577c27a_@@@Z @ 0x180029BA4
 * Callers:
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::operator() @ 0x18001F970 (_lambda_d1d6df3afd909720884b15ba4832b47d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _lambda_3824f3ba179c9c834d671447a577c27a_::operator() @ 0x18001FDE8 (_lambda_3824f3ba179c9c834d671447a577c27a_--operator().c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18002B8B4 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_ @ 0x18002BEC0 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ExecuteHandlerByEventPolicy<_lambda_3824f3ba179c9c834d671447a577c27a_>(
        LPCWCH lpString1,
        __int64 a2,
        HSTRING a3,
        unsigned int a4,
        __int64 a5,
        HSTRING **a6)
{
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  __int64 v15; // rbx
  WCHAR *StringRawBuffer; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  _BYTE v20[8]; // [rsp+30h] [rbp-28h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v23; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v23) = 0;
  if ( a4 <= 0xB )
  {
    v10 = 2053;
    if ( _bittest(&v10, a4) )
    {
      if ( !a2 )
        goto LABEL_12;
      v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 48LL))(
              a2,
              a3,
              a4,
              a5,
              v20);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v11);
      if ( !v12 && v20[0] )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, int *))(*(_QWORD *)a2 + 64LL))(
                a2,
                a3,
                a4,
                a5,
                &v23);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFA,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v13);
        if ( !(_BYTE)v23 )
          goto LABEL_11;
      }
      else
      {
LABEL_12:
        if ( a4 )
        {
          if ( a4 == 2 )
            anonymous_namespace_::PlacementHealth::HandleEvent_9_(lpString1);
        }
        else
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          v15 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
          StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
          anonymous_namespace_::GetImpressionEventExpirationTime(lpString1, StringRawBuffer, v15);
        }
      }
    }
  }
  v17 = lambda_3824f3ba179c9c834d671447a577c27a_::operator()(a6, a4);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( a2
      && (v17 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3, a4, a5),
          v18 = v17,
          v17 < 0) )
    {
      v19 = 267LL;
    }
    else
    {
      if ( !(_BYTE)v23 || (v17 = lambda_3824f3ba179c9c834d671447a577c27a_::operator()(a6, 0xCu), v18 = v17, v17 >= 0) )
      {
LABEL_11:
        anonymous_namespace_::PlacementHealth::HandleEvent_1_(lpString1);
        return 0LL;
      }
      v19 = 273LL;
    }
  }
  else
  {
    v19 = 264LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
