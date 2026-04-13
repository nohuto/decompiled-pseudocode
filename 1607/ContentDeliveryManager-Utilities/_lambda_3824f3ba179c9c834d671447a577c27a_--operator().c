/*
 * XREFs of _lambda_3824f3ba179c9c834d671447a577c27a_::operator() @ 0x18001FDE8
 * Callers:
 *     ??$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@YAJPEBGPEAUICreativeEventReportedCache@0@PEAUHSTRING__@@W4CreativeEventType@0@2$$QEAV_lambda_3824f3ba179c9c834d671447a577c27a_@@@Z @ 0x180029BA4 (--$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@Y.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18001E538 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 */

__int64 __fastcall lambda_3824f3ba179c9c834d671447a577c27a_::operator()(HSTRING **a1, unsigned int a2)
{
  HSTRING v3; // rbx
  HSTRING v4; // rsi
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  CreativeFramework::CreativeEventStore *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a1[1];
  v4 = **a1;
  StringRawBuffer = WindowsGetStringRawBuffer(*a1[2], 0LL);
  v6 = WindowsGetStringRawBuffer(v3, 0LL);
  v7 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(v4, 0LL);
  v8 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v7,
         v6,
         (const unsigned __int16 *)a2,
         (__int64)StringRawBuffer);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = RtlPublishWnfStateData(WNF_SHEL_CREATIVE_EVENT_TRIGGERED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
