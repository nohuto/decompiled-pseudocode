/*
 * XREFs of PopInitializeHeteroProcessors @ 0x1405B0EA0
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeConfigureHeteroProcessors @ 0x1403FA8E0 (KeConfigureHeteroProcessors.c)
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     PopConfigureHeteroProcessors @ 0x1405B0F14 (PopConfigureHeteroProcessors.c)
 */

__int64 PopInitializeHeteroProcessors()
{
  char v0; // al
  __int64 result; // rax
  _BYTE v2[176]; // [rsp+20h] [rbp-C8h] BYREF

  v0 = PopConfigureHeteroProcessors(v2);
  if ( (unsigned int)KeConfigureHeteroProcessors((_QWORD *)((unsigned __int64)v2 & -(__int64)(v0 != 0))) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  result = (unsigned int)PopHeteroSystem;
  if ( !PopHeteroSystem )
    PpmHeteroPolicy = 0;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem;
  return result;
}
