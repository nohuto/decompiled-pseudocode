/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800442E4
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x180044284 (--1CMTALock@@UEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004F16C (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
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
