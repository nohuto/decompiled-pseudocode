/*
 * XREFs of IsPTPInputEnabled @ 0x1C01C93F0
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
    return (qword_1C03281F0 & 0x800000000LL) != 0;
  return v0;
}
