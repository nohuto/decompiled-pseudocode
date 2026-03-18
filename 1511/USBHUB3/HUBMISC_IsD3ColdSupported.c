/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C0027D88
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C000E5B0 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 a1)
{
  _DWORD *v1; // r8
  unsigned int v2; // ebx

  v1 = *(_DWORD **)(a1 + 1328);
  if ( (v1[404] & 0x8000) != 0 && (v1[405] & 0x1000) != 0 && (*(_DWORD *)(a1 + 204) & 1) == 0 && v1[611] == 4 )
  {
    v2 = 3089;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 4u, 5u, 0x69u, (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
  }
  else
  {
    return 3005;
  }
  return v2;
}
