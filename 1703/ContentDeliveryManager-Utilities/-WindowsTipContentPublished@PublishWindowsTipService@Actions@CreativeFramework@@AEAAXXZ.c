/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x180064C78
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x180064C70 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180057924 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _WORD *v5; // rcx
  int v6; // r10d
  signed __int64 v7; // rdx
  __int16 v8; // ax
  char *v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // r9
  signed __int64 v12; // rdx
  __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rbx
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER v21; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v22[512]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v23[512]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v20[1] = (const WCHAR *)-2LL;
  v20[0] = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(v22, 0, 0x400uLL);
  v2 = (char *)this + 8;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(char **)v2;
  v3 = 256LL;
  v4 = 256LL;
  v5 = v22;
  v6 = 0;
  v7 = v2 - v22;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v8 = *(_WORD *)((char *)v5 + v7);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
  {
    --v5;
    v6 = -2147024774;
  }
  *v5 = 0;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v9 = (char *)this + 40;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v9 = *(char **)v9;
  v10 = v23;
  v11 = 0LL;
  v12 = v9 - v23;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v13 = *(_WORD *)((char *)v10 + v12);
    if ( !v13 )
      break;
    *v10++ = v13;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
  {
    --v10;
    v11 = 2147942522LL;
  }
  *v10 = 0;
  if ( (int)v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)v11);
    __debugbreak();
  }
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v19);
  v18 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 104LL))(v19, &v18);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = v18;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, v20);
  v17 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v15 + 48LL))(
          v15,
          v16[1].Reserved.Reserved1,
          1024LL,
          v22);
  if ( v17 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
}
