/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0012004 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00139BC (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001A344 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001A4E0 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C001DC2C (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00E0528 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  DirectComposition::CBatch *v5; // rcx
  __int64 v6; // rdi
  DirectComposition::CConnection ***v7; // rcx
  DirectComposition::CBatch *v8; // rcx
  DirectComposition::CAnimationBinding *v9; // rcx
  struct DirectComposition::CrossChannelVisualData *v10; // rdx
  int v11; // esi
  CInputManager *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  char v15; // r8

  DirectComposition::CCriticalSection::AcquireShared(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 5)
                                                                                             + 8LL));
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
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
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
  v7 = (DirectComposition::CConnection ***)*((_QWORD *)this + 15);
  if ( v7 )
  {
    DirectComposition::CBatch::Clear(v7);
    v8 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
    if ( v8 )
      DirectComposition::CBatch::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 15) = 0LL;
  }
  v9 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
  if ( v9 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v9, this);
    *((_QWORD *)this + 44) = 0LL;
  }
  v10 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v10 )
  {
    *((_QWORD *)this + 49) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v10);
  }
  v11 = *((_DWORD *)this + 171);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
    v12 = g_pInputManager;
    v13 = 0LL;
    while ( (unsigned int)v13 < *((_DWORD *)v12 + 30) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 14) + 8 * v13) + 4LL) == v11 )
      {
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((char *)v12 + 112, (unsigned int)v13);
        v12 = g_pInputManager;
      }
      else
      {
        v13 = (unsigned int)(v13 + 1);
      }
    }
    ExReleasePushLockSharedEx((char *)v12 + 128);
  }
  v14 = *((_QWORD *)this + 16);
  if ( v14 )
  {
    *(_BYTE *)(v14 + 32) ^= (*(_BYTE *)(v14 + 32) ^ ((*((_BYTE *)this + 48) & 2) == 0)) & 1;
    *(_DWORD *)(v14 + 16) = ++*((_DWORD *)this + 94);
    v15 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 16) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v14,
      v15 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
