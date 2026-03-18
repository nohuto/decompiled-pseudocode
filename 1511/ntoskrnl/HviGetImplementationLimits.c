/*
 * XREFs of HviGetImplementationLimits @ 0x140217DE4
 * Callers:
 *     HvlpSelectLpSet @ 0x1401AF638 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401AFA78 (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 *     KiPerformGroupConfiguration @ 0x140763928 (KiPerformGroupConfiguration.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401370B8 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
