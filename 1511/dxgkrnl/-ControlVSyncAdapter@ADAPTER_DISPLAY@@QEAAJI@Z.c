/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0125D08
 * Callers:
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008B040 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C015DDDC (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ControlVSyncAdapter(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 40);
  if ( !v2 )
    return 3221225485LL;
  BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v2 + 8) + 2408LL * a2));
  return 0LL;
}
