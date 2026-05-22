/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004DA6C
 * Callers:
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004CC70 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x18004D0FC (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z @ 0x18004ED00 (-OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     _lambda_2c65abb260ef27506ee9df12d142cee7_::operator() @ 0x180084B30 (_lambda_2c65abb260ef27506ee9df12d142cee7_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
