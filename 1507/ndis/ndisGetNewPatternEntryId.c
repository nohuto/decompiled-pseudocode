/*
 * XREFs of ndisGetNewPatternEntryId @ 0x1C009A3E4
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0099AD8 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00CB6A8 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(__int64 **a1)
{
  __int64 *v1; // rdx
  unsigned int i; // r8d
  unsigned int v3; // ecx

  v1 = *a1;
  for ( i = 0; v1; i = v3 )
  {
    v3 = *((_DWORD *)v1 + 10);
    if ( v3 > i + 1 )
      break;
    v1 = (__int64 *)*v1;
  }
  return i + 1;
}
