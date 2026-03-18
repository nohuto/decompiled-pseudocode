/*
 * XREFs of ?SetProperty@CAnalogRenderTarget@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180127670
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExclusiveSurfaceOpacity@CAnalogCompositorClient@@QEAAXM@Z @ 0x18012761C (-SetExclusiveSurfaceOpacity@CAnalogCompositorClient@@QEAAXM@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::SetProperty(CAnalogCompositorClient *a1, int a2, int a3, float *a4)
{
  if ( a3 == 17 && a2 == 7 )
    CAnalogCompositorClient::SetExclusiveSurfaceOpacity(a1, *a4);
  return 0LL;
}
