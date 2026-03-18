/*
 * XREFs of ?SetProperty@CAnalogCompositor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013B150
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExclusiveSurfaceOpacity@CAnalogCompositorClient@@QEAAXM@Z @ 0x18013B100 (-SetExclusiveSurfaceOpacity@CAnalogCompositorClient@@QEAAXM@Z.c)
 */

__int64 __fastcall CAnalogCompositor::SetProperty(CAnalogCompositorClient *a1, int a2, int a3, float *a4)
{
  if ( a3 == 18 && a2 == 1 )
    CAnalogCompositorClient::SetExclusiveSurfaceOpacity(a1, *a4);
  return 0LL;
}
