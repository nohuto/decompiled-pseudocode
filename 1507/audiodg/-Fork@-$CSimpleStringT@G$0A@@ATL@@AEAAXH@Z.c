/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011030
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011108 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140011270 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x140018A40 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002A718 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2)
{
  const void *v2; // rsi
  int v5; // r15d
  struct ATL::IAtlStringMgr *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rdi
  ATL::CAtlStringMgr *v7; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden, int, int); // rdi
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *v10; // rbx
  signed __int32 v11; // eax
  bool v12; // cc
  __int64 result; // rax

  v2 = *a1;
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
  if ( v5 < a2 )
    a2 = v5;
  memcpy_s((char *)v9 + 24, 2LL * (a2 + 1), v2, 2LL * (a2 + 1));
  *((_DWORD *)v10 + 2) = v5;
  v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
  v12 = v11 <= 1;
  result = (unsigned int)(v11 - 1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 - 3) + 8LL))(
               *((_QWORD *)v2 - 3),
               (__int64)v2 - 24);
  *a1 = (char *)v10 + 24;
  return result;
}
