/*
 * XREFs of ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0075E14
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C009AB8C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C012DF94 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C013AC6C (-IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGDEVICE::IsVidPnSourcePrimaryValid(DXGDEVICE *this, unsigned int a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + a2 + 244);
  return (_BYTE)v2 && (*((_DWORD *)this + 70) != 1 || (v2 & 0x100) != 0);
}
