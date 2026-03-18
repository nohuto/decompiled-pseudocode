/*
 * XREFs of GetColorManagementCapsWrap @ 0x1C0109420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorManagementCapsWrap(_DWORD *a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  if ( (a1[14] & 1) != 0 && (a1[533] == 3 || (a1[538] & 0x10) != 0) )
    v1 = 2;
  v2 = a1[462];
  if ( (v2 & 0x4000000) != 0 )
    v1 |= 4u;
  if ( (v2 & 0x2000000) != 0 )
    v1 |= 1u;
  return v1;
}
