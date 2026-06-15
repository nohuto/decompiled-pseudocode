/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x18001029C
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18000E600 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _recalloc @ 0x180024480 (_recalloc.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v5; // rdx
  int v6; // edx
  errno_t v7; // eax
  errno_t v8; // eax
  void *v9; // rax
  void *v10; // rax

  v2 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 != v6 - 1 )
  {
    v7 = memmove_s(
           (void *const)(*(_QWORD *)a1 + 8 * v2),
           8LL * (v6 - (int)v2),
           (const void *const)(*(_QWORD *)a1 + 8 * v2 + 8),
           8LL * (v6 - (int)v2 - 1));
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v8 = memmove_s(
           (void *const)(*(_QWORD *)(a1 + 8) + 8 * v2),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2),
           (const void *const)(*(_QWORD *)(a1 + 8) + 8 * v2 + 8),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
    if ( v8 )
    {
      if ( v8 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v8 == 22 || v8 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v8 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  v9 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v9 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v9;
  v10 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v10 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v10;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
