/*
 * XREFs of ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x18006C35C
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::`scalar deleting destructor'(
        CAnimationClockCoordinator *this)
{
  __int64 v1; // rbx
  CBaseObject *v3; // rcx

  v1 = 0LL;
  for ( *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 7) + 8 * v1);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationClockCoordinator *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
