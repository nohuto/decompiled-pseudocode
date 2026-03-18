/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1C0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00191A4 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001ACA8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001AE48 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C003DD50 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004C7F4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00813E4 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00F2618 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  DirectComposition::CBatch *v5; // rcx
  __int64 v6; // rdi
  DirectComposition::CBatch *v7; // rcx
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
  if ( *((_QWORD *)this + 28) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  if ( *((_QWORD *)this + 25) )
  {
    do
    {
      v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 25);
      v6 = *(_QWORD *)v5;
      if ( v5 )
        DirectComposition::CBatch::`scalar deleting destructor'(v5);
      *((_QWORD *)this + 25) = v6;
    }
    while ( v6 );
  }
  v7 = (DirectComposition::CBatch *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    DirectComposition::CBatch::Clear(v7);
    v15 = (DirectComposition::CBatch *)*((_QWORD *)this + 23);
    if ( v15 )
      DirectComposition::CBatch::`scalar deleting destructor'(v15);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 45);
  if ( v8 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v8, this);
    *((_QWORD *)this + 45) = 0LL;
  }
  v9 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 50);
  if ( v9 )
  {
    *((_QWORD *)this + 50) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v9);
  }
  v10 = *((_DWORD *)this + 176);
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
    ExReleasePushLockSharedEx((char *)v11 + 128);
  }
  v13 = *((_QWORD *)this + 24);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 32) ^= (*(_BYTE *)(v13 + 32) ^ ((*((_BYTE *)this + 48) & 2) == 0)) & 1;
    *(_DWORD *)(v13 + 16) = ++*((_DWORD *)this + 96);
    v14 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 24) = 0LL;
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
