/*
 * XREFs of ObpReleaseLookupContext @ 0x14000BFD0
 * Callers:
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x140406620 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1404B8FE8 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 30) = 0;
    KeLeaveCriticalRegion();
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
  {
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
