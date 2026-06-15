/*
 * XREFs of ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x1400362B8
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14003635C (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     _recalloc @ 0x140018FD0 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx

  v6 = recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) + 1, 8uLL);
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = recalloc(v8, *(_DWORD *)(a1 + 16) + 1, 8uLL);
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
