/*
 * XREFs of ?MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z @ 0x1C00907B8
 * Callers:
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1C0094FCC (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0026AC0 (VidSchMarkDeviceAsError.c)
 */

_QWORD *__fastcall VIDMM_PROCESS::MarkAllDevicesAsError(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int i; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rcx

  result = *(_QWORD **)(a1 + 16);
  v3 = result[*(unsigned int *)(*(_QWORD *)(a2 + 24) + 200LL)];
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 )
    {
      for ( i = 0; i < *(_DWORD *)(v3 + 12); ++i )
      {
        v6 = 184LL * i;
        result = (_QWORD *)(v4 + v6 + 40);
        v7 = (_QWORD *)*result;
        while ( v7 != result )
        {
          v8 = *(_QWORD *)(v7[4] + 32LL);
          if ( v8 )
            VidSchMarkDeviceAsError(v8, 27);
          v4 = *(_QWORD *)(v3 + 16);
          v7 = (_QWORD *)*v7;
          result = (_QWORD *)(v6 + v4 + 40);
        }
      }
    }
  }
  return result;
}
