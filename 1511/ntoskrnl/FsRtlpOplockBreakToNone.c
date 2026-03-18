/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x1400F4010
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401ACDDC (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x1404C6440 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC430 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
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
  unsigned int v13; // edi
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD **v18; // rcx
  unsigned int v19; // ecx
  _QWORD *i; // rbx
  int v21; // ecx
  int v22; // ecx
  char v24[32]; // [rsp+40h] [rbp-48h] BYREF

  v13 = 0;
  if ( !a1 )
    return v13;
  v14 = *((_DWORD *)a1 + 36);
  if ( v14 == 1 || (v14 & 0x6000) != 0 )
    return v13;
  if ( (v14 & 0x1F00F90) == 0 )
  {
    v15 = *a1;
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
      return v13;
    }
    *(_QWORD *)(*a1 + 56LL) = 8LL;
    *(_DWORD *)(*a1 + 48LL) = 0;
    LOBYTE(v16) = 1;
    pIofCompleteRequest(*a1, v16);
    *a1 = 0LL;
    *((_DWORD *)a1 + 36) |= 0x200u;
    goto LABEL_22;
  }
  if ( (((v14 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v19 = v14 & 0xFFFFFEFF;
      *((_DWORD *)a1 + 36) = v19;
      *((_DWORD *)a1 + 36) = v19 | 0x400;
      goto LABEL_22;
    }
    if ( (v14 & 0x80u) == 0 )
    {
LABEL_22:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], 0) )
        return v13;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        FsRtlpModifyThreadPriorities((__int64)a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination((__int64)a1, 0LL);
        *a8 = 0;
        return (unsigned int)FsRtlpWaitOnIrp((__int64)a1, a3, a5, a6, a7, v24, 0, a9);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *((_DWORD *)a1 + 36) = v14 & 0x20 | 1;
    a1[1] = 0LL;
    if ( a1[3] )
    {
      FsRtlpClearOwnerThread((__int64)a1, 0LL);
      *((_BYTE *)a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = (_QWORD *)a1[5]; i != a1 + 5; i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0);
      }
    }
    v21 = a1[18] & 0x20;
    if ( (a1[18] & 0x1F0FFDF) == 0x1010 )
      v22 = v21 | 0x1000;
    else
      v22 = v21 | 1;
    *((_DWORD *)a1 + 36) = v22;
  }
  return v13;
}
