/*
 * XREFs of HUBPDO_IsLanguageSupported @ 0x1C00136F4
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C001374C (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried @ 0x1C001A710 (HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBPDO_IsLanguageSupported(__int64 a1, __int16 a2)
{
  _BYTE *v2; // r8
  char result; // al
  unsigned int v5; // r9d
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int16 v8; // r10

  v2 = *(_BYTE **)(a1 + 2008);
  result = 0;
  if ( v2 )
  {
    if ( *v2 > 2u )
    {
      v5 = 0;
      v6 = ((unsigned __int64)(unsigned __int8)*v2 - 2) >> 1;
      if ( (_DWORD)v6 )
      {
        v7 = 0LL;
        do
        {
          v8 = *(_WORD *)&v2[v7 + 2];
          if ( !v8 )
            break;
          if ( v8 == a2 )
            return 1;
          ++v5;
          v7 += 2LL;
        }
        while ( v5 < (unsigned int)v6 );
      }
    }
  }
  return result;
}
