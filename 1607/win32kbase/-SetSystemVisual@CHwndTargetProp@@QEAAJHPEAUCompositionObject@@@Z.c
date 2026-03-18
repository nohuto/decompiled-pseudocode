/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0073B00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0073BE0 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     IsWindowDesktopComposed @ 0x1C0073C80 (IsWindowDesktopComposed.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(CHwndTargetProp *this, int a2, struct CompositionObject *a3)
{
  int DCompositionHwndTarget; // esi
  PVOID v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  DCompositionHwndTarget = 0;
  if ( !*((_QWORD *)this + 4) && !(unsigned int)IsWindowDesktopComposed(*((_QWORD *)this + 1))
    || (DCompositionHwndTarget = CompositionObject::OpenDwmHandle(a3, &v9), DCompositionHwndTarget >= 0)
    && (v7 = ReferenceDwmApiPort(),
        DCompositionHwndTarget = DwmAsyncCreateDCompositionHwndTarget(v7),
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
