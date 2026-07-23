/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140201E5C
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_QWORD *)&xmmword_140329040 + 1) )
  {
    (*((void (__fastcall **)(__int64, __int64, __int64))&xmmword_140329040 + 1))(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140328980);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
