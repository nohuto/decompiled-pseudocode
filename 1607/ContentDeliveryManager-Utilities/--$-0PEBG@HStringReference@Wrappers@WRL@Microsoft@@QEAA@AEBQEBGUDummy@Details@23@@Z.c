/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180017038
 * Callers:
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180014BE0 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180024914 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002E450 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18002E450.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002E6D0 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18002E6D0.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002E950 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18002E950.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002EBD0 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18002EBD0.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002EE50 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_18002EE50.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180044D90 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedCo.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180045DA0 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedCont.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2)
{
  HSTRING *v2; // r9
  const WCHAR *v4; // rcx
  unsigned __int64 v5; // rax
  HRESULT StringReference; // eax

  v2 = (HSTRING *)&a1[1];
  a1[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  StringReference = WindowsCreateStringReference(v4, v5, a1, v2);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    JUMPOUT(0x1800170A1LL);
  }
  return a1;
}
