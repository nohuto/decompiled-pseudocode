/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x14003A530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

void __fastcall CCrossProcessBaseEndpoint::ProcessingComplete(CCrossProcessBaseEndpoint *this)
{
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xCu,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids);
  }
}
