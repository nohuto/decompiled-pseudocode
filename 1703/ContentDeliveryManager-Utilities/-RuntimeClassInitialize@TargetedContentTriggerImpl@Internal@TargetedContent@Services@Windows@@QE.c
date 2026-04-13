/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180045980
 * Callers:
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180046268 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        HSTRING a3,
        char *a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING *v9; // rbx
  HSTRING *v10; // rdi
  HRESULT v11; // eax
  HSTRING *v12; // rdi
  HRESULT v13; // eax
  HSTRING *v14; // rdi
  HRESULT v15; // eax
  HSTRING *v16; // rdi
  HRESULT v17; // eax
  HRESULT v18; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (HSTRING *)a1;
  try
  {
    if ( !a2 )
    {
      v9 = (HSTRING *)2147549183LL;
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL);
    }
    *(_DWORD *)(a1 + 56) = a2;
    v10 = (HSTRING *)(a1 + 112);
    v11 = 0;
    if ( !a3 || a3 != *v10 )
    {
      WindowsDeleteString(*v10);
      *v10 = 0LL;
      v11 = WindowsDuplicateString(a3, v10);
    }
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v11);
    v12 = v9 + 15;
    v13 = 0;
    if ( !a4 || a4 != (char *)*v12 )
    {
      WindowsDeleteString(*v12);
      *v12 = 0LL;
      v13 = WindowsDuplicateString((HSTRING)a4, v9 + 15);
    }
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v13);
    v14 = v9 + 11;
    v15 = 0;
    if ( !string || string != *v14 )
    {
      WindowsDeleteString(*v14);
      *v14 = 0LL;
      v15 = WindowsDuplicateString(string, v9 + 11);
    }
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v15);
    v16 = v9 + 8;
    v17 = 0;
    if ( !a6 || a6 != *v16 )
    {
      WindowsDeleteString(*v16);
      *v16 = 0LL;
      v17 = WindowsDuplicateString(a6, v9 + 8);
    }
    if ( v17 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v17);
    v18 = 0;
    if ( !a7 || a7 != v9[13] )
    {
      WindowsDeleteString(v9[13]);
      v9[13] = 0LL;
      v18 = WindowsDuplicateString(a7, v9 + 13);
    }
    if ( v18 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           a4);
  }
  return result;
}
