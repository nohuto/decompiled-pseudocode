/*
 * XREFs of ??$AppServiceResponseStatus@HAEAI@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX$$QEAHAEAI@Z @ 0x180042EAC
 * Callers:
 *     ?AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@IAEAVRequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceResponse@678@PEAW4AppServiceResponseStatus@678@@Z @ 0x18003EF0C (-AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedConte.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::AppServiceResponseStatus<int,unsigned int &>(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  int v8; // eax
  int v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = *a2;
      v14 = 0;
      v17 = 0;
      v10 = v8;
      v12 = &v10;
      v13 = 4;
      v15 = a3;
      v16 = 4;
      LODWORD(v6) = TlgWrite(v7, &unk_18007D3FC, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  return (int)v6;
}
