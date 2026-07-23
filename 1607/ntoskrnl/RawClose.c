/*
 * XREFs of RawClose @ 0x1403ECF90
 * Callers:
 *     RawDispatch @ 0x1403EAF28 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140007468 (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) != 0 )
  {
    Irp->IoStatus.Status = 0;
  }
  else
  {
    p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
    ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      KeReleaseGuardedMutex(p_PagingIoResource);
    Irp->IoStatus.Status = 0;
  }
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
