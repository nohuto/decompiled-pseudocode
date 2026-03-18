/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001ACD0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionCommitChannel @ 0x1C001E4D0 (NtDCompositionCommitChannel.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C00D6B10 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D6BA8 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D75E8 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D7698 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D77E8 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 * Callees:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C001B040 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        char a3)
{
  char v6; // bp
  struct DirectComposition::CBatch *v8; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::CBatch *v9; // [rsp+68h] [rbp+20h] BYREF

  do
  {
    v6 = DirectComposition::CApplicationChannel::BuildBatch(this, &v9, &v8, a3);
    if ( v9 )
      DirectComposition::CApplicationChannel::SubmitBatch(this, (LARGE_INTEGER *)v9, v8, *((_BYTE *)this + 48) & 1);
  }
  while ( !v6 );
  if ( a2 )
    *a2 = *((_DWORD *)this + 131) != 0;
  return 0LL;
}
