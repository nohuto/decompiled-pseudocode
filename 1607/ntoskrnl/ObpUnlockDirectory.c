/*
 * XREFs of ObpUnlockDirectory @ 0x14008BA30
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14040CEF0 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040D044 (ObpLookupDirectoryUsingHash.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     NtQueryDirectoryObject @ 0x1404B0580 (NtQueryDirectoryObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
