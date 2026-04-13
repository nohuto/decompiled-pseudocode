/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180050B9C
 * Callers:
 *     __lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator()_::_1_::dtor$0 @ 0x180073395 (__lambda_093e5cd604f7ab5de7acc075fbba0f63_--operator()_--_1_--dtor$0.c)
 *     __lambda_54b1615c74727b96cfd9244fd3177ed2_::operator()_::_1_::dtor$0 @ 0x180073455 (__lambda_54b1615c74727b96cfd9244fd3177ed2_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180022D98 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(LPVOID *this)
{
  HANDLE ProcessHeap; // rax

  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(this + 4));
  if ( *((_BYTE *)this + 24) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  this[2] = 0LL;
}
