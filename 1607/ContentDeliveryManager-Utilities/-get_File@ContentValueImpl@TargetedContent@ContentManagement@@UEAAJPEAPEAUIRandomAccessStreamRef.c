/*
 * XREFs of ?get_File@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z @ 0x18004B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_File(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        struct Windows::Storage::Streams::IRandomAccessStreamReference **a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) == 4 )
  {
    (***((void (__fastcall ****)(_QWORD, GUID *, struct Windows::Storage::Streams::IRandomAccessStreamReference **))this
       + 7))(
      *((_QWORD *)this + 7),
      &GUID_33ee3134_1dd6_4e3a_8067_d1c162e8642b,
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x8000000ELL);
    return 2147483662LL;
  }
}
