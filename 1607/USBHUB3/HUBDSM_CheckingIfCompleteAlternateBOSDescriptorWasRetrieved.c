/*
 * XREFs of HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved @ 0x1C00198F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 960) + 240LL) < (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 960) + 1718LL)
       ? 4061
       : 4089;
}
