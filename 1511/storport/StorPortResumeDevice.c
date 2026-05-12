/*
 * XREFs of StorPortResumeDevice @ 0x1C00092C0
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C005A5F0 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     WPP_SF_ddd @ 0x1C0027818 (WPP_SF_ddd.c)
 *     Template_pqccc @ 0x1C002C084 (Template_pqccc.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // ecx
  __int64 Unit; // rax
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h]

  v7 = a1;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(v8, 17, (_DWORD)retaddr, v8, 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  v9 = 255;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    Template_pqccc(v9, a2, a3, v7, v9, a2, a3, a4);
  if ( v8 )
  {
    LOBYTE(v14) = a2;
    BYTE1(v14) = a3;
    BYTE2(v14) = a4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids, a2, a3, a4);
    }
    Unit = RaidAdapterFindUnit(v8, v14);
    if ( Unit )
    {
      v11 = Unit + 1088;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1104), 134684676, 134684677) != 134684677 )
        v11 = 0LL;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = 6;
        *(_DWORD *)(v11 + 36) = v14;
        RaidQueueDeferredItem(v8 + 1088, v11);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0048010 & 0x800) != 0 )
        DbgLogRequest(v8, 22, (_DWORD)retaddr, 0, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
