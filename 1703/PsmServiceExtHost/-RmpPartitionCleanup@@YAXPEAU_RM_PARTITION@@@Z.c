/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180031AD8
 * Callers:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000DE40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  void *v2; // rcx
  unsigned int v3; // edi
  void **v4; // rsi
  void *v5; // rcx
  void *v6; // r8
  void *v7; // r8
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v2 = (void *)*((_QWORD *)a1 + 12);
  if ( v2 )
    CloseHandle(v2);
  if ( *((_QWORD *)a1 + 13) )
    TpReleaseTimer();
  v3 = 0;
  v4 = (void **)((char *)a1 + 48);
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( v3 )
        CloseHandle(v5);
      else
        NtClose(v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 6 );
  v6 = (void *)*((_QWORD *)a1 + 18);
  if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 19);
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    *((_QWORD *)a1 + 19) = 0LL;
  }
  *((_DWORD *)a1 + 44) = 0;
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v5, 9uLL) )
    {
      v14 = 0;
      v12 = (char *)a1 + 216;
      v13 = 8;
      TlgWrite(v8, &unk_1800424DD, v9, v10, 3u, &pData);
    }
  }
}
