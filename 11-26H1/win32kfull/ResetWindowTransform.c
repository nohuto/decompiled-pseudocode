/*
 * XREFs of ResetWindowTransform @ 0x14004A5F8
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14004A540 (UpdateTopLevelWindowDPITransform.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetWindowTransform(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 216);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
}
