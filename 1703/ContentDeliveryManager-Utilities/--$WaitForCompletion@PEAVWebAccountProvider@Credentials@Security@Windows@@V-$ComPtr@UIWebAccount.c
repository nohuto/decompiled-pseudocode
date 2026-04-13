/*
 * XREFs of ??$WaitForCompletion@PEAVWebAccountProvider@Credentials@Security@Windows@@V?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800574C8
 * Callers:
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180056334 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800581A8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::WaitForCompletion<Windows::Security::Credentials::WebAccountProvider *,Microsoft::WRL::ComPtr<Windows::Security::Credentials::IWebAccountProvider>>(
        __int64 *a1,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>(a2);
  if ( v4 < 0 )
    goto LABEL_5;
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, a1);
  if ( v4 < 0 )
  {
LABEL_5:
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
