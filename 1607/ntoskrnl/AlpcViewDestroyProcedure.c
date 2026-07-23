/*
 * XREFs of AlpcViewDestroyProcedure @ 0x14042A038
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 *     AlpcpRemoveResourcePort @ 0x14042A214 (AlpcpRemoveResourcePort.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x1404EEAA0 (AlpcpRestoreWriteAccess.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
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
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  _BYTE v14[48]; // [rsp+20h] [rbp-48h] BYREF

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
      KiStackAttachProcess(v7, 0, (__int64)v14);
    v8 = *(void **)(a1 + 56);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0LL);
    if ( Process != *(_KPROCESS **)(a1 + 32) )
      KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 1616LL);
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      v11[26] |= 1u;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v12 = *(_QWORD *)(a1 + 32);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1616), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1616));
    KeAbPostRelease(v12 + 1616);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
