/*
 * XREFs of ??1CGroupingStoryboard@@UEAA@XZ @ 0x180001F58
 * Callers:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800019A4 (--1CAppArrangementBase@@UEAA@XZ.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180091C00 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ @ 0x18004F048 (--1-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ.c)
 *     ??A?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@@I@Z @ 0x180091B44 (--A-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x180091CAC (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 */

void __fastcall CGroupingStoryboard::~CGroupingStoryboard(CGroupingStoryboard *this)
{
  unsigned int v1; // edi
  unsigned int v3; // edx
  void *v4; // rcx

  v1 = 0;
  *(_QWORD *)this = &CGroupingStoryboard::`vftable'{for `CBaseObject'};
  for ( *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'}; v1 < *((_DWORD *)this + 36); ++v1 )
  {
    v4 = *(void **)DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[]((char *)this + 120, v1);
    if ( v4 )
      CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(v4, v3);
  }
  DynArray<CStoryboard::UnifiedTargetRect *,0>::~DynArray<CStoryboard::UnifiedTargetRect *,0>((char *)this + 120);
  CStoryboard::~CStoryboard(this);
}
