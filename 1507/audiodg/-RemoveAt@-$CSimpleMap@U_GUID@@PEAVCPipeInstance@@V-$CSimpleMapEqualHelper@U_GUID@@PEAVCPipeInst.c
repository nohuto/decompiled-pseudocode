/*
 * XREFs of ?RemoveAt@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHH@Z @ 0x140032ACC
 * Callers:
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _recalloc @ 0x140019090 (_recalloc.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140029F28 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rsi
  int v4; // edx
  errno_t v5; // eax
  errno_t v6; // eax
  void *v7; // rax
  void *v8; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (int)v2 >= v4 )
    return 0LL;
  if ( (_DWORD)v2 != v4 - 1 )
  {
    v5 = memmove_s(
           (void *const)(*(_QWORD *)a1 + 16 * v2),
           16LL * (v4 - (int)v2),
           (const void *const)(*(_QWORD *)a1 + 16 * v2 + 16),
           16LL * (v4 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v6 = memmove_s(
           (void *const)(*(_QWORD *)(a1 + 8) + 8 * v2),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2),
           (const void *const)(*(_QWORD *)(a1 + 8) + 8 * v2 + 8),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v6);
  }
  v7 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) - 1, 0x10uLL);
  if ( v7 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v7;
  v8 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v8 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v8;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
