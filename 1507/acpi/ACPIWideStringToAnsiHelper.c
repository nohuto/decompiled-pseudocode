/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x1C001D534
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x1C001D0E0 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C001D420 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C001D47C (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C001D4D8 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToHardwareID @ 0x1C003BA78 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToString @ 0x1C003BB94 (ACPIGetConvertToString.c)
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
