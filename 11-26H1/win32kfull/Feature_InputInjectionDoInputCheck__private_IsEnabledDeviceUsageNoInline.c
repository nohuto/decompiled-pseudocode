/*
 * XREFs of Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x14029D0FC
 * Callers:
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x1402A4DD0 (EditionIsRIMInjectionBlocked.c)
 * Callees:
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledFallback @ 0x14029D138 (Feature_InputInjectionDoInputCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputInjectionDoInputCheck__private_featureState & 0x10) != 0 )
    return Feature_InputInjectionDoInputCheck__private_featureState & 1;
  else
    return Feature_InputInjectionDoInputCheck__private_IsEnabledFallback(
             (unsigned int)Feature_InputInjectionDoInputCheck__private_featureState,
             3LL);
}
