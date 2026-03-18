/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C001B980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned __int16 v3; // r9
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4065;
  if ( *(_DWORD *)(v1 + 240) == 10 )
  {
    if ( *(_DWORD *)(v1 + 1716) >= 0xAu )
    {
      if ( *(_WORD *)(v1 + 1720) == 256 )
      {
        if ( *(_WORD *)(v1 + 1722) == 5 )
        {
          if ( *(_WORD *)(v1 + 1724) )
            return 4077;
          v3 = 65;
        }
        else
        {
          v3 = 64;
        }
      }
      else
      {
        v3 = 63;
      }
    }
    else
    {
      v3 = 62;
    }
  }
  else
  {
    v3 = 61;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
    2u,
    5u,
    v3,
    (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    Template_p(
      v4,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR_HEADER,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  return v2;
}
