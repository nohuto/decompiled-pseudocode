/*
 * XREFs of ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180100094
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?GetChipSetInfo@@YAKXZ @ 0x180157074 (-GetChipSetInfo@@YAKXZ.c)
 *     ?MilShipAssert@@YAXKJ@Z @ 0x1801572CC (-MilShipAssert@@YAXKJ@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FilterCompositionThreadErrors(
        CPartitionVerticalBlankScheduler *this,
        int a2)
{
  ULONG_PTR v2; // rbx
  int ChipSetInfo; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  ULONG_PTR Arguments; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == -2003304293 || *((_DWORD *)this + 6282) == -2003304293 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_QPC_FAILURE);
    ChipSetInfo = GetChipSetInfo();
    MilShipAssert(v4, ChipSetInfo);
  }
  if ( (v2 & 0x80000000) != 0LL )
  {
    if ( IsOOM(v2) )
    {
      LODWORD(v2) = -2147024882;
    }
    else if ( (_DWORD)v2 != -2003304293 && (_DWORD)v2 != -2003304307 && (_DWORD)v2 != -2003304442 )
    {
      MilUnexpectedErrorWithAsimovEvent(v5, L"The render thread failed unexpectedly.");
      Arguments = v2;
      RaiseException(0xE0464645, 0xC0000025, 1u, &Arguments);
      LODWORD(v2) = -2003303418;
    }
  }
  return (unsigned int)v2;
}
