/*
 * XREFs of ?get_InteractionReporter@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUITargetedContentInteractionReporter@23@@Z @ 0x18004A620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C3E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_18004C3E0.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::get_InteractionReporter(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        struct ContentManagement::TargetedContent::ITargetedContentInteractionReporter **a2)
{
  int Interface; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                (ContentManagement::TargetedContent::ContentItemImpl *)((char *)this - 40),
                &GUID_111d9cd1_419d_4ade_a083_68f73750c18e,
                (void **)a2);
  v3 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)Interface);
  return v3;
}
