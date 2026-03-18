/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147094
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CB920 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00CD940 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C00CF204 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ControlVSyncAdapter(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 32);
  if ( !v2 )
    return 3221225485LL;
  BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v2 + 8) + 2632LL * a2));
  return 0LL;
}
