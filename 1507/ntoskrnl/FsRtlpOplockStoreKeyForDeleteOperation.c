/*
 * XREFs of FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400709B0
 * Callers:
 *     FsRtlCheckOplock @ 0x140070070 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoGetOplockKeyContextEx @ 0x140071324 (IoGetOplockKeyContextEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 */

void __fastcall FsRtlpOplockStoreKeyForDeleteOperation(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 Oplock; // rsi
  char v7; // bl
  __int64 OplockKeyContext; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r15
  ULONG_PTR v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rbx
  ULONG_PTR v15; // rbx
  unsigned __int32 v16; // eax
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v5 = *(_QWORD *)(a2 + 184);
  Oplock = *a1;
  v17 = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6 && *(_DWORD *)(v5 + 16) == 13 && **(_BYTE **)(a2 + 24) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v11 = OplockKeyContext;
    v18 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !Oplock )
        {
          Oplock = FsRtlpAllocateOplock(v9);
          v17 = Oplock;
          *a1 = Oplock;
        }
        if ( (a3 & 0x20000000) == 0 )
        {
          v12 = *(_QWORD *)(Oplock + 152);
          CurrentThread = KeGetCurrentThread();
          v14 = KeAbPreAcquire(v12, 0LL, 0LL, v10);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v12, 0) )
            ExpAcquireFastMutexContended(v12);
          if ( v14 )
            *(_BYTE *)(v14 + 26) |= 1u;
          *(_QWORD *)(v12 + 8) = CurrentThread;
          v11 = v18;
          Oplock = v17;
        }
        v7 = 1;
        if ( !*(_QWORD *)(Oplock + 136) )
          *(_QWORD *)(Oplock + 136) = ExAllocatePoolWithTag((POOL_TYPE)273, 0x10uLL, 0x6F725346u);
        *(_OWORD *)*(_QWORD *)(Oplock + 136) = *(_OWORD *)(v11 + 4);
      }
    }
  }
  if ( v7 && (a3 & 0x20000000) == 0 )
  {
    v15 = *(_QWORD *)(Oplock + 152);
    *(_QWORD *)(v15 + 8) = 0LL;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended(v15, v16);
    KeAbPostRelease(v15);
  }
}
