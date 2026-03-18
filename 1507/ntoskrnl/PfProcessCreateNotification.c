/*
 * XREFs of PfProcessCreateNotification @ 0x140443FBC
 * Callers:
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x140444244 (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140350208 & 1) != 0 || (dword_1403535E0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (unsigned __int64)&P + 1);
    if ( (dword_1403535E0 & 1) != 0 && *(_DWORD *)(a1 + 1172) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
