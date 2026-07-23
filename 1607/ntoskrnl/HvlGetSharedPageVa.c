/*
 * XREFs of HvlGetSharedPageVa @ 0x140581DFC
 * Callers:
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 * Callees:
 *     <none>
 */

__int64 HvlGetSharedPageVa()
{
  return HvlpReferenceTscPage;
}
