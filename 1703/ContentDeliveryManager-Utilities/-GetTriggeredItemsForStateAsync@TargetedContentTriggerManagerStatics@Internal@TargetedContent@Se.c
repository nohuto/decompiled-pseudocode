/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180048960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180020560 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_a20a6b3776b39db881c9be8aadce65fd___ @ 0x180049F78 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        _QWORD *a4)
{
  HRESULT v7; // ebx
  HRESULT v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // edx
  signed __int32 v13; // r8d
  int v14; // edi
  HSTRING v16; // [rsp+28h] [rbp-39h]
  HSTRING v17; // [rsp+38h] [rbp-29h]
  _DWORD v18[4]; // [rsp+48h] [rbp-19h] BYREF
  HSTRING newString; // [rsp+58h] [rbp-9h] BYREF
  HSTRING v20; // [rsp+60h] [rbp-1h] BYREF
  __int64 v21; // [rsp+68h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+Fh]
  HSTRING v23; // [rsp+78h] [rbp+17h]
  char v24; // [rsp+80h] [rbp+1Fh]
  HSTRING string; // [rsp+88h] [rbp+27h]
  char v26; // [rsp+90h] [rbp+2Fh]
  __int64 v27; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v29; // [rsp+E0h] [rbp+7Fh]

  v27 = -2LL;
  *a4 = 0LL;
  v7 = WindowsDuplicateString(a2, &newString);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x19E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v16 = newString;
  WindowsDeleteString(0LL);
  v8 = WindowsDuplicateString(a3, &v20);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v17 = v20;
  WindowsDeleteString(0LL);
  v10 = a1 - 32;
  v11 = a1 - 32;
  v29 = a1 - 32;
  v12 = 0x7FFFFFFF;
  if ( a1 != 32 )
  {
    v13 = *(_DWORD *)(v10 + 44);
    if ( v13 == 0x7FFFFFFF )
      goto LABEL_13;
    do
    {
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 44), v13 + 1, v13) )
        break;
      v13 = *(_DWORD *)(v10 + 44);
    }
    while ( v13 != 0x7FFFFFFF );
    if ( v13 == 0x7FFFFFFF )
LABEL_13:
      v9 = 0x7FFFFFFFLL;
    else
      v9 = (unsigned int)(v13 + 1);
    v11 = a1 - 32;
    if ( (*(_BYTE *)(v29 + 64) & 4) == 0 && (_DWORD)v9 == 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v11 = a1 - 32;
    }
  }
  v21 = a1 - 32;
  v22 = v11;
  if ( v11 )
  {
    v9 = *(unsigned int *)(v11 + 44);
    if ( (_DWORD)v9 != 0x7FFFFFFF )
    {
      do
      {
        if ( (_DWORD)v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 44), v9 + 1, v9) )
          break;
        v9 = *(unsigned int *)(v11 + 44);
      }
      while ( (_DWORD)v9 != 0x7FFFFFFF );
      if ( (_DWORD)v9 != 0x7FFFFFFF )
        v12 = v9 + 1;
    }
    v11 = a1 - 32;
    if ( (*(_BYTE *)(v29 + 64) & 4) == 0 && v12 == 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v11 = a1 - 32;
    }
  }
  v23 = v16;
  v24 = 0;
  string = v17;
  v26 = 0;
  v18[0] = 3;
  v18[1] = 128;
  v18[2] = 0;
  v14 = ((__int64 (__fastcall *)(_DWORD *, _QWORD *, __int64, __int64 *, _QWORD, char, _QWORD, char))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_a20a6b3776b39db881c9be8aadce65fd___)(
          v18,
          a4,
          v9,
          &v21,
          0LL,
          1,
          0LL,
          1);
  if ( string )
    WindowsDeleteString(string);
  if ( v23 )
    WindowsDeleteString(v23);
  if ( v22 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v22);
  if ( v14 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v14);
  if ( v11 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v11);
  return (unsigned int)v14;
}
