/*
 * XREFs of StageQueue_Acquire @ 0x1C001FE14
 * Callers:
 *     Isoch_Stage_Acquire @ 0x1C0026754 (Isoch_Stage_Acquire.c)
 *     Bulk_Stage_Acquire @ 0x1C002B9B0 (Bulk_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Acquire(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned __int8 v3; // r10
  __int64 v4; // r9
  int v5; // ecx
  int v6; // eax

  v1 = a1[2];
  v3 = a1[1];
  if ( v1 == v3 )
    return 0LL;
  v5 = a1[3];
  v6 = v5 * *a1;
  a1[2] = v1 + 1;
  v4 = (__int64)&a1[v6 + 16];
  a1[3] = (v5 + 1) % v3;
  return v4;
}
