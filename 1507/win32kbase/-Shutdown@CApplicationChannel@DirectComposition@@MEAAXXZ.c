/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C0020770 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C54 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0024A10 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0028E38 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0030A5C (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00D7F1C (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  DirectComposition::CBatch *v5; // rcx
  __int64 v6; // rdi
  struct DirectComposition::CApplicationChannel **v7; // rcx
  DirectComposition::CAnimationBinding *v8; // rcx
  struct DirectComposition::CrossChannelVisualData *v9; // rdx
  int v10; // esi
  CInputManager *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v14; // r8
  DirectComposition::CBatch *v15; // rcx

  DirectComposition::CCriticalSection::AcquireShared(*(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL));
  v2 = 6;
  v3 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v2 = 2;
  *((_DWORD *)this + 6) = v2;
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 8));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v4);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 20) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this, 0);
  if ( *((_QWORD *)this + 17) )
  {
    do
    {
      v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 17);
      v6 = *(_QWORD *)v5;
      if ( v5 )
        DirectComposition::CBatch::`scalar deleting destructor'(v5);
      *((_QWORD *)this + 17) = v6;
    }
    while ( v6 );
  }
  v7 = (struct DirectComposition::CApplicationChannel **)*((_QWORD *)this + 15);
  if ( v7 )
  {
    DirectComposition::CBatch::Clear(v7);
    v15 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
    if ( v15 )
      DirectComposition::CBatch::`scalar deleting destructor'(v15);
    *((_QWORD *)this + 15) = 0LL;
  }
  v8 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
  if ( v8 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v8, this);
    *((_QWORD *)this + 44) = 0LL;
  }
  v9 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v9 )
  {
    *((_QWORD *)this + 49) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v9);
  }
  v10 = *((_DWORD *)this + 171);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
    v11 = g_pInputManager;
    v12 = 0LL;
    while ( (unsigned int)v12 < *((_DWORD *)v11 + 30) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 14) + 8 * v12) + 4LL) == v10 )
      {
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((char *)v11 + 112, (unsigned int)v12);
        v11 = g_pInputManager;
      }
      else
      {
        v12 = (unsigned int)(v12 + 1);
      }
    }
    ExReleasePushLockSharedEx((char *)v11 + 128, 0LL);
  }
  v13 = *((_QWORD *)this + 16);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 32) ^= (*(_BYTE *)(v13 + 32) ^ ((*((_BYTE *)this + 48) & 2) == 0)) & 1;
    *(_DWORD *)(v13 + 16) = ++*((_DWORD *)this + 94);
    v14 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 16) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v13,
      v14 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
