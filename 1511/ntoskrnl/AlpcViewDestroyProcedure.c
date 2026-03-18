/*
 * XREFs of AlpcViewDestroyProcedure @ 0x1403F4818
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AlpcpRemoveResourcePort @ 0x1403F4AAC (AlpcpRemoveResourcePort.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1404AAD84 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // rdi
  _KPROCESS *Process; // rbp
  int v5; // ecx
  int v6; // eax
  _KPROCESS *v7; // rcx
  void *v8; // rcx
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  $D4FCF91253F76F57393CBFE908971F67 v14; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v2 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = --*(_DWORD *)(v2 + 52);
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v2 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v2 + 80) = 0LL;
        v1 = *(_QWORD *)(v2 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v2 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v2 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v2);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    v7 = *(_KPROCESS **)(a1 + 32);
    if ( Process != v7 )
      KiStackAttachProcess(v7, 0LL, (__int64)&v14);
    v8 = *(void **)(a1 + 56);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0LL);
    if ( Process != *(_KPROCESS **)(a1 + 32) )
      KiUnstackDetachProcess(&v14, 0LL);
    if ( v1 )
      AlpcpDereferenceBlobEx(v1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 1600LL);
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v12 = *(_QWORD *)(a1 + 32);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1600), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1600));
    KeAbPostRelease(v12 + 1600);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
