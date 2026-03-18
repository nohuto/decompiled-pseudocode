/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x180113C40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001C1E0 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800B3814 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  __int64 i; // rbx
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 310); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 152) + 8 * i));
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1216, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 318); j = (unsigned int)(j + 1) )
  {
    v4 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v4 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v4);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1248, 8u);
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 1280);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 1248);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 1216);
}
