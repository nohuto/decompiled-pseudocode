/*
 * XREFs of MmReturnPoolQuota @ 0x1400C474C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140326568 -= a2;
  else
    qword_140326570 -= a2;
}
