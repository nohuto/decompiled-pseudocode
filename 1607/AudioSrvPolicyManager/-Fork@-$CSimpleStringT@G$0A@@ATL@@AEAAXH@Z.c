/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000A070
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000A18C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000A410 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // rbx
  int v5; // ebp
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  const void *v10; // rdi
  signed __int32 v11; // eax
  bool v12; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 - 3)
                                                                                            + 32LL))(*((_QWORD *)*a1 - 3));
  v7 = (**v6)(v6, a2, 2LL);
  v8 = v7;
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  if ( v5 < (int)a2 )
    a2 = v5;
  v9 = (int)(a2 + 1);
  v10 = (const void *)(v7 + 24);
  memcpy_s((void *const)(v7 + 24), 2 * v9, v2, 2 * v9);
  *(_DWORD *)(v8 + 8) = v5;
  v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
  v12 = v11 <= 1;
  result = (unsigned int)(v11 - 1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 - 3) + 8LL))(
               *((_QWORD *)v2 - 3),
               (__int64)v2 - 24);
  *a1 = v10;
  return result;
}
