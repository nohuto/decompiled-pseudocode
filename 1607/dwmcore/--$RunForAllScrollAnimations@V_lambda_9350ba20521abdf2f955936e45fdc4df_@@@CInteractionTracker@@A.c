/*
 * XREFs of ??$RunForAllScrollAnimations@V_lambda_9350ba20521abdf2f955936e45fdc4df_@@@CInteractionTracker@@AEAAXAEBV_lambda_9350ba20521abdf2f955936e45fdc4df_@@@Z @ 0x180149700
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::RunForAllScrollAnimations<_lambda_9350ba20521abdf2f955936e45fdc4df_>(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 416);
  v2 = 3LL;
  do
  {
    result = *v1;
    if ( *v1 )
      *(_BYTE *)(result + 468) |= 0x20u;
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
