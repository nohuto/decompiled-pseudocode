/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x180042C28
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x180042BC8 (--1CMTALock@@UEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004EAB4 (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCriticalSection::DeInit(struct _RTL_CRITICAL_SECTION *this)
{
  if ( LOBYTE(this[1].DebugInfo) )
  {
    DeleteCriticalSection(this);
    LOBYTE(this[1].DebugInfo) = 0;
  }
}
