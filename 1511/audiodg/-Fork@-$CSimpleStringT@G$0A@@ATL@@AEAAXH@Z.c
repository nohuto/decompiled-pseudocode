/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002B58
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002C28 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140002D90 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140002ECC (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x140017C90 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002AB20 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2)
{
  char *v2; // rdi
  int v5; // r15d
  struct ATL::IAtlStringMgr *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rsi
  ATL::CAtlStringMgr *v7; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden, int, int); // rsi
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *v10; // rsi
  char *v11; // rbx

  v2 = (char *)*a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)*a1 - 3) + 32LL);
  if ( v6 == ATL::CAtlStringMgr::Clone )
    v7 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)*a1 - 3));
  else
    v7 = v6(*((ATL::CAtlStringMgr **)*a1 - 3));
  v8 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))v7;
  if ( v8 == ATL::CAtlStringMgr::Allocate )
    v9 = ATL::CAtlStringMgr::Allocate(v7, a2, 2);
  else
    v9 = v8(v7, a2, 2);
  v10 = v9;
  if ( !v9 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v11 = (char *)v9 + 24;
  if ( v5 < a2 )
    a2 = v5;
  memcpy_s((char *)v9 + 24, 2LL * (a2 + 1), v2, 2LL * (a2 + 1));
  *((_DWORD *)v10 + 2) = v5;
  ATL::CStringData::Release((ATL::CStringData *)(v2 - 24));
  *a1 = v11;
}
