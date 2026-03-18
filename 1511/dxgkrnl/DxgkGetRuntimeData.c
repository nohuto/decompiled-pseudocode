/*
 * XREFs of DxgkGetRuntimeData @ 0x1C0134080
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DxgkGetRuntimeData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = qword_1C00467F0;
  if ( (qword_1C00467F0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      Template_q(qword_1C00467F0, &EventProfilerEnter, a3, 2014);
      v3 = qword_1C00467F0;
    }
    if ( (v3 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v3, &EventProfilerExit, a3, 2014);
  }
  return 3221225474LL;
}
