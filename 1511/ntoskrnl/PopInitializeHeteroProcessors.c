/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140537684
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeConfigureHeteroProcessors @ 0x1403AA258 (KeConfigureHeteroProcessors.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 *     PopConfigureHeteroProcessors @ 0x1405376F8 (PopConfigureHeteroProcessors.c)
 */

__int64 PopInitializeHeteroProcessors()
{
  char v0; // al
  __int64 result; // rax
  _BYTE v2[176]; // [rsp+20h] [rbp-C8h] BYREF

  v0 = PopConfigureHeteroProcessors(v2);
  if ( (unsigned int)KeConfigureHeteroProcessors((_QWORD *)((unsigned __int64)v2 & -(__int64)(v0 != 0))) )
    PsEnumProcesses((__int64 (__fastcall *)(unsigned __int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  result = (unsigned int)PopHeteroSystem;
  if ( !PopHeteroSystem )
    PpmHeteroPolicy = 0;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem;
  return result;
}
