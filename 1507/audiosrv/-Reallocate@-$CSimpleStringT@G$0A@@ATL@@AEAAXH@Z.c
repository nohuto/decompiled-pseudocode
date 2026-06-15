/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180037278
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180037310 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

char *__fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *, int, int); // rbp
  struct ATL::CStringData *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *result; // rax

  v4 = *a1;
  if ( *(_DWORD *)(*a1 - 12) >= (int)a2 || (int)a2 <= 0 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(a1, a2, a3, a4);
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *, int, int))(**(_QWORD **)(*a1 - 24) + 16LL);
  if ( v6 == ATL::CAtlStringMgr::Reallocate )
    v7 = ATL::CAtlStringMgr::Reallocate(*(ATL::CAtlStringMgr **)(*a1 - 24), (struct ATL::CStringData *)(v4 - 24), a2, 2);
  else
    v7 = v6(*(ATL::CAtlStringMgr **)(*a1 - 24), (struct ATL::CStringData *)(v4 - 24), a2, 2);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v9, v8, v10, v11);
  result = (char *)v7 + 24;
  *a1 = (__int64)result;
  return result;
}
