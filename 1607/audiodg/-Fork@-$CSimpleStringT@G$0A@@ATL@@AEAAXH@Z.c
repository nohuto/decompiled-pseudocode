/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140016554
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001662C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140016770 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1400172D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002977C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2)
{
  _DWORD *v2; // rbx
  ATL::CAtlStringMgr *v5; // rcx
  int v6; // ebp
  __int64 (*v7)(void); // rax
  struct ATL::IAtlStringMgr *v8; // rax
  ATL::CAtlStringMgr *v9; // rcx
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden, int, int); // rax
  struct ATL::CStringData *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct ATL::CStringData *v14; // rdi
  signed __int32 v15; // eax
  bool v16; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (ATL::CAtlStringMgr *)*((_QWORD *)*a1 - 3);
  v6 = *(v2 - 4);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v5 + 32LL);
  if ( (char *)v7 == (char *)ATL::CAtlStringMgr::Clone )
    v8 = ATL::CAtlStringMgr::Clone(v5);
  else
    v8 = (struct ATL::IAtlStringMgr *)v7();
  v9 = v8;
  v10 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))v8;
  if ( v10 == ATL::CAtlStringMgr::Allocate )
    v11 = ATL::CAtlStringMgr::Allocate(v9, a2, 2);
  else
    v11 = v10(v9, a2, 2);
  v14 = v11;
  if ( !v11 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v13, v12);
  if ( v6 < a2 )
    a2 = v6;
  memcpy_s((char *)v11 + 24, 2LL * (a2 + 1), v2, 2LL * (a2 + 1));
  *((_DWORD *)v14 + 2) = v6;
  v15 = _InterlockedExchangeAdd(v2 - 2, 0xFFFFFFFF);
  v16 = v15 <= 1;
  result = (unsigned int)(v15 - 1);
  if ( v16 )
    result = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3), v2 - 6);
  *a1 = (char *)v14 + 24;
  return result;
}
