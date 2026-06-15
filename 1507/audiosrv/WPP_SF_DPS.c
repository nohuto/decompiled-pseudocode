/*
 * XREFs of WPP_SF_DPS @ 0x18009E064
 * Callers:
 *     ServiceDeviceEvent @ 0x18009DD20 (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DPS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, _WORD *a6)
{
  __int64 v7; // rcx
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  if ( a6 && *a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_908455377377748732ca9cb03e87474b_Traceguids, 24LL, &v9);
}
