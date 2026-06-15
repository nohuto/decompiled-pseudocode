/*
 * XREFs of ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x140034D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
