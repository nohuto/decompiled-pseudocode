/*
 * XREFs of MiCheckSessionPoolAllocations @ 0x140567CD4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 MiCheckSessionPoolAllocations()
{
  __int64 v0; // rax
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // r9
  ULONG_PTR *v5; // rbx
  __int64 v6; // rcx
  __int64 i; // r8
  void *v8; // rcx
  unsigned __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h]
  ULONG_PTR v13; // [rsp+38h] [rbp-10h]

  v10 = 0xFFFFF90000002000uLL;
  v0 = 204LL;
  if ( _BitScanReverse64((unsigned __int64 *)&v2, 0xCCuLL) )
    v0 = 1LL << v2;
  v11 = v0;
  v3 = &v11;
  v4 = 2LL;
  v5 = (ULONG_PTR *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  BugCheckParameter2 = v5[990];
  v13 = v5[991];
  do
  {
    v6 = *(v3 - 1);
    if ( v6 )
    {
      for ( i = *v3; i; --i )
        v6 += 40LL;
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  if ( BugCheckParameter2 )
  {
    MiFreePoolPages((_SLIST_ENTRY *)BugCheckParameter2, 40 * v13, 0);
    v5[990] = 0LL;
    v5[991] = 0LL;
  }
  v8 = (void *)v5[992];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    v5[992] = 0LL;
  }
  return MiDeleteLeakedSessionPool(v8, v3);
}
