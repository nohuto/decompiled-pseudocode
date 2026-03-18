/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140202030
 * Callers:
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_QWORD *)&xmmword_140329000 + 1) )
  {
    (*((void (__fastcall **)(__int64, __int64, __int64))&xmmword_140329000 + 1))(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140328940);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
