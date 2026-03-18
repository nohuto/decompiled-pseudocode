/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800E3158
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800E3A54 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x1800E8F84 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1800E9518 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x180123260 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
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
  CMessageConversationHost::Disconnect(this[145]);
  CMILCOMBase::InternalRelease(this[145]);
  this[145] = 0LL;
}
