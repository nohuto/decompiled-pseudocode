/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800184B0
 * Callers:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800183C8 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r14
  int v5; // ebx
  __int64 v6; // r15
  int v7; // r12d
  struct ATL::IAtlStringMgr *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden, int, int); // rdi
  __int64 v10; // rsi
  signed int v11; // edi
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  SIZE_T v14; // rcx
  _DWORD *v15; // rax
  _QWORD *result; // rax
  _QWORD *v17; // [rsp+60h] [rbp+8h]
  void *(__fastcall *v18)(ATL::CWin32Heap *__hidden, unsigned __int64); // [rsp+78h] [rbp+20h]

  v17 = (_QWORD *)a1;
  v4 = *(_QWORD **)a1;
  v5 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)a1 - 24LL);
  v7 = *(_DWORD *)(*(_QWORD *)a1 - 16LL);
  v8 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v6 + 32LL);
  if ( v8 != ATL::CAtlStringMgr::Clone )
    v6 = (__int64)v8((ATL::CAtlStringMgr *)*(v4 - 3));
  v9 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))v6;
  if ( v9 != ATL::CAtlStringMgr::Allocate )
  {
    v10 = (__int64)v9((ATL::CAtlStringMgr *)v6, v5, 2);
    goto LABEL_16;
  }
  v10 = 0LL;
  if ( v5 >= 0 && 0x7FFFFFFF - v5 >= 1 )
  {
    v11 = (v5 + 8) & 0xFFFFFFF8;
    if ( v5 + 1 <= v11 )
    {
      a1 = v11;
      if ( v11 )
      {
        if ( v11 == 8LL )
        {
          v12 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v12 = 0xFFFFFFFFFFFFFFFFuLL / v11;
          a2 = 0xFFFFFFFFFFFFFFFFuLL % v11;
        }
        if ( v12 < 2 )
          goto LABEL_16;
        a1 = 2LL * v11;
        if ( a1 > 0xFFFFFFFFFFFFFFE7uLL )
          goto LABEL_16;
      }
      else
      {
        a1 = 0LL;
      }
      v13 = *(_QWORD *)(v6 + 8);
      v14 = a1 + 24;
      v18 = **(void *(__fastcall ***)(ATL::CWin32Heap *__hidden, unsigned __int64))v13;
      if ( v18 == ATL::CWin32Heap::Allocate )
        v15 = HeapAlloc(*(HANDLE *)(v13 + 8), 0, v14);
      else
        v15 = (_DWORD *)v18((ATL::CWin32Heap *)v13, v14);
      a1 = (unsigned __int64)v15;
      if ( v15 )
      {
        *(_QWORD *)v15 = v6;
        v15[4] = 1;
        v15[2] = 0;
        v10 = (__int64)v15;
        v15[3] = v11 - 1;
      }
    }
  }
LABEL_16:
  if ( !v10 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(a1, a2, a3, a4);
  if ( v7 < v5 )
    v5 = v7;
  memcpy_s((void *const)(v10 + 24), 2LL * (v5 + 1), v4, 2LL * (v5 + 1));
  *(_DWORD *)(v10 + 8) = v7;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*(v4 - 3) + 8LL))(*(v4 - 3), v4 - 3);
  result = v17;
  *v17 = v10 + 24;
  return result;
}
