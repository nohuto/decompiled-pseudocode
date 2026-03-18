/*
 * XREFs of MiComputeUserWorkingSetSpan @ 0x1407E7364
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiComputeUserWorkingSetSpan()
{
  unsigned __int64 v0; // rcx
  ULONG64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  ULONG64 v4; // r8
  __int64 result; // rax

  v0 = 512LL;
  v1 = (MmUserProbeAddress >> 12) + 0x10000;
  v2 = 0LL;
  v3 = 3LL;
  do
  {
    v2 += v1 / v0 + 1;
    v0 *= v0;
    --v3;
  }
  while ( v3 );
  v4 = v2 + v1;
  qword_14034EE60 = (16 * v4 - 0xA7FAF7FBD01LL) & 0xFFFFFFFFC0000000uLL | 1;
  qword_14034EE50 = ((16 * v4 - 0xA7FAF7FBD01LL) & 0xFFFFFFFFC0000000uLL) + 4096;
  result = qword_14034EE50 + 8 * v4;
  qword_14034EE58 = result;
  return result;
}
