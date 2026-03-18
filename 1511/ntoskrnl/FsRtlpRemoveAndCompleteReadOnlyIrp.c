/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401AD1A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x1404C6440 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 */

__int64 __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v3 = a1 - 21;
  v5 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 48), 0x746C6644u);
  IoAcquireCancelSpinLock((PKIRQL)v3 + 69);
  _InterlockedExchange64(v3 + 13, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v3 + 69));
  v9 = *a1;
  v10 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v10 != a1 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  if ( *(_DWORD *)(v5 + 24) == 590400 )
  {
    if ( *((_BYTE *)v3 + 68) )
    {
      v3[7] = 0LL;
    }
    else
    {
      v8 = v3[3];
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_DWORD *)v8 = 1572865;
      *(_DWORD *)(v8 + 4) = 1;
      *(_DWORD *)(v8 + 8) = (a3 >> 12) & 7;
      v3[7] = 24LL;
    }
  }
  else
  {
    v3[7] = 8LL;
  }
  LOBYTE(v8) = 1;
  if ( *((_BYTE *)v3 + 68) )
    a2 = -1073741536;
  *((_DWORD *)v3 + 12) = a2;
  return pIofCompleteRequest(v3, v8);
}
