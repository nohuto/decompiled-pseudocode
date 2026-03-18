/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1400EAD5C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x1404C6440 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC430 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64),
        _BYTE *a8,
        _BYTE *a9)
{
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD **v18; // rcx
  int v19; // eax
  int v20; // eax
  char v22[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (a1[18] & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], 0) )
      return v12;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v13 = *((_DWORD *)a1 + 36);
  if ( (v13 & 0x1F00F80) != 0 )
  {
    if ( (v13 & 0x80u) != 0 )
    {
      *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
      a1[1] = 0LL;
      return v12;
    }
    goto LABEL_20;
  }
  v14 = *a1;
  IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
  _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
  v15 = 7;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
  if ( !*(_BYTE *)(v14 + 68) )
  {
    v19 = *((_DWORD *)a1 + 36);
    if ( (v19 & 6) != 0 )
    {
      v20 = v19 | 0x100;
    }
    else
    {
      v20 = v19 | 0x200;
      v15 = 8;
    }
    *((_DWORD *)a1 + 36) = v20;
    *(_QWORD *)(*a1 + 56LL) = v15;
    *(_DWORD *)(*a1 + 48LL) = 0;
    LOBYTE(v16) = 1;
    pIofCompleteRequest(*a1, v16);
    *a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpModifyThreadPriorities((__int64)a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination((__int64)a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp((__int64)a1, a3, a5, a6, a7, v22, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities((__int64)a1, 0LL, 0);
  FsRtlpClearOwnerThread((__int64)a1, 0LL);
  *((_BYTE *)a1 + 32) = 0;
  if ( *(_QWORD **)(*a1 + 56LL) == a1 )
    *(_QWORD *)(*a1 + 56LL) = 0LL;
  *(_DWORD *)(*a1 + 48LL) = -1073741536;
  LOBYTE(v17) = 1;
  pIofCompleteRequest(*a1, v17);
  *a1 = 0LL;
  ObfDereferenceObjectWithTag((PVOID)a1[1], 0x746C6644u);
  a1[1] = 0LL;
  *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
  while ( 1 )
  {
    v18 = (_QWORD **)(a1 + 11);
    if ( *v18 == v18 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(*v18);
  }
  return v12;
}
