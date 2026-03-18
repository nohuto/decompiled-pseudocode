/*
 * XREFs of ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18012C7F0
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1800F66E0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x180027708 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
