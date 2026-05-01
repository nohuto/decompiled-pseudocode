/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x18000A080
 * Callers:
 *     ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B3A8 (-TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18000923C (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

__int64 __fastcall TaskbarLayoutParser::RuntimeClassInitialize(TaskbarLayoutParser *this)
{
  TaskbarLayoutParser *bstr; // rax
  TaskbarLayoutParser *v3; // rsi
  OLECHAR **v4; // rdi
  OLECHAR *v5; // r12
  OLECHAR *v6; // r15
  DWORD LastError; // ebx
  TaskbarLayoutParser *v8; // rax
  TaskbarLayoutParser *v9; // rsi
  OLECHAR **v10; // rdi
  OLECHAR *v11; // r12
  OLECHAR *v12; // r15
  DWORD v13; // ebx
  TaskbarLayoutParser *v14; // rax
  const char *v15; // r9
  TaskbarLayoutParser *v16; // rsi
  OLECHAR **v17; // rdi
  OLECHAR *v18; // r15
  OLECHAR *v19; // r14
  DWORD v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    bstr = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"AppUserModelID");
    v3 = bstr;
    v4 = (OLECHAR **)((char *)this + 16);
    if ( (TaskbarLayoutParser *)((char *)this + 16) != bstr )
    {
      v5 = *(OLECHAR **)bstr;
      v6 = *v4;
      if ( *v4 )
      {
        LastError = GetLastError();
        SysFreeString(v6);
        SetLastError(LastError);
      }
      *v4 = v5;
      *(_QWORD *)v3 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v8 = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"DesktopApplicationID");
    v9 = v8;
    v10 = (OLECHAR **)((char *)this + 24);
    if ( (TaskbarLayoutParser *)((char *)this + 24) != v8 )
    {
      v11 = *(OLECHAR **)v8;
      v12 = *v10;
      if ( *v10 )
      {
        v13 = GetLastError();
        SysFreeString(v12);
        SetLastError(v13);
      }
      *v10 = v11;
      *(_QWORD *)v9 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v14 = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"DesktopApplicationLinkPath");
    v16 = v14;
    v17 = (OLECHAR **)((char *)this + 32);
    if ( (TaskbarLayoutParser *)((char *)this + 32) != v14 )
    {
      v18 = *(OLECHAR **)v14;
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
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x52,
                           (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                           v15);
  }
  return 0LL;
}
