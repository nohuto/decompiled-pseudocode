/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012840
 * Callers:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180005E04 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180050254 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  int v4; // ebp
  __int64 v5; // r15
  int v6; // r13d
  struct ATL::IAtlStringMgr *(__fastcall *v7)(ATL::CAtlStringMgr *); // rax
  unsigned __int64 v8; // rcx
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *, int, int); // rax
  _DWORD *v10; // r14
  signed int v11; // edi
  SIZE_T v12; // rdx
  __int64 v13; // rcx
  void *(__fastcall *v14)(ATL::CWin32Heap *__hidden, unsigned __int64); // rax
  _DWORD *v15; // rax
  size_t v16; // r8
  void *v17; // rcx

  v2 = *a1;
  v4 = a2;
  v5 = *((_QWORD *)*a1 - 3);
  v6 = *((_DWORD *)*a1 - 4);
  v7 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(*(_QWORD *)v5 + 32LL);
  if ( v7 != ATL::CAtlStringMgr::Clone )
    v5 = (__int64)v7((ATL::CAtlStringMgr *)*(v2 - 3));
  v8 = (unsigned __int64)ATL::CAtlStringMgr::Allocate;
  v9 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *, int, int))v5;
  if ( v9 != ATL::CAtlStringMgr::Allocate )
  {
    v15 = (_DWORD *)v9((ATL::CAtlStringMgr *)v5, v4, 2);
    goto LABEL_14;
  }
  v10 = 0LL;
  if ( v4 >= 0 && 0x7FFFFFFF - v4 >= 1 )
  {
    v11 = (v4 + 8) & 0xFFFFFFF8;
    if ( v4 + 1 <= v11 )
    {
      v8 = v11;
      if ( v11 )
      {
        a2 = 0xFFFFFFFFFFFFFFFFuLL % v11;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 2 )
          goto LABEL_15;
        v8 = 2LL * v11;
        if ( v8 > 0xFFFFFFFFFFFFFFE7uLL )
          goto LABEL_15;
      }
      else
      {
        v8 = 0LL;
      }
      v12 = v8 + 24;
      v13 = *(_QWORD *)(v5 + 8);
      v14 = **(void *(__fastcall ***)(ATL::CWin32Heap *__hidden, unsigned __int64))v13;
      if ( v14 == ATL::CWin32Heap::Allocate )
        v15 = HeapAlloc(*(HANDLE *)(v13 + 8), 0, v12);
      else
        v15 = (_DWORD *)v14((ATL::CWin32Heap *)v13, v12);
      if ( v15 )
      {
        v8 = (unsigned int)(v11 - 1);
        *(_QWORD *)v15 = v5;
        v15[3] = v8;
        v15[4] = 1;
        v15[2] = 0;
LABEL_14:
        v10 = v15;
      }
    }
  }
LABEL_15:
  if ( !v10 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v8, a2);
  if ( v6 < v4 )
    v4 = v6;
  if ( 2LL * (v4 + 1) )
  {
    if ( v10 != (_DWORD *)-24LL )
    {
      v16 = 2LL * (v4 + 1);
      v17 = v10 + 6;
      if ( v2 )
      {
        memcpy_0(v17, v2, v16);
        goto LABEL_22;
      }
      memset(v17, 0, v16);
    }
    *(_DWORD *)_o__errno(v8, a2) = 22;
    invalid_parameter_noinfo();
  }
LABEL_22:
  v10[2] = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*(v2 - 3) + 8LL))(*(v2 - 3), v2 - 3);
  *a1 = v10 + 6;
}
