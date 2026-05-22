/*
 * XREFs of SetManipulationInputTarget @ 0x180005680
 * Callers:
 *     <none>
 * Callees:
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  if ( (gdwMitConfig & 4) != 0 || ((1LL << gdwDeviceFamily) & 0x1DB5) == 0 )
    return MITSetManipulationInputTarget(a1);
  else
    return (int)GestureTargetingComponent::SetManipulationInputTargetStatic(a1, a2, a3, a4, a5) >= 0;
}
