/*
 * XREFs of ObpReleaseLookupContext @ 0x14009C320
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  signed __int64 *v2; // rdi
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  signed __int64 v5; // rtt
  void *v6; // rcx
  void *v7; // rcx

  if ( *(_BYTE *)(a1 + 30) )
  {
    v2 = (signed __int64 *)(*(_QWORD *)a1 + 296LL);
    _m_prefetchw(v2);
    v3 = *v2;
    if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v3 - 16;
    else
      v4 = 0LL;
    if ( (v3 & 2) != 0 || (v5 = *v2, v5 != _InterlockedCompareExchange64(v2, v4, v3)) )
      ExfReleasePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    v6 = *(void **)a1;
    *(_DWORD *)(a1 + 32) = -286387660;
    ObfDereferenceObject(v6);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 30) = 0;
    KeLeaveCriticalRegion();
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
