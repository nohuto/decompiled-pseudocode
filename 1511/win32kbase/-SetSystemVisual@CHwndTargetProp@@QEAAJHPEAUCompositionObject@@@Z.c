/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0069E20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0069F00 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     IsWindowDesktopComposed @ 0x1C006A000 (IsWindowDesktopComposed.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(
        CHwndTargetProp *this,
        int a2,
        struct CompositionObject *a3,
        __int64 a4)
{
  int DCompositionHwndTarget; // esi
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  DCompositionHwndTarget = 0;
  if ( !*((_QWORD *)this + 4) && !(unsigned int)IsWindowDesktopComposed(*((_QWORD *)this + 1))
    || (DCompositionHwndTarget = CompositionObject::OpenDwmHandle(a3, &v10, (__int64)a3, a4), DCompositionHwndTarget >= 0)
    && (v8 = (void *)ReferenceDwmApiPort(),
        DCompositionHwndTarget = DwmAsyncCreateDCompositionHwndTarget(v8),
        DCompositionHwndTarget >= 0) )
  {
    if ( a2 )
      *((_QWORD *)this + 2) = a3;
    else
      *((_QWORD *)this + 3) = a3;
    CompositionObject::AddRef(a3);
  }
  return (unsigned int)DCompositionHwndTarget;
}
