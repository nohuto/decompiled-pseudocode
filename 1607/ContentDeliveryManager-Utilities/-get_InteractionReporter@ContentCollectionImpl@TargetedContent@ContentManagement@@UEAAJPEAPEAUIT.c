/*
 * XREFs of ?get_InteractionReporter@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUITargetedContentInteractionReporter@23@@Z @ 0x180049A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042290 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITarge.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::get_InteractionReporter(
        ContentManagement::TargetedContent::ContentCollectionImpl *this,
        struct ContentManagement::TargetedContent::ITargetedContentInteractionReporter **a2)
{
  int Interface; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                (__int64)this - 40,
                &GUID_111d9cd1_419d_4ade_a083_68f73750c18e,
                a2);
  v3 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)Interface);
  return v3;
}
