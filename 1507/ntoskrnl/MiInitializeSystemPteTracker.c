/*
 * XREFs of MiInitializeSystemPteTracker @ 0x1407E2C50
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 * Callees:
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  InitializeSListHead(&stru_14034F4C0);
  qword_14034F4D0 = 0LL;
  result = &unk_140350058;
  v1 = 16LL;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
