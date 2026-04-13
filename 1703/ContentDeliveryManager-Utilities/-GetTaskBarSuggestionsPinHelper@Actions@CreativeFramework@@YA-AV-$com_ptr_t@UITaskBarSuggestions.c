/*
 * XREFs of ?GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UITaskBarSuggestionsPinHelper@TaskBarSuggestions@UI@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800603C4
 * Callers:
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x180060498 (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::GetTaskBarSuggestionsPinHelper(_QWORD *a1)
{
  HRESULT v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF

  ppv = 0LL;
  v2 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  *a1 = 0LL;
  v3 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, _QWORD *))(*(_QWORD *)ppv + 96LL))(
         ppv,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_8fe68768_eeb4_415e_b678_ddaf57ffab61,
         a1);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v3);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return a1;
}
