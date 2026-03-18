/*
 * XREFs of MmReturnPoolQuota @ 0x1401255F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_14034E720 -= a2;
  else
    qword_14034E728 -= a2;
}
