/*
 * XREFs of ?IsActive_TestHook@CVolumeLimitTrackerNull@@UEAAJPEAH@Z @ 0x18001FB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeLimitTrackerNull::IsActive_TestHook(CVolumeLimitTrackerNull *this, int *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  return 0LL;
}
