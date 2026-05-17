/*
 * XREFs of RtlSetSecurityDescriptorRMControl @ 0x180078660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetSecurityDescriptorRMControl(__int64 a1, char *a2)
{
  char result; // al

  if ( a2 )
  {
    *(_WORD *)(a1 + 2) |= 0x4000u;
    result = *a2;
    *(_BYTE *)(a1 + 1) = *a2;
  }
  else
  {
    result = -1;
    *(_BYTE *)(a1 + 1) = 0;
    *(_WORD *)(a1 + 2) &= ~0x4000u;
  }
  return result;
}
