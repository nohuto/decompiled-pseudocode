/*
 * XREFs of StageQueue_Release @ 0x1C0002AE8
 * Callers:
 *     Bulk_Stage_Release @ 0x1C0002A7C (Bulk_Stage_Release.c)
 *     Isoch_Stage_Release @ 0x1C002BE8C (Isoch_Stage_Release.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v3; // ecx
  __int64 result; // rax

  --a1[2];
  v3 = a1[4];
  if ( a2 == &a1[v3 * *a1 + 16] )
  {
    result = (unsigned int)((v3 + 1) / a1[1]);
    a1[4] = (v3 + 1) % a1[1];
  }
  else
  {
    result = (unsigned int)((a1[1] + a1[3] - 1) / a1[1]);
    a1[3] = (a1[1] + a1[3] - 1) % a1[1];
  }
  return result;
}
