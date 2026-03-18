/*
 * XREFs of ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003DC80 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0042038 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C007A2B4 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C007A314 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C00E4B5C (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void **__fastcall DirectComposition::CEvent::`scalar deleting destructor'(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool();
  return this;
}
