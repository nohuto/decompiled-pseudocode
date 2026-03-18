/*
 * XREFs of MmReturnPoolQuota @ 0x140012E68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_1402FE268 -= a2;
  else
    qword_1402FE270 -= a2;
}
