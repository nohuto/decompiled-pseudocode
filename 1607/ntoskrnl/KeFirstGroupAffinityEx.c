/*
 * XREFs of KeFirstGroupAffinityEx @ 0x1400ABFF8
 * Callers:
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x14014A0B8 (KeSetAffinityProcess.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A4B0 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(_QWORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  __int64 result; // rax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_WORD *)a1 + 4) = v2;
  result = 0LL;
  *a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return result;
}
