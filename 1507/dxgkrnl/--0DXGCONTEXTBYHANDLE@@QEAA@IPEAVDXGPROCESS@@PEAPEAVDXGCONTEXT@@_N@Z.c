/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C005BAB0 (DxgkGetContextSchedulingPriority.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00AF3A0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00AFF30 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0131C70 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C0138720 (DxgkGetContextInProcessSchedulingPriority.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0148180 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C01548B4 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     OutputDuplPresent @ 0x1C01563D4 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0160150 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0160760 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5)
{
  unsigned int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)a3 + 58)
    && (v10 = *((_QWORD *)a3 + 27),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && (v11 & 0x1000) == 0
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 7 )
  {
    v12 = *(_QWORD *)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v12;
  if ( v12 && !a5 )
  {
    _m_prefetchw((const void *)(v12 + 32));
    v13 = *(_QWORD *)(v12 + 32);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_14;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_14:
  *a4 = *(struct DXGCONTEXT **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
