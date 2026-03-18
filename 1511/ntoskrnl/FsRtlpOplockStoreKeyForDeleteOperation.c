/*
 * XREFs of FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckOplock @ 0x1400378A0 (FsRtlCheckOplock.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     IoGetOplockKeyContextEx @ 0x1400CC128 (IoGetOplockKeyContextEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x14048F084 (FsRtlpAllocateOplock.c)
 */

void __fastcall FsRtlpOplockStoreKeyForDeleteOperation(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 Oplock; // rsi
  char v7; // bl
  __int64 OplockKeyContext; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15

  v5 = *(_QWORD *)(a2 + 184);
  Oplock = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6 && *(_DWORD *)(v5 + 16) == 13 && **(_BYTE **)(a2 + 24) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v11 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !Oplock )
        {
          Oplock = FsRtlpAllocateOplock(v10, v9);
          *a1 = Oplock;
        }
        if ( (a3 & 0x20000000) == 0 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
        v7 = 1;
        if ( !*(_QWORD *)(Oplock + 136) )
          *(_QWORD *)(Oplock + 136) = ExAllocatePoolWithTag((POOL_TYPE)273, 0x10uLL, 0x6F725346u);
        *(_OWORD *)*(_QWORD *)(Oplock + 136) = *(_OWORD *)(v11 + 4);
      }
    }
  }
  if ( v7 )
  {
    if ( (a3 & 0x20000000) == 0 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  }
}
