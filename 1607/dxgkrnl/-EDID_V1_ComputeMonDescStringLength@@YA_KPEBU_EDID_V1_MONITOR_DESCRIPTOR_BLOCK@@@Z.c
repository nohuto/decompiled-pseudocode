/*
 * XREFs of ?EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z @ 0x1C000A53C
 * Callers:
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C000A43C (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000DB08 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000EB78 (EDIDV1_ObtainMonitorSerialNumber.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EDID_V1_ComputeMonDescStringLength(const struct _EDID_V1_MONITOR_DESCRIPTOR_BLOCK *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rcx
  char v4; // dl

  for ( result = 0LL; result < 0xD; ++result )
  {
    if ( *((_BYTE *)a1 + result + 5) == 10 )
      break;
  }
  for ( i = result + 1; i < 0xD; ++i )
  {
    v4 = *((_BYTE *)a1 + i + 5);
    if ( (v4 & 0xDE) != 0 || v4 == 33 )
      return 0LL;
  }
  return result;
}
