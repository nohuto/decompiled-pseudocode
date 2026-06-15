/*
 * XREFs of ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x140039D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetLatency(CCrossProcessBaseEndpoint *this, __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      *a2 = *((_QWORD *)this + 18);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xDu,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      v2);
  }
  return v2;
}
