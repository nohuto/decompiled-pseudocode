/*
 * XREFs of StorGetIdentityProductId @ 0x1C0010A88
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0010BA0 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0059154 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0059100 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 17LL, *a1 + 16LL, 16LL);
  return 0LL;
}
