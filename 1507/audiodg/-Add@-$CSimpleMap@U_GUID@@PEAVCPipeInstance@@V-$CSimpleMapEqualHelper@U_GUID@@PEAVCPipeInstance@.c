/*
 * XREFs of ?Add@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHAEBU_GUID@@AEBQEAVCPipeInstance@@@Z @ 0x140031564
 * Callers:
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _recalloc @ 0x140019090 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::Add(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _QWORD *v12; // rdx

  v6 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) + 1, 0x10uLL);
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = _recalloc(v8, *(_DWORD *)(a1 + 16) + 1, 8uLL);
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_OWORD *)(*(_QWORD *)a1 + 16 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
