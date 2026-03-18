/*
 * XREFs of HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher @ 0x1C0024F18
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0064EA8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(__int64 a1)
{
  char v1; // dl
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1616) & 0x1000) != 0 )
  {
    v2 = *(unsigned int *)(a1 + 2552);
    v3 = *(_QWORD *)(a1 + 2544);
    v4 = 0LL;
    if ( v2 )
    {
      while ( (*(_DWORD *)(v3 + 4 * v4) & 0xC000) == 0 )
      {
        if ( ++v4 >= v2 )
          return v1;
      }
      return 1;
    }
  }
  return v1;
}
