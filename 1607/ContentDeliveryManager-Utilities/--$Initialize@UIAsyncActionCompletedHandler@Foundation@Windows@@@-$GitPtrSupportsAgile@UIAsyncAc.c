/*
 * XREFs of ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x180016E7C
 * Callers:
 *     ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180015380 (-PutOnComplete@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCausa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int AgileReference; // edi
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  AgileReference = 0;
  if ( a2 )
  {
    v8 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a2, &v8);
    if ( AgileReference < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = *a1;
      *a1 = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)AgileReference;
}
