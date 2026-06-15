/*
 * XREFs of ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x180039810
 * Callers:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180018970 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

LPVOID __fastcall ATL::CWin32Heap::Reallocate(HANDLE *this, void *a2, SIZE_T a3)
{
  if ( !a2 )
    return (LPVOID)(*(__int64 (__fastcall **)(HANDLE *, SIZE_T))*this)(this, a3);
  if ( a3 )
    return HeapReAlloc(this[1], 0, a2, a3);
  (*((void (__fastcall **)(HANDLE *, void *))*this + 1))(this, a2);
  return 0LL;
}
