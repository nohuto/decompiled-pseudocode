/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C0145AAC
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z @ 0x1C00DB8E4 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEAU_LUID@@PEAI@Z @ 0x1C01459BC (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, &v15);
  if ( Entry )
    goto LABEL_6;
  v9 = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, 0LL);
  if ( !v9 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = a2->HighPart;
    *(_QWORD *)(v11 + 32) = a2->LowPart;
    WdLogEvent5_WdAssertion(v11);
    v12 = -1073741811;
    goto LABEL_7;
  }
  Entry = DXGADAPTERSOURCEHASH::AddEntry(this, a2, a3, (*((_DWORD *)v9 + 3) >> 1) & 1);
  if ( Entry )
  {
LABEL_6:
    *a4 = ((__int64)Entry - *((_QWORD *)this + 8)) >> 4;
    v12 = 0;
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_7:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v12;
}
