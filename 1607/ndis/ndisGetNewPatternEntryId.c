/*
 * XREFs of ndisGetNewPatternEntryId @ 0x1C00B12F4
 * Callers:
 *     ndisMiniportPreAddWoLPattern @ 0x1C00B0E54 (ndisMiniportPreAddWoLPattern.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00C83E4 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00CA460 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(__int64 **a1)
{
  __int64 *v1; // rdx
  unsigned int i; // r8d
  unsigned int v4; // ecx

  v1 = *a1;
  for ( i = 0; v1; i = v4 )
  {
    v4 = *((_DWORD *)v1 + 10);
    if ( v4 > i + 1 )
      break;
    v1 = (__int64 *)*v1;
  }
  return i + 1;
}
