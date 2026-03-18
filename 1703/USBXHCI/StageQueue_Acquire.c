/*
 * XREFs of StageQueue_Acquire @ 0x1C0001678
 * Callers:
 *     Bulk_Stage_Acquire @ 0x1C00015F4 (Bulk_Stage_Acquire.c)
 *     Isoch_Stage_Acquire @ 0x1C0028B68 (Isoch_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Acquire(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned __int8 v2; // r11
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // r10

  v1 = a1[2];
  v2 = a1[1];
  if ( v1 == v2 )
    return 0LL;
  v3 = a1[3];
  v4 = *a1;
  a1[2] = v1 + 1;
  v5 = (__int64)&a1[v4 * v3 + 16];
  a1[3] = (v3 + 1) % v2;
  return v5;
}
