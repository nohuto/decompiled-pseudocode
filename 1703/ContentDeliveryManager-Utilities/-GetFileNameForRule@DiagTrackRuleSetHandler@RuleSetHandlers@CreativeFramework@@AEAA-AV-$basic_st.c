/*
 * XREFs of ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x180052F8C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Id@CreativeRule@RuleSetHandlers@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180052250 (-Id@CreativeRule@RuleSetHandlers@CreativeFramework@@QEAA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180053608 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  wchar_t *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_DWORD *)(a3 + 64);
  if ( !v4 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  CreativeFramework::RuleSetHandlers::CreativeRule::Id((void **)a3, (__int64)a2);
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = L"_show.xml";
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = L"_dismiss.xml";
    goto LABEL_9;
  }
  if ( v6 == 1 )
  {
    v7 = L"_withdraw.xml";
LABEL_9:
    std::wstring::append(a2, v7);
  }
  return a2;
}
