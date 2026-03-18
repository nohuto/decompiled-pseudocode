/*
 * XREFs of KeFindConfigurationEntry @ 0x1407E617C
 * Callers:
 *     <none>
 * Callees:
 *     KeFindConfigurationNextEntry @ 0x1407E619C (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall KeFindConfigurationEntry(int a1, int a2, int a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  return KeFindConfigurationNextEntry(a1, a2, a3, a4, (__int64)v5);
}
