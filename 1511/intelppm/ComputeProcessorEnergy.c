/*
 * XREFs of ComputeProcessorEnergy @ 0x1C00023B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 result; // rax

  result = 10
         * a2
         * a4
         * (unsigned __int64)LODWORD(Globals[27 * a1 + 164])
         / (qword_1C000E3C8
          * (unsigned __int64)*((unsigned int *)&Globals[163] + a1));
  *a5 = result;
  return result;
}
