/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x18000F61C
 * Callers:
 *     ??0CFade@@IEAA@XZ @ 0x1800012F4 (--0CFade@@IEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x180001FD4 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180003B08 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180009838 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180040C80 (--0CSlide@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180091A18 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x180091AE0 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this, char a2)
{
  *((_DWORD *)this + 7) = -1;
  *(_QWORD *)this = &CStoryboard::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 18) = -1;
  *((GUID *)this + 3) = GUID_NULL;
  *((_BYTE *)this + 68) = a2;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
