/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140014AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140014C98 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  unsigned int v2; // ebx

  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      v2 = CloneWaveFormat((const struct tWAVEFORMATEX *)(*((_QWORD *)this + 9) + 152LL), a2);
      if ( (v2 & 0x80000000) == 0 )
        return v2;
    }
    else
    {
      v2 = -2147467261;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v2);
  }
  return v2;
}
