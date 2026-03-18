/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x1C001E3C0
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x1C001DF6C (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C001E2AC (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C001E308 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C001E364 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToHardwareID @ 0x1C003BE08 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToString @ 0x1C003BF24 (ACPIGetConvertToString.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // r10
  char result; // al

  if ( a1 && a2 > 2 )
  {
    v2 = 0LL;
    v3 = a2 >> 1;
    if ( (_DWORD)v3 )
    {
      v4 = a1;
      v2 = (unsigned int)v3;
      v5 = a1;
      do
      {
        result = *v5;
        v5 += 2;
        *v4++ = result;
        --v3;
      }
      while ( v3 );
    }
    a1[v2] = 0;
  }
  return result;
}
