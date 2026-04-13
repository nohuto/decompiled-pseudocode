/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800535B8
 * Callers:
 *     _lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator() @ 0x180052698 (_lambda_093e5cd604f7ab5de7acc075fbba0f63_--operator().c)
 *     _lambda_54b1615c74727b96cfd9244fd3177ed2_::operator() @ 0x180052CFC (_lambda_54b1615c74727b96cfd9244fd3177ed2_--operator().c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180050A9C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)a1 + 6);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset_0(this, 0, 0x20uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
