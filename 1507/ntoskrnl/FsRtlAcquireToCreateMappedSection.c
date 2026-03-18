/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x1404B31B8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(struct _FILE_OBJECT *a1, char a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // ebp
  __int64 v7; // r9
  _QWORD *FsContext; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR v14; // rbx
  unsigned __int8 v15; // di
  signed __int32 v16; // eax

  *a3 = 0;
  *a4 = 0;
  v6 = FsRtlAcquireFileExclusiveCommon(a1);
  if ( v6 >= 0 && (a2 & 0x44) != 0 )
  {
    FsContext = a1->FsContext;
    if ( FsContext )
    {
      v10 = FsContext[6];
      v11 = KeAbPreAcquire(v10, 0LL, 0LL, v7);
      v12 = v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v10, 0) )
        ExpAcquireFastMutexContended(v10, v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v10 + 48) = CurrentIrql;
      *((_BYTE *)FsContext + 6) |= 0x10u;
      v14 = FsContext[6];
      *(_QWORD *)(v14 + 8) = 0LL;
      v15 = *(_BYTE *)(v14 + 48);
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
      if ( v16 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v14, v16);
      __writecr8(v15);
      KeAbPostRelease(v14);
    }
  }
  return (unsigned int)v6;
}
