/*
 * XREFs of ?RuleBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180048E40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800464D8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Services::TargetedContent::Internal::RuleBiPredicateCreator(HSTRING a1, void **a2, _DWORD *a3)
{
  const OLECHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  GUID *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  GUID *v10; // rbx
  void *v11; // rsi
  DWORD LastError; // edi
  GUID pclsid; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v6 = CLSIDFromString(StringRawBuffer, &pclsid);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (GUID *)CoTaskMemAlloc(0x14uLL);
  v10 = v7;
  if ( !v7 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x1C2, v8, v9);
    __debugbreak();
  }
  *v7 = pclsid;
  v7[1].Data1 = 1;
  v11 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v11);
    SetLastError(LastError);
  }
  *a2 = v10;
  *a3 = 20;
  CoTaskMemFree(v10);
}
