/*
 * XREFs of MiEmptyWsPrivatePagesCallback @ 0x1401337A8
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 */

LOGICAL __fastcall MiEmptyWsPrivatePagesCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  ULONG_PTR *SharedWorkingSetList; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  ULONG_PTR *v12; // r8
  unsigned __int64 Wsle; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rdx
  LOGICAL result; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  SharedWorkingSetList = MiGetSharedWorkingSetList(*(_QWORD *)a1);
  if ( v8 <= v9 )
  {
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v17 & 1) != 0 )
      {
        v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v17);
        if ( MiIsPfnInline(v10) )
        {
          v12 = (ULONG_PTR *)(48 * v11 - 0x58000000000LL);
          if ( (v12[5] & 0x200000000000000LL) == 0 && (v12[1] | 0x8000000000000000uLL) == a2 )
          {
            Wsle = MiLocateWsle((__int64)(a2 << 25) >> 16, v3, *v12);
            if ( Wsle >= SharedWorkingSetList[1] )
              MiEmptyWorkingSetHelper(v3, a2, Wsle, *(_DWORD **)(a1 + 16));
          }
        }
      }
      a2 += 8LL;
    }
    while ( a2 <= a3 );
  }
  v14 = *(unsigned int **)(a1 + 16);
  if ( *v14 )
  {
    MiFreeWsleList(v3, v14, 0);
    **(_DWORD **)(a1 + 16) = 0;
  }
  if ( MiWorkingSetIsContended(v3) || (result = KeShouldYieldProcessor()) != 0 )
  {
    LOBYTE(v15) = *(_BYTE *)(a1 + 8);
    return MiRelockWorkingSetExclusive(v3, v15);
  }
  return result;
}
