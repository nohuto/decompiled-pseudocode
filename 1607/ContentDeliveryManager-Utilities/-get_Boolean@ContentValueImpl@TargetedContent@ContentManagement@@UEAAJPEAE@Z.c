/*
 * XREFs of ?get_Boolean@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAE@Z @ 0x18004B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_Boolean(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        unsigned __int8 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) == 3 )
  {
    *a2 = *((_BYTE *)this + 48);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x8000000ELL);
    return 2147483662LL;
  }
}
