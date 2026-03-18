/*
 * XREFs of ?ArePendingOffersInList@VIDMM_GLOBAL@@QEAA_NPEAU_LIST_ENTRY@@@Z @ 0x1C0033194
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

bool __fastcall VIDMM_GLOBAL::ArePendingOffersInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // bl
  int v8; // r9d

  v3 = (char *)this + 39840;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v8 = *((_DWORD *)v3 + 4);
      if ( v8 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v4, &EventBlockThread, v5, v8);
    }
    ExAcquirePushLockSharedEx(v3, 0LL);
  }
  v6 = a2->Flink != a2;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
