/*
 * XREFs of EnterEditionCrit @ 0x1C010DAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterEditionCrit(unsigned int a1)
{
  __int64 v2; // rcx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return 1LL;
  EnterCrit(a1, 1LL);
  EnterDeviceInfoListCrit_(v2);
  return 0LL;
}
