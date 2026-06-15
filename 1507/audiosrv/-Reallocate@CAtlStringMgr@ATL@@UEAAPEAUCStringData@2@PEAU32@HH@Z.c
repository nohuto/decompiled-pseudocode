/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180037310
 * Callers:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180037278 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x1800373D0 (-Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  ATL::CWin32Heap *v8; // rdi
  void *(*v9)(ATL::CWin32Heap *__hidden, void *, unsigned __int64); // rsi
  struct ATL::CStringData *result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = a3 + 1;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v5 > (int)v6 )
    return 0LL;
  v7 = a4 * (unsigned __int64)v6;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 > 0xFFFFFFE7 )
    return 0LL;
  v8 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v9 = *(void *(**)(ATL::CWin32Heap *__hidden, void *, unsigned __int64))(*(_QWORD *)v8 + 16LL);
  result = v9 == ATL::CWin32Heap::Reallocate
         ? (struct ATL::CStringData *)ATL::CWin32Heap::Reallocate(v8, a2, (unsigned int)(v7 + 24))
         : (struct ATL::CStringData *)((__int64 (__fastcall *)(ATL::CWin32Heap *, struct ATL::CStringData *, _QWORD))v9)(
                                        v8,
                                        a2,
                                        (unsigned int)(v7 + 24));
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v6 - 1;
  return result;
}
