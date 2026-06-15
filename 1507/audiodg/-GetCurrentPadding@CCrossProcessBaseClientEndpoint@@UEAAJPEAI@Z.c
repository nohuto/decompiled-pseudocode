/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x1400399C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039AC0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCurrentPadding(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 80, 1, 1) )
    {
      CCrossProcessBaseEndpoint::GetCurrentPadding((CCrossProcessBaseClientEndpoint *)((char *)this - 368), &v6, 0LL);
      *a2 = (int)((double)(int)(*(_DWORD *)(*((_QWORD *)this - 38) + 160LL)
                              / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this - 38) + 164LL))
                * (double)(int)v6
                / 10000000.0
                + 0.5);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x1Bu,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      v2);
  }
  return v2;
}
