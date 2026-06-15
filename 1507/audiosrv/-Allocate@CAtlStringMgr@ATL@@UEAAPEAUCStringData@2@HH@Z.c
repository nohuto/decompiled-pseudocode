/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x1800179F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  void *(__fastcall *v9)(ATL::CWin32Heap *__hidden, unsigned __int64); // rbp
  struct ATL::CStringData *result; // rax

  if ( a2 < 0 || 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 )
    return 0LL;
  if ( v5 )
  {
    if ( v5 == 8LL )
      v6 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v6 = 0xFFFFFFFFFFFFFFFFuLL / v5;
    if ( v6 < a3 )
      return 0LL;
    v7 = a3 * (__int64)v5;
    if ( v7 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *((_QWORD *)this + 1);
  v9 = **(void *(__fastcall ***)(ATL::CWin32Heap *__hidden, unsigned __int64))v8;
  if ( v9 == ATL::CWin32Heap::Allocate )
    result = (struct ATL::CStringData *)HeapAlloc(*(HANDLE *)(v8 + 8), 0, v7 + 24);
  else
    result = (struct ATL::CStringData *)v9((ATL::CWin32Heap *)v8, v7 + 24);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 3) = v5 - 1;
  *((_DWORD *)result + 2) = 0;
  return result;
}
