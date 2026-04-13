/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_9e1a816c4af54f68571285bcfed83691_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x18001A670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_9e1a816c4af54f68571285bcfed83691_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[96]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v8; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    v3 = 2LL;
    do
    {
      v8 = 0LL;
      --v3;
    }
    while ( v3 );
    v4 = ContentManagement::ContentManagementService::SendAppServiceMessage(
           *(ContentManagement::ContentManagementService **)(a1 + 8),
           2 - (unsigned int)(*(_BYTE *)(a1 + 16) != 0),
           (__int64)v7);
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        376LL,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v5;
}
