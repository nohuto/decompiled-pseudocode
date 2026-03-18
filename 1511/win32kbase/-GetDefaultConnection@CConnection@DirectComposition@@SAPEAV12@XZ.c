/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00125CC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00127F4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0012BA0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0012BF0 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013E70 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C007C060 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00D5AF0 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C00D5B60 (DCompositionRenderBlack.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00D5F40 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D5F90 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionPendingBatches @ 0x1C00D6048 (NtDCompositionPendingBatches.c)
 *     NtDCompositionSyncWait @ 0x1C00D61E0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00D6380 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  volatile signed __int32 *v0; // rbx
  struct DirectComposition::CProcessData *v1; // rax
  struct DirectComposition::CProcessData *v2; // rdi

  v0 = 0LL;
  v1 = DirectComposition::CProcessData::Current();
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  DirectComposition::CCriticalSection::AcquireShared(*((struct _ERESOURCE **)v1 + 4));
  v0 = (volatile signed __int32 *)*((_QWORD *)v2 + 3);
  if ( v0 )
    _InterlockedIncrement(v0);
  ExReleaseResourceLite(*((PERESOURCE *)v2 + 4));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_5:
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CConnection::s_pSessionConnectionLock);
      v0 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
