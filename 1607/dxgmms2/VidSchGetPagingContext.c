/*
 * XREFs of VidSchGetPagingContext @ 0x1C0015124
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetPagingContext(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * a2);
}
