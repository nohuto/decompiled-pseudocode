/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x1406AA744
 * Callers:
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 * Callees:
 *     KsrEnumeratePersistedMemory_0 @ 0x1400012B0 (KsrEnumeratePersistedMemory_0.c)
 *     KsrQueryMetadata_0 @ 0x1400012B8 (KsrQueryMetadata_0.c)
 *     KsrFreePersistedMemory_0 @ 0x1400012C0 (KsrFreePersistedMemory_0.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 */

void __fastcall EtwpSavePersistedLoggersWorker(void *a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int Metadata_0; // eax
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF
  char *v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1208uLL, 0x4B777445u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *PoolWithTag = 0;
  v3 = KsrEnumeratePersistedMemory_0();
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
    {
      v7 = &v8;
      Metadata_0 = KsrQueryMetadata_0();
      if ( Metadata_0 >= 0 )
        EtwpSavePersistedLogger(v2 + 130, *(_QWORD *)&v2[2 * i + 2]);
      else
        v3 = Metadata_0;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
LABEL_11:
    KsrFreePersistedMemory_0();
  EtwpLoggerSaveInProgress = 0;
  _InterlockedOr(v6, 0);
  if ( EtwpLoggerSaveEvent )
    ExfUnblockPushLock(&EtwpLoggerSaveEvent, 0LL);
}
