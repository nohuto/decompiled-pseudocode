/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0052694
 * Callers:
 *     ?CoreMsgInitialize@@YAJXZ @ 0x1C005261C (-CoreMsgInitialize@@YAJXZ.c)
 * Callees:
 *     CoreUICallComputeMaximumMessageSize @ 0x1C0079A48 (CoreUICallComputeMaximumMessageSize.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C00F8498 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void CoreMessagingK::RegistrarClient::Initialize(void)
{
  int v0; // eax
  int v1; // eax
  int v2; // [rsp+20h] [rbp-28h]
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  void *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = &CoreMessagingK::SendHost::s_Vtbl;
  v0 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v7,
         &IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x1Eu,
         v2,
         v4,
         &v6);
  if ( v0 )
    CoreMessagingK::Runtime::BugCheck(10LL, v0, 0LL);
  if ( v6 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(11LL, v6, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = v6;
  v1 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v7,
         &IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x1Fu,
         v3,
         v5,
         &v6);
  if ( v1 )
    CoreMessagingK::Runtime::BugCheck(12LL, v1, 0LL);
  if ( v6 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(13LL, v6, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = v6;
}
