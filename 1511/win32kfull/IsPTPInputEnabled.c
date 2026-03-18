/*
 * XREFs of IsPTPInputEnabled @ 0x1C01D16A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (qword_1C0322020 & 0x800000000LL) != 0;
  return v0;
}
