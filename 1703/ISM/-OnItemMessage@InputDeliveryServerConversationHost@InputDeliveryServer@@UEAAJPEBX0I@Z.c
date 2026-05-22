/*
 * XREFs of ?OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJPEBX0I@Z @ 0x18006B720
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServerConversationHost::OnItemMessage(
        InputDeliveryServer **this,
        const void *a2,
        const struct InputDeliveryServerMessage *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a4 != 64 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC3,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\InputDeliveryServer.h",
      a4);
    JUMPOUT(0x18006B750LL);
  }
  return InputDeliveryServer::OnAppThreadMessage(this[2], a3);
}
