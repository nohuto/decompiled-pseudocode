/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180005B08
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800089F4 (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18000923C (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(TaskbarLayoutPolicyManager *this)
{
  BSTR v2; // rax
  TaskbarLayoutPolicyManager *bstr; // rax
  TaskbarLayoutPolicyManager *v4; // r14
  OLECHAR **v5; // rsi
  OLECHAR *v6; // r12
  OLECHAR *v7; // r15
  DWORD LastError; // ebx
  TaskbarLayoutPolicyManager *v9; // rax
  TaskbarLayoutPolicyManager *v10; // r14
  OLECHAR **v11; // rsi
  OLECHAR *v12; // r12
  OLECHAR *v13; // r15
  DWORD v14; // ebx
  TaskbarLayoutPolicyManager *v15; // rax
  TaskbarLayoutPolicyManager *v16; // r14
  OLECHAR **v17; // rsi
  OLECHAR *v18; // r12
  OLECHAR *v19; // r15
  DWORD v20; // ebx
  OLECHAR **v21; // rax
  const char *v22; // r9
  OLECHAR **v23; // rsi
  OLECHAR **v24; // rdi
  OLECHAR *v25; // r15
  OLECHAR *v26; // r14
  DWORD v27; // ebx
  VARIANTARG pvargSrc; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BSTR bstrString; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v2 = SysAllocString(
           L"xmlns:d='http://schemas.microsoft.com/Start/2014/FullDefaultLayout' xmlns:l='http://schemas.microsoft.com/Sta"
            "rt/2014/LayoutModification' xmlns:t='http://schemas.microsoft.com/Start/2014/TaskbarLayout'");
    if ( !v2 )
      _com_issue_error();
    pvargSrc.vt = 8;
    pvargSrc.llVal = (LONGLONG)v2;
    if ( VariantCopy((VARIANTARG *)((char *)this + 64), &pvargSrc) < 0 )
      _com_issue_error();
    if ( VariantClear(&pvargSrc) < 0 )
      _com_issue_error();
    bstr = (TaskbarLayoutPolicyManager *)wil::make_bstr(&bstrString, L"SelectionNamespaces");
    v4 = bstr;
    v5 = (OLECHAR **)((char *)this + 88);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 88) != bstr )
    {
      v6 = *(OLECHAR **)bstr;
      v7 = *v5;
      if ( *v5 )
      {
        LastError = GetLastError();
        SysFreeString(v7);
        SetLastError(LastError);
      }
      *v5 = v6;
      *(_QWORD *)v4 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v9 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                         &bstrString,
                                         L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
    v10 = v9;
    v11 = (OLECHAR **)((char *)this + 96);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 96) != v9 )
    {
      v12 = *(OLECHAR **)v9;
      v13 = *v11;
      if ( *v11 )
      {
        v14 = GetLastError();
        SysFreeString(v13);
        SetLastError(v14);
      }
      *v11 = v12;
      *(_QWORD *)v10 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v15 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                          &bstrString,
                                          L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
    v16 = v15;
    v17 = (OLECHAR **)((char *)this + 104);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 104) != v15 )
    {
      v18 = *(OLECHAR **)v15;
      v19 = *v17;
      if ( *v17 )
      {
        v20 = GetLastError();
        SysFreeString(v19);
        SetLastError(v20);
      }
      *v17 = v18;
      *(_QWORD *)v16 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v21 = (OLECHAR **)wil::make_bstr(&bstrString, L"PinListPlacement");
    v23 = v21;
    v24 = (OLECHAR **)((char *)this + 112);
    if ( v24 != v21 )
    {
      v25 = *v21;
      v26 = *v24;
      if ( *v24 )
      {
        v27 = GetLastError();
        SysFreeString(v26);
        SetLastError(v27);
      }
      *v24 = v25;
      *v23 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    LODWORD(bstrString) = wil::details::in1diag3::Return_CaughtException(
                            retaddr,
                            (void *)0x61,
                            (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
                            v22);
    return (unsigned int)bstrString;
  }
  return 0LL;
}
