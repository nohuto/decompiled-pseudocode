/*
 * XREFs of RawClose @ 0x14040BBD8
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3, __int64 a4)
{
  _ERESOURCE **p_PagingIoResource; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v10; // bp
  signed __int32 v11; // eax

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) != 0 )
  {
    Irp->IoStatus.Status = 0;
  }
  else
  {
    p_PagingIoResource = &AdvancedHeader[2].PagingIoResource;
    v7 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader[2].PagingIoResource, 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)p_PagingIoResource, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)p_PagingIoResource, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    p_PagingIoResource[1] = (_ERESOURCE *)KeGetCurrentThread();
    *((_DWORD *)p_PagingIoResource + 12) = CurrentIrql;
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
    {
      p_PagingIoResource[1] = 0LL;
      v10 = *((_BYTE *)p_PagingIoResource + 48);
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)p_PagingIoResource, 1, 0);
      if ( v11 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)p_PagingIoResource, v11);
      __writecr8(v10);
      KeAbPostRelease((ULONG_PTR)p_PagingIoResource);
    }
    Irp->IoStatus.Status = 0;
  }
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
