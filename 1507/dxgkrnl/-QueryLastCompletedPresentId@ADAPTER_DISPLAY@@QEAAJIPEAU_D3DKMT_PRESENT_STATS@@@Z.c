/*
 * XREFs of ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0127660
 * Callers:
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0136958 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryLastCompletedPresentId(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // r9
  __int64 v6; // rdi
  struct _KMUTANT *v7; // rbx

  v3 = *((_QWORD *)this + 31);
  if ( !v3 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v3 + 8) + 2384LL * a2;
  v7 = *(struct _KMUTANT **)(v6 + 56);
  KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
  *(_OWORD *)&a3->PresentCount = *(_OWORD *)(v6 + 64);
  *(_OWORD *)&a3->SyncQPCTime.LowPart = *(_OWORD *)(v6 + 80);
  KeReleaseMutex(v7, 0);
  return 0LL;
}
