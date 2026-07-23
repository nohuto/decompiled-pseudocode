/*
 * XREFs of PopFreeWakeSource @ 0x14066E2A4
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140205844 (PopUpdateWakeSourceWorker.c)
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 *     PopUnlinkWakeSources @ 0x14066E4D0 (PopUnlinkWakeSources.c)
 * Callees:
 *     ExDeleteWakeTimerInfo @ 0x14022DFA0 (ExDeleteWakeTimerInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
