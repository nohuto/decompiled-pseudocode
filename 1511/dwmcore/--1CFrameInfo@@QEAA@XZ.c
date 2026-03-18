/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x1800FFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180002798 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x180069118 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  CMILCOMBase **v1; // r12
  __int64 i; // r15
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v5; // rcx

  v1 = (CMILCOMBase **)((char *)this + 1312);
  COutOfFrameDirectFlipStats::Reset((CMILCOMBase **)this + 164);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 310); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 152) + 8 * i));
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 152, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 318); j = (unsigned int)(j + 1) )
  {
    v5 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v5 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v5);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 156, 8u);
  CFrameInfo::ReleaseResponses(this);
  COutOfFrameDirectFlipStats::Reset(v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 160);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 156);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 152);
}
