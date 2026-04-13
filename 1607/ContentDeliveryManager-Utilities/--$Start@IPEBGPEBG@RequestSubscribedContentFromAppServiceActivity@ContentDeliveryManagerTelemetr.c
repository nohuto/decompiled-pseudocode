/*
 * XREFs of ??$Start@IPEBGPEBG@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAI$$QEAPEBG1@Z @ 0x180042F84
 * Callers:
 *     ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274 (-SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppS.c)
 * Callees:
 *     ?StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003C0A8 (-StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Ba.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::Start<unsigned int,unsigned short const *,unsigned short const *>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity *this,
        int *a2,
        const unsigned __int16 **a3,
        const unsigned __int16 **a4)
{
  char *v4; // rbx
  _QWORD *v8; // rcx

  *((_QWORD *)this + 2) = this;
  v4 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v8 = (_QWORD *)((char *)this + 136);
  v4[4] = 0;
  v4[64] = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = "RequestSubscribedContentFromAppServiceActivity";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset_0(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::StartActivity(
    this,
    *a2,
    *a3,
    *a4);
  return this;
}
