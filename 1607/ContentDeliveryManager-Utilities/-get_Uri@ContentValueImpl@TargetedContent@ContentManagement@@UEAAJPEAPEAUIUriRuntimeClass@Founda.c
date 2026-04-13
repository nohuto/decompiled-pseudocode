/*
 * XREFs of ?get_Uri@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x18004B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_Uri(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        struct Windows::Foundation::IUriRuntimeClass **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != 1 )
  {
    v2 = -2147483634;
    v3 = 583LL;
    v4 = 2147483662LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)v4);
    return v2;
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Foundation::IUriRuntimeClass **))this + 7))(
         *((_QWORD *)this + 7),
         &GUID_9e365e57_48b2_4160_956f_c7385120bbfc,
         a2);
  v2 = v6;
  if ( v6 < 0 )
  {
    v4 = (unsigned int)v6;
    v3 = 584LL;
    goto LABEL_3;
  }
  return 0LL;
}
