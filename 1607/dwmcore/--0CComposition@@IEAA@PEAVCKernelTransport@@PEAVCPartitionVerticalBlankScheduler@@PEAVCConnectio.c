/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180043998
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B7880 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180039390 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A8014 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CKernelTransport *a2,
        struct CPartitionVerticalBlankScheduler *a3,
        struct CConnection *a4,
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
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 272);
  *((_DWORD *)this + 84) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 376);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 408);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 61) = a5;
  *((_QWORD *)this + 65) = a6;
  *((_QWORD *)this + 63) = a2;
  *((_QWORD *)this + 64) = a3;
  *((_QWORD *)this + 66) = (char *)this + 560;
  *((_QWORD *)this + 67) = (char *)this + 560;
  *((_DWORD *)this + 136) = 1;
  *(_QWORD *)((char *)this + 548) = 1LL;
  *((_QWORD *)this + 71) = a4;
  *((_DWORD *)this + 144) = 0;
  InitializeSRWLock((PSRWLOCK)this + 73);
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = (char *)this + 656;
  *((_QWORD *)this + 79) = (char *)this + 656;
  *((_DWORD *)this + 160) = 1;
  *(_QWORD *)((char *)this + 644) = 1LL;
  *((_QWORD *)this + 83) = (char *)this + 696;
  *((_QWORD *)this + 84) = (char *)this + 696;
  *((_DWORD *)this + 170) = 2;
  *(_QWORD *)((char *)this + 684) = 2LL;
  *((_QWORD *)this + 89) = (char *)this + 744;
  *((_QWORD *)this + 90) = (char *)this + 744;
  *((_DWORD *)this + 182) = 16;
  *(_QWORD *)((char *)this + 732) = 16LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_DWORD *)this + 256) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 1032),
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData,
    0LL);
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_DWORD *)this + 284) = 0;
  *((_DWORD *)this + 76) = QueryPerformanceFrequency((LARGE_INTEGER *)this + 39);
  v10 = *((_QWORD *)this + 65);
  *(_QWORD *)((char *)this + 252) = this;
  if ( v10 )
    *(_QWORD *)(v10 + 16) = this;
  *((_BYTE *)this + 1241) = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 2, 1u);
  return this;
}
