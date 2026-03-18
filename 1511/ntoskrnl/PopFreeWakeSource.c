/*
 * XREFs of PopFreeWakeSource @ 0x140635E18
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     PopProcessWakeSourceWork @ 0x140635ED4 (PopProcessWakeSourceWork.c)
 *     PopUnlinkWakeSources @ 0x140636044 (PopUnlinkWakeSources.c)
 * Callees:
 *     ExDeleteWakeTimerInfo @ 0x140214504 (ExDeleteWakeTimerInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeSource(__int64 a1)
{
  int v1; // eax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 2) <= 1 )
    {
      v3 = *(void **)(a1 + 24);
      if ( v3 )
        ExDeleteWakeTimerInfo(v3);
    }
  }
  else
  {
    v4 = *(void **)(a1 + 32);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x206D654Du);
    v5 = *(void **)(a1 + 48);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x206D654Du);
    v6 = *(void **)(a1 + 64);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x206D654Du);
  }
  ExFreePoolWithTag((PVOID)a1, 0x206D654Du);
}
