/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x180017EEC
 * Callers:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x180018F70 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800902F0 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData *this)
{
  if ( *((CWindowData **)this + 2) != (CWindowData *)((char *)this + 1158) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 2));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 512);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 472);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 440);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 400);
}
