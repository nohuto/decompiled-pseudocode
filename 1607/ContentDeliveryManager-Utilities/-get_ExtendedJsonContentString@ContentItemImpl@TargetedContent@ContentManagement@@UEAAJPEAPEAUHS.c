/*
 * XREFs of ?get_ExtendedJsonContentString@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::get_ExtendedJsonContentString(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        HSTRING *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HRESULT v8; // eax
  HSTRING v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( *((_QWORD *)this + 8) )
  {
    string = 0LL;
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))this + 8))(
           *((_QWORD *)this + 8),
           &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e,
           &string);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 375LL;
      goto LABEL_6;
    }
    v3 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)string + 56LL))(string, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 376LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
        (const char *)(unsigned int)v3);
      v6 = string;
      if ( string )
      {
        string = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v4;
    }
    v7 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0LL;
  }
  v8 = WindowsCreateString(&sourceString, 0, &string);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v9 = string;
    WindowsDeleteString(0LL);
    *a2 = v9;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17E,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
    (const char *)(unsigned int)v8);
  return v4;
}
