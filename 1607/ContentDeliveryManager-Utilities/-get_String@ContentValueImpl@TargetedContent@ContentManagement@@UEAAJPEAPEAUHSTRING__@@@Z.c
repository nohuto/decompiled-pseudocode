/*
 * XREFs of ?get_String@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004B780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_String(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        HSTRING *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) )
  {
    v2 = -2147483634;
    v3 = 576LL;
    v4 = 2147483662LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)v4);
    return v2;
  }
  v6 = WindowsDuplicateString(*((HSTRING *)this + 4), a2);
  v2 = v6;
  if ( v6 < 0 )
  {
    v4 = (unsigned int)v6;
    v3 = 577LL;
    goto LABEL_3;
  }
  return 0LL;
}
