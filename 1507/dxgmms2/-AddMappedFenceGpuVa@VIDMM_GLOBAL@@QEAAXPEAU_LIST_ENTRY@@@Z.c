/*
 * XREFs of ?AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AE84
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00319FC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddMappedFenceGpuVa(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rsi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 3816;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (struct _LIST_ENTRY *)((char *)this + 3800);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Blink = v5->Blink;
  a2->Flink = v5;
  a2->Blink = Blink;
  if ( Blink->Flink != v5 )
    __fastfail(3u);
  Blink->Flink = a2;
  v5->Blink = a2;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
