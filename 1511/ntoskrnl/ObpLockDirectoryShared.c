/*
 * XREFs of ObpLockDirectoryShared @ 0x1400429F0
 * Callers:
 *     ObpLookupDirectoryUsingHash @ 0x14040F380 (ObpLookupDirectoryUsingHash.c)
 *     NtQueryDirectoryObject @ 0x14043A290 (NtQueryDirectoryObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

LONG_PTR __fastcall ObpLockDirectoryShared(__int64 a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  LONG_PTR result; // rax

  *(_DWORD *)(a1 + 32) = -1145368012;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)(a2 + 37));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 37, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a2 + 37, v5, (ULONG_PTR)(a2 + 37));
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  *(_DWORD *)(a1 + 32) = -572714444;
  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 1;
  return result;
}
