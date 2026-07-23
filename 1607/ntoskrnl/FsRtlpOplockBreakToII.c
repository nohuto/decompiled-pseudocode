/*
 * XREFs of FsRtlpOplockBreakToII @ 0x14007B80C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AACBC (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // r14
  int v15; // ebx
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  _BYTE v20[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 144) & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
      return v12;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v13 = *(_DWORD *)(a1 + 144);
  if ( (v13 & 0x1F00F80) != 0 )
  {
    if ( (v13 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v12;
    }
    goto LABEL_20;
  }
  v14 = *(_QWORD *)a1;
  IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
  _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
  v15 = 7;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
  if ( !*(_BYTE *)(v14 + 68) )
  {
    v17 = *(_DWORD *)(a1 + 144);
    if ( (v17 & 6) != 0 )
    {
      v18 = v17 | 0x100;
    }
    else
    {
      v18 = v17 | 0x200;
      v15 = 8;
    }
    *(_DWORD *)(a1 + 144) = v18;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v15;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    pIofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a5, a6, a7, v20, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0);
  FsRtlpClearOwner(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
  pIofCompleteRequest(*(PIRP *)a1, 1);
  *(_QWORD *)a1 = 0LL;
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  while ( 1 )
  {
    v16 = (_QWORD *)(a1 + 88);
    if ( (_QWORD *)*v16 == v16 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(*v16);
  }
  return v12;
}
