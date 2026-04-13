/*
 * XREFs of ?Set@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x1800414C4
 * Callers:
 *     _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C (_lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator().c)
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_9a4f04edc0957699874c67f46dec02c4_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Z @ 0x180044700 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_9a4f04edc0957699874c67f46dec02c4_@@@Intern.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Set(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int AgileReference; // edi
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  AgileReference = 0;
  if ( a2 )
  {
    v8 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_275f413e_8d08_4317_a941_9c1a0c28b88c, a2, &v8);
    if ( AgileReference < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)AgileReference;
}
