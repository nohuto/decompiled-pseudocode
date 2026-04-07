/*
 * XREFs of ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18003F070
 * Callers:
 *     ??1CMTALock@@UEAA@XZ @ 0x18003F010 (--1CMTALock@@UEAA@XZ.c)
 *     ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180048334 (--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
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
