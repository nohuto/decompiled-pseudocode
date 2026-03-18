/*
 * XREFs of itrp_FindIDef @ 0x1C02DCC60
 * Callers:
 *     itrp_IDEF @ 0x1C02DCC90 (itrp_IDEF.c)
 *     itrp_IDefPatch @ 0x1C02DCE80 (itrp_IDefPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_FindIDef(char a1)
{
  __int64 v1; // rdx
  int v2; // r8d

  v1 = *(_QWORD *)(qword_1C0323160 + 168);
  v2 = *(_DWORD *)(qword_1C0323160 + 336);
  while ( 1 )
  {
    if ( --v2 < 0 )
      return 0LL;
    if ( *(_BYTE *)(v1 + 7) == a1 )
      break;
    v1 += 8LL;
  }
  return v1;
}
