/*
 * XREFs of FsRtlpGrantAnyOplockFromExclusive @ 0x1401AD32C
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 */

__int64 __fastcall FsRtlpGrantAnyOplockFromExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _BYTE *a9,
        unsigned int a10)
{
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char v18; // bp
  __int64 v19; // r8
  _QWORD *v20; // rax
  unsigned int v21; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = a1;
  v12 = a2;
  v13 = a1;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v15 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(v14 + 12) |= 1u;
    v16 = (v15 >> 12) & 7;
    *(_DWORD *)(v14 + 4) = v16;
    LOBYTE(v16) = 1;
    *(_DWORD *)(v14 + 8) = (a4 >> 12) & 5;
    *(_QWORD *)(v12 + 56) = 24LL;
    *(_DWORD *)(v12 + 48) = -2147483602;
    pIofCompleteRequest(v12, v16);
    return 2147483694LL;
  }
  v18 = a6;
  if ( a6 )
  {
    a2 = a7;
    *(_QWORD *)(*(_QWORD *)a7 + 16LL) = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(a1 + 104);
    v20 = *(_QWORD **)a2;
    *v20 = v19;
    v20[1] = a1 + 104;
    if ( *(_QWORD *)(v19 + 8) != a1 + 104 )
      __fastfail(3u);
    *(_QWORD *)(v19 + 8) = v20;
    *(_QWORD *)(a1 + 104) = v20;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    *a8 = 1;
    if ( !a4 )
    {
      *a9 = 1;
      goto LABEL_14;
    }
    if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
      *(_QWORD *)(a1 + 8) = 0LL;
  }
  if ( a4 )
  {
    if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
    {
      v21 = FsRtlpRequestShareableOplock(&v23, a3, v12, a4, a5, v18, 1, a10);
    }
    else
    {
      *(_QWORD *)a1 = v12;
      v21 = 259;
      *(_BYTE *)(*(_QWORD *)(v12 + 184) + 3LL) |= 1u;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v23 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v13 = v23;
      *(_QWORD *)(v23 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v13 + 32) = 0;
      if ( v18 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 48);
      }
      *(_DWORD *)(v13 + 144) = a4 | *(_DWORD *)(v13 + 144) & 0x20 | 0x40;
      IoAcquireCancelSpinLock((PKIRQL)(v12 + 69));
      if ( *(_BYTE *)(v12 + 68) )
      {
        FsRtlpCancelExclusiveIrp(v12, 1, v18 == 0);
        goto LABEL_23;
      }
      _InterlockedExchange64((volatile __int64 *)(v12 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
    }
    v13 = v23;
    goto LABEL_23;
  }
LABEL_14:
  v21 = 0;
  LOBYTE(a2) = 1;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  *(_DWORD *)(v12 + 48) = 0;
  pIofCompleteRequest(v12, a2);
LABEL_23:
  if ( v18 )
    *(_DWORD *)(v13 + 144) |= 0x1000000u;
  return v21;
}
