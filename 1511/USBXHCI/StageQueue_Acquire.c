/*
 * XREFs of StageQueue_Acquire @ 0x1C0003C90
 * Callers:
 *     Bulk_Stage_Acquire @ 0x1C0003C10 (Bulk_Stage_Acquire.c)
 *     Isoch_Stage_Acquire @ 0x1C002BCC8 (Isoch_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Acquire(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned __int8 v3; // r10
  int v4; // ecx
  int v5; // eax
  __int64 v6; // r9

  v1 = a1[2];
  v3 = a1[1];
  if ( v1 == v3 )
    return 0LL;
  v4 = a1[3];
  v5 = v4 * *a1;
  a1[2] = v1 + 1;
  v6 = (__int64)&a1[v5 + 16];
  a1[3] = (v4 + 1) % v3;
  return v6;
}
