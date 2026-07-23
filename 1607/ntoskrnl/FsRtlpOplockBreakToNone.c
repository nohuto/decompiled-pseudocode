/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x1400B3464
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401B908C (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AACBC (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64),
        _BYTE *a8,
        _BYTE *a9)
{
  unsigned int v13; // edi
  int v14; // ecx
  __int64 v15; // r15
  _QWORD **v16; // rcx
  unsigned int v17; // ecx
  __int64 *i; // rbx
  int v19; // ecx
  int v20; // ecx
  char v22[32]; // [rsp+40h] [rbp-48h] BYREF

  v13 = 0;
  if ( !a1 )
    return v13;
  v14 = *(_DWORD *)(a1 + 144);
  if ( v14 == 1 || (v14 & 0x6000) != 0 )
    return v13;
  if ( (v14 & 0x1F00F90) == 0 )
  {
    v15 = *(_QWORD *)a1;
    if ( (v14 & 0x1000) != 0 )
      return v13;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    IoAcquireCancelSpinLock((PKIRQL)(v15 + 69));
    _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
    if ( *(_BYTE *)(v15 + 68) )
    {
      *(_QWORD *)(v15 + 56) = 8LL;
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
        v16 = (_QWORD **)(a1 + 88);
        if ( *v16 == v16 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v16);
      }
      return v13;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    pIofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_22;
  }
  if ( (((v14 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v17 = v14 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v17;
      *(_DWORD *)(a1 + 144) = v17 | 0x400;
      goto LABEL_22;
    }
    if ( (v14 & 0x80u) == 0 )
    {
LABEL_22:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v13;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a8 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a5, a6, a7, v22, 0, a9);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = v14 & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)(a1 + 40); i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24) != 590400 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0);
      }
    }
    v19 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v20 = v19 | 0x1000;
    else
      v20 = v19 | 1;
    *(_DWORD *)(a1 + 144) = v20;
  }
  return v13;
}
