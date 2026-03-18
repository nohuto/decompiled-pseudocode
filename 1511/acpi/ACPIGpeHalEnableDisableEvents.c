/*
 * XREFs of ACPIGpeHalEnableDisableEvents @ 0x1C003C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C0007618 (ACPIReadGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00080FC (ACPIGpeEnableDisableEvents.c)
 *     READ_PM1_STATUS @ 0x1C001B6F0 (READ_PM1_STATUS.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

void *__fastcall ACPIGpeHalEnableDisableEvents(char a1)
{
  void *result; // rax
  __int64 v2; // rbx
  __int16 v4; // ax
  __int64 v5; // rdx
  PVOID v6; // rcx

  result = AcpiInformation;
  v2 = 0LL;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( a1 )
    {
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          *((_BYTE *)GpeSavedWakeStatus + v2) = ACPIReadGpeStatusRegister(v2);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
      v4 = READ_PM1_STATUS();
      AcpiPowerSavedGpeBitsValid = 1;
      *((_WORD *)AcpiInformation + 58) = v4;
    }
    else
    {
      v6 = GpeSavedWakeMask;
      *((_WORD *)AcpiInformation + 57) = 0;
      memset(v6, 0, *((unsigned __int16 *)AcpiInformation + 51));
    }
    return ACPIGpeEnableDisableEvents(a1, v5);
  }
  return result;
}
