/*
 * XREFs of MiCheckSessionPoolAllocations @ 0x140532308
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 MiCheckSessionPoolAllocations()
{
  __int64 v0; // rax
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 i; // r8
  void *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 *v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v10 = qword_140326958 + 0x2000;
  v0 = 204LL;
  if ( _BitScanReverse64((unsigned __int64 *)&v2, 0xCCuLL) )
    v0 = 1LL << v2;
  v11 = v0;
  v3 = &v11;
  v4 = 2LL;
  v5 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v12 = (unsigned __int64 *)v5[1007];
  v13 = v5[1008];
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
  if ( v12 )
  {
    MiFreePoolPages(v12, 40 * v13);
    v5[1007] = 0LL;
    v5[1008] = 0LL;
  }
  v8 = (void *)v5[1009];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    v5[1009] = 0LL;
  }
  return MiDeleteLeakedSessionPool(v8, v3);
}
