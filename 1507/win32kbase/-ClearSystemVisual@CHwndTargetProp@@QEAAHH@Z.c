/*
 * XREFs of ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C000AB80
 * Callers:
 *     ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C000ACE0 (-Delete@CHwndTargetProp@@UEAAXXZ.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     IsWindowDesktopComposed @ 0x1C000AE10 (IsWindowDesktopComposed.c)
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1C000AE30 (DwmAsyncDestroyDCompositionHwndTarget.c)
 */

__int64 __fastcall CHwndTargetProp::ClearSystemVisual(CHwndTargetProp *this, int a2)
{
  unsigned int v2; // esi
  void *v4; // rcx
  void *v5; // rax
  void *v7; // rcx

  v2 = 0;
  if ( a2 )
  {
    v7 = (void *)*((_QWORD *)this + 2);
    if ( !v7 )
      return v2;
    ObfDereferenceObject(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  else
  {
    v4 = (void *)*((_QWORD *)this + 3);
    if ( !v4 )
      return v2;
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v2 = 1;
  if ( *((_QWORD *)this + 4) || *((_QWORD *)this + 1) && (unsigned int)IsWindowDesktopComposed() )
  {
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncDestroyDCompositionHwndTarget(v5);
  }
  return v2;
}
