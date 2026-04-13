/*
 * XREFs of ?get_Image@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUITargetedContentImage@23@@Z @ 0x18004B940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_Image(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        struct ContentManagement::TargetedContent::ITargetedContentImage **a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) == 5 )
  {
    (***((void (__fastcall ****)(_QWORD, GUID *, struct ContentManagement::TargetedContent::ITargetedContentImage **))this
       + 7))(
      *((_QWORD *)this + 7),
      &GUID_9e70de81_066b_494d_b0da_f90a90bf8266,
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x263,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x8000000ELL);
    return 2147483662LL;
  }
}
