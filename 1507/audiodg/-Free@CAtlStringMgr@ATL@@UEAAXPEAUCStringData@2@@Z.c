/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x140011220
 * Callers:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x1400142C4 (-Release@CStringData@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CWin32Heap@ATL@@UEAAXPEAX@Z @ 0x140011330 (-Free@CWin32Heap@ATL@@UEAAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  void (*v2)(ATL::CWin32Heap *__hidden, void *); // rsi

  v2 = *(void (**)(ATL::CWin32Heap *__hidden, void *))(**((_QWORD **)this + 1) + 8LL);
  if ( v2 == ATL::CWin32Heap::Free )
    ATL::CWin32Heap::Free(*((ATL::CWin32Heap **)this + 1), a2);
  else
    ((void (__fastcall *)(_QWORD, struct ATL::CStringData *))v2)(*((_QWORD *)this + 1), a2);
}
