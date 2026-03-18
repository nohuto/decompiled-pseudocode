/*
 * XREFs of ObpUnlockDirectory @ 0x1400428A0
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040F380 (ObpLookupDirectoryUsingHash.c)
 *     NtQueryDirectoryObject @ 0x14043A290 (NtQueryDirectoryObject.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  void *v6; // rcx

  v3 = (volatile signed __int64 *)(a1 + 296);
  _m_prefetchw((const void *)(a1 + 296));
  v4 = *(_QWORD *)(a1 + 296);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v4 - 16;
  else
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v5, v4) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v6 = *(void **)a2;
  *(_DWORD *)(a2 + 32) = -286387660;
  ObfDereferenceObject(v6);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
