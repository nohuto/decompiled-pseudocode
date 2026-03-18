/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A750
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B754 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00C1D80 (DxgkGetAllMonitorDevicesFromSessionView.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  DXGADAPTERSOURCEHASH *v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v7 = this;
  v8 = 0;
  if ( !this )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v7 + 1) == CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v7);
  v3 = 0xFFFFFFFF >> (32 - *((_BYTE *)this + 60)) << (32 - *((_BYTE *)this + 60));
  if ( v8 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v7);
  return v3;
}
