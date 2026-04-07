/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180070D28
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180071F0C (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180070DC0 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ??_GNode@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180070DF0 (--_GNode@-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180071078 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rdx
  wil::details *v8; // rcx

  v1 = (_QWORD *)(a1 + 40);
  v3 = (_QWORD *)(a1 + 120);
  while ( v1 != v3 )
  {
    v4 = (_QWORD *)*v1;
    while ( v4 )
    {
      v5 = v4;
      v4 = (_QWORD *)v4[6];
      wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::Node::`scalar deleting destructor'(v5);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *v1++ = 0LL;
  }
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)(a1 + 16));
  v8 = *(wil::details **)(a1 + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v7);
}
