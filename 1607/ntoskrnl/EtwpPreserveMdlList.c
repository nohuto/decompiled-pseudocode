/*
 * XREFs of EtwpPreserveMdlList @ 0x1406AA1E4
 * Callers:
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 * Callees:
 *     KsrMdlToMemoryRuns_0 @ 0x140001290 (KsrMdlToMemoryRuns_0.c)
 *     KsrPersistMemoryWithMetadata_0 @ 0x140001298 (KsrPersistMemoryWithMetadata_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveMdlList(_QWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // ebx
  _QWORD *v3; // rdi
  char *PoolWithTag; // rax
  void *v5; // rdi
  unsigned int v6; // ebx
  char *v7; // r14
  unsigned int v8; // ebp
  unsigned int v10; // [rsp+60h] [rbp+8h]

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    KsrMdlToMemoryRuns_0();
    v2 += v10;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 );
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v2, 0x4B777445u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = PoolWithTag;
    v8 = v2;
    while ( v1 )
    {
      KsrMdlToMemoryRuns_0();
      v8 -= v10;
      v1 = (_QWORD *)*v1;
      v7 += 8 * v10;
    }
    v6 = KsrPersistMemoryWithMetadata_0();
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
