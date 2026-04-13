/*
 * XREFs of ?get_Number@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAN@Z @ 0x18004B850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_Number(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        double *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) == 2 )
  {
    *a2 = *((double *)this + 5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x8000000ELL);
    return 2147483662LL;
  }
}
