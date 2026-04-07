/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180071DB8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180070E84 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180050494 (-MemoryFree@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800506AC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180070DC0 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800710A4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800722D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _WORD *v16; // rax
  int v18[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_WORD *)v7;
  if ( v7 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v18,
            a1,
            v9,
            v7 >> 2);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v10 = 1;
      *((_QWORD *)v10 + 1) = *a2;
      v14 = *(_QWORD *)v18;
      *a2 = 0LL;
      *(_QWORD *)v18 = 0LL;
      *((_QWORD *)v10 + 2) = v14;
      v15 = *(_QWORD *)&v18[2];
      *(_QWORD *)&v18[2] = 0LL;
      *((_QWORD *)v10 + 3) = v15;
      memset_0(v10 + 16, 0, 0x58uLL);
      v10[16] = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 20, 0, 0x50uLL);
      v16 = v10;
      v10 = 0LL;
      v11 = 0;
      *a3 = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13E,
        (unsigned int)"wil",
        (const char *)(unsigned int)v12,
        v18[0]);
    }
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v18, v13);
    if ( v10 )
      MemoryFree(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13B, (unsigned int)"wil", (const char *)0x8007000ELL, v18[0]);
  }
  return v11;
}
