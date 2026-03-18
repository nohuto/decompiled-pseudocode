/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1401BAE40
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14067638C (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x140676464 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14067659C (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1401BB968 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1, a2, a3, a4)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
