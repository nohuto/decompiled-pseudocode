/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x1800E1590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18005EBBC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x18005ECA0 (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800E1984 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  CMILCOMBase **v1; // r12
  __int64 i; // r15
  unsigned int v4; // edx
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v6; // rcx

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
    v6 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v6 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v6, v4);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 156, 8u);
  CFrameInfo::ReleaseResponses(this);
  COutOfFrameDirectFlipStats::Reset(v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 160);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 156);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 152);
}
