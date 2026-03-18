/*
 * XREFs of ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@E@Z @ 0x1C001BE40
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchControlVSyncDevice(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 8) + 472LL))(a2, v4, a3);
}
