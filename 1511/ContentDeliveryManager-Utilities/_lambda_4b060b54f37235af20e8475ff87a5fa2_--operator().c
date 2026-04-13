/*
 * XREFs of _lambda_4b060b54f37235af20e8475ff87a5fa2_::operator() @ 0x18000EF94
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000256C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000839C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18000D174 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 */

__int64 __fastcall lambda_4b060b54f37235af20e8475ff87a5fa2_::operator()(HSTRING **a1, unsigned int a2)
{
  HSTRING v3; // rbx
  HSTRING v4; // rsi
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  CreativeFramework::CreativeEventStore *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a1[1];
  v4 = **a1;
  StringRawBuffer = WindowsGetStringRawBuffer(*a1[2], 0LL);
  v6 = WindowsGetStringRawBuffer(v3, 0LL);
  v7 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(v4, 0LL);
  v8 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v7,
         v6,
         (unsigned __int16 **)a2,
         (__int64)StringRawBuffer);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = RtlPublishWnfStateData(WNF_SHEL_CREATIVE_EVENT_TRIGGERED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, 336LL, v12, (const char *)(unsigned int)v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      336LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
