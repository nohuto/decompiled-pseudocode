/*
 * XREFs of ObpReleaseLookupContext @ 0x14000BB50
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404054E0 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
