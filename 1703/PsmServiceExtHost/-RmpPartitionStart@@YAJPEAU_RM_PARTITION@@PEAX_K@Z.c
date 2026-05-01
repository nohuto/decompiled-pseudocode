/*
 * XREFs of ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180020390
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180020480 (-RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180020528 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionStart(struct _RM_PARTITION *a1, void *a2, __int64 a3)
{
  const GUID *v4; // r8
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v6; // r9
  int started; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *p_started; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  *((_QWORD *)a1 + 27) = a3;
  started = RmpSystemDuplicateHandle(a2, 1u, (PHANDLE)a1 + 4);
  LODWORD(v4) = started;
  if ( started >= 0 )
  {
    started = RmpMemoryMonitorStartThread((struct _RM_PARTITION *)((char *)a1 + 40));
    LODWORD(v4) = started;
    if ( started >= 0 )
    {
      *((_DWORD *)a1 + 56) &= ~2u;
      *((_DWORD *)a1 + 56) |= 1u;
      LODWORD(v4) = 0;
      started = 0;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v12 = 0;
    v15 = 0;
    p_started = &started;
    v13 = &v16;
    v11 = (int)cData;
    v14 = 8;
    TlgWrite(cData, &unk_180042502, v4, v6, (UINT32)cData, &pData);
    LODWORD(v4) = started;
  }
  return (unsigned int)v4;
}
