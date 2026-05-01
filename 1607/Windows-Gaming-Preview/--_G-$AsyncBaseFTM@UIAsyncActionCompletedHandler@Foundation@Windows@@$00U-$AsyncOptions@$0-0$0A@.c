/*
 * XREFs of ??_G?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAA@XZ @ 0x18001C19C (--1-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncOptions@$0-0$0A@$.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
