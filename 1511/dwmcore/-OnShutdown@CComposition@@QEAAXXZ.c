/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180095004 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180101494 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180104ECC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180105498 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

void __fastcall CComposition::OnShutdown(CRenderTargetManager **this)
{
  __int64 i; // rbp

  CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)&g_deviceTable);
  CComposition::ReleaseNotificationChannels((CComposition *)this);
  CRenderTargetManager::ReleaseTargets(this[4]);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this[65] + i) + 16LL))(*((_QWORD *)this[65] + i));
  *((_DWORD *)this + 136) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 65, 8u);
  while ( *((_DWORD *)this + 74) )
    CComposition::CloseChannel(
      (CComposition *)this,
      *(_DWORD *)(*((_QWORD *)this[34] + (unsigned int)(*((_DWORD *)this + 74) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(this[141]);
  CMILCOMBase::InternalRelease(this[141]);
  this[141] = 0LL;
}
