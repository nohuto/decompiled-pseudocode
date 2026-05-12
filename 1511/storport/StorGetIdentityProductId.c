/*
 * XREFs of StorGetIdentityProductId @ 0x1C000C6D0
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C000C7E8 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0051378 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0051324 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 17LL, *a1 + 16LL, 16LL);
  return 0LL;
}
