/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0011270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, __int64 a2, __int64 a3)
{
  DXGADAPTER::NotifyVSync(*(LARGE_INTEGER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2, a3);
}
