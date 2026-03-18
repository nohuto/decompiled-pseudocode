/*
 * XREFs of ?Set@CHWCallbackRenderer@@QEAAXU_LUID@@VDisplayId@@W4StereoContext@@II@Z @ 0x18001E818
 * Callers:
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHWCallbackRenderer::Set(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 96) = a3;
  *(_DWORD *)(a1 + 100) = a4;
  *(_DWORD *)(a1 + 128) = -1082130432;
  *(_DWORD *)(a1 + 132) = 1065353216;
  *(float *)(a1 + 120) = 2.0 / (float)a5;
  *(float *)(a1 + 124) = -2.0 / (float)a6;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 576LL)
                                                                                            + 384LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 576LL),
           *(_QWORD *)(a1 + 152),
           0LL,
           0LL,
           a1 + 120,
           0,
           0);
}
