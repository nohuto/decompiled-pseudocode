/*
 * XREFs of NdisIsStatusIndicationCloneable @ 0x1C0053170
 * Callers:
 *     NdisFIndicateStatus @ 0x1C001E510 (NdisFIndicateStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall NdisIsStatusIndicationCloneable(int a1)
{
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  return bsearch(
           &Key,
           &ndisCloneableStatusIndications,
           0x80uLL,
           4uLL,
           (int (__cdecl *)(const void *, const void *))ndisCompareStatusCodes) != 0LL;
}
