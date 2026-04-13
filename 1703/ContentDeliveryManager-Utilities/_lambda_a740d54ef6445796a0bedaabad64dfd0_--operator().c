/*
 * XREFs of _lambda_a740d54ef6445796a0bedaabad64dfd0_::operator() @ 0x180028B14
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_a740d54ef6445796a0bedaabad64dfd0___ @ 0x180032298 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_a740d54ef6445796a0bedaabad64dfd0___.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180022D3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180025B64 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 */

__int64 __fastcall lambda_a740d54ef6445796a0bedaabad64dfd0_::operator()(HSTRING **a1, unsigned int a2)
{
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  CreativeFramework::CreativeEventStore *v6; // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(*a1[2], 0LL);
  v5 = WindowsGetStringRawBuffer(*a1[1], 0LL);
  v6 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**a1, 0LL);
  v7 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v6,
         v5,
         (const unsigned __int16 *)a2,
         (__int64)StringRawBuffer);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = RtlPublishWnfStateData(WNF_SHEL_CREATIVE_EVENT_TRIGGERED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
