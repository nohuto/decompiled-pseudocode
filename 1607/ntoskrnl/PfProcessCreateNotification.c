/*
 * XREFs of PfProcessCreateNotification @ 0x1403E6410
 * Callers:
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfSnBeginAppLaunch @ 0x1403E64A0 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x1403E6698 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x1403E67F0 (PfCalculateProcessHash.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140328008 & 1) != 0 || (dword_140328670 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140328670 & 1) != 0 && *(_DWORD *)(a1 + 1180) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
