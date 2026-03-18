/*
 * XREFs of ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@E@Z @ 0x1C001B36C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchControlVSyncAdapter(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 8) + 464LL))(a2, v4, a3);
}
