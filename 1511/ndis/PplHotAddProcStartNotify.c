/*
 * XREFs of PplHotAddProcStartNotify @ 0x1C006EFB4
 * Callers:
 *     ndisDmaAddCpuNotify @ 0x1C00475D8 (ndisDmaAddCpuNotify.c)
 * Callees:
 *     PplpCreateOneLookasideList @ 0x1C0021CB0 (PplpCreateOneLookasideList.c)
 *     PplpFreeOneLookasideList @ 0x1C006F0C0 (PplpFreeOneLookasideList.c)
 */

__int64 __fastcall PplHotAddProcStartNotify(int *a1, ULONG a2)
{
  int v4; // esi
  unsigned __int64 *v5; // rbp
  int v7; // edi
  int v8; // ebx
  struct _LOOKASIDE_LIST_EX *OneLookasideList; // rax
  int v10; // edi

  if ( !a2 || a2 > KeQueryMaximumProcessorCountEx(0xFFFFu) )
    return 3221225485LL;
  v4 = *a1;
  v5 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
  if ( a2 <= *a1 - 1 )
    return 0LL;
  v7 = 0;
  v8 = a2 - v4 + 1;
  if ( v8 <= 0 )
    return 0LL;
  while ( 1 )
  {
    OneLookasideList = PplpCreateOneLookasideList(
                         (PALLOCATE_FUNCTION_EX)PplGenericAllocateFunction,
                         (PFREE_FUNCTION_EX)PplGenericFreeFunction,
                         (POOL_TYPE)a1[6],
                         a1[1],
                         *((_QWORD *)a1 + 2),
                         a1[2],
                         *((_WORD *)a1 + 14),
                         a1[3],
                         *v5,
                         0);
    v5[v7 + v4] = (unsigned __int64)OneLookasideList;
    if ( !OneLookasideList )
      break;
    if ( ++v7 >= v8 )
      return 0LL;
  }
  if ( v7 - 1 >= 0 )
  {
    v10 = v4 + v7;
    do
    {
      PplpFreeOneLookasideList(v5[--v10], (unsigned int)a1[3]);
      v5[v10] = 0LL;
    }
    while ( -1 - v4 + v10 >= 0 );
  }
  return 3221225626LL;
}
