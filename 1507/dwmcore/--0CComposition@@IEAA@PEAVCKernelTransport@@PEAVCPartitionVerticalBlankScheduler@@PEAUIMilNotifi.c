/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18009354C
 * Callers:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180092738 (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEA.c)
 * Callees:
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800517EC (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x180093884 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CKernelTransport *a2,
        struct CPartitionVerticalBlankScheduler *a3,
        struct IMilNotificationTransport *a4,
        struct CDebugFrameCounter *a5,
        struct CoRenderHost *a6)
{
  __int64 v10; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 80));
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)this + 272);
  *((_DWORD *)this + 84) = 1;
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)this + 376);
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)this + 408);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 61) = a5;
  *((_QWORD *)this + 64) = a6;
  *((_QWORD *)this + 62) = a2;
  *((_QWORD *)this + 63) = a3;
  *((_QWORD *)this + 65) = (char *)this + 552;
  *((_QWORD *)this + 66) = (char *)this + 552;
  *((_DWORD *)this + 134) = 1;
  *(_QWORD *)((char *)this + 540) = 1LL;
  *((_QWORD *)this + 70) = a4;
  *((_DWORD *)this + 142) = 0;
  InitializeSRWLock((PSRWLOCK)this + 72);
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *((_QWORD *)this + 77) = (char *)this + 648;
  *((_QWORD *)this + 78) = (char *)this + 648;
  *((_DWORD *)this + 158) = 1;
  *(_QWORD *)((char *)this + 636) = 1LL;
  *((_QWORD *)this + 82) = (char *)this + 688;
  *((_QWORD *)this + 83) = (char *)this + 688;
  *((_DWORD *)this + 168) = 2;
  *(_QWORD *)((char *)this + 676) = 2LL;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 16;
  *(_QWORD *)((char *)this + 724) = 16LL;
  `vector constructor iterator'(
    (CComposition *)((char *)this + 864),
    32LL,
    3,
    (void (__fastcall *)(Mesh::MeshLine *))CWatermarkStack<MilVisualRenderParameter *,8,2,4>::CWatermarkStack<MilVisualRenderParameter *,8,2,4>);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 960),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_DWORD *)this + 266) = 0;
  *((_DWORD *)this + 76) = QueryPerformanceFrequency((LARGE_INTEGER *)this + 39);
  v10 = *((_QWORD *)this + 64);
  *(_QWORD *)((char *)this + 252) = this;
  if ( v10 )
    *(_QWORD *)(v10 + 16) = this;
  _InterlockedAdd((volatile signed __int32 *)this + 2, 1u);
  return this;
}
