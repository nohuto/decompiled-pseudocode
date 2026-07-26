/*
 * XREFs of ndisPMPatternIdExist @ 0x1C00B20A4
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0099AD8 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00CB6A8 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisPMPatternIdExist(__int64 **a1, int a2)
{
  __int64 *i; // rax

  for ( i = *a1; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) == a2 )
    {
      LOBYTE(i) = 1;
      return (char)i;
    }
  }
  return (char)i;
}
