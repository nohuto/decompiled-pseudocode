/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_26f63d0bf414d36984dad0b7057c26bb____Windows::Internal::CNoResult_::Run @ 0x180033AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_26f63d0bf414d36984dad0b7057c26bb____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    v3 = ContentManagement::ContentManagementService::ProcessCreativeEvent(
           *(_QWORD *)(a1 + 8) + 40LL,
           *(_DWORD *)(a1 + 24),
           *(HSTRING *)(a1 + 32),
           *(HSTRING *)(a1 + 48),
           *(HSTRING *)(a1 + 64),
           *(_QWORD *)(a1 + 80),
           *(_QWORD *)(a1 + 96));
    v4 = v3;
    if ( v3 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x16B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v4;
}
