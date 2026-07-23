/*
 * XREFs of PsGetSiloContext @ 0x14020F438
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_1403BF8D8;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
