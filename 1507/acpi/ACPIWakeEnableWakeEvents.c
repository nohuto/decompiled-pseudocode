/*
 * XREFs of ACPIWakeEnableWakeEvents @ 0x1C0042380
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0007624 (ACPIWriteGpeEnableRegister.c)
 *     READ_PM1_ENABLE @ 0x1C003FE84 (READ_PM1_ENABLE.c)
 */

void ACPIWakeEnableWakeEvents()
{
  __int64 v0; // rdi
  unsigned int v1; // r8d
  _BYTE *v2; // rdx
  _BYTE *v3; // r9
  _BYTE *v4; // r10
  __int64 v5; // rcx

  v0 = 0LL;
  AcpiPowerLeavingS0 = 0;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    v1 = 0;
    v2 = GpeWakeEnable;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      v3 = GpeCurEnable;
      v4 = GpePending;
      do
      {
        v5 = v1++;
        v3[v5] |= v2[v5] & (unsigned __int8)~v4[v5];
      }
      while ( v1 < *((unsigned __int16 *)AcpiInformation + 51) );
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          ACPIWriteGpeEnableRegister(v0, v2[v0]);
          v2 = GpeWakeEnable;
          *((_BYTE *)GpeSavedWakeMask + v0) = *((_BYTE *)GpeWakeEnable + v0);
          v0 = (unsigned int)(v0 + 1);
        }
        while ( (unsigned int)v0 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
    }
    *((_WORD *)AcpiInformation + 57) = READ_PM1_ENABLE();
  }
}
