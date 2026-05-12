/*
 * XREFs of StorPortCompleteRequest @ 0x1C002D7E0
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C0062120 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidPauseUnitQueue @ 0x1C000ADF0 (RaidPauseUnitQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 */

char __fastcall StorPortCompleteRequest(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r14
  unsigned __int8 v6; // di
  unsigned __int8 v7; // si
  __int64 *v8; // rax
  __int64 v10; // rbx
  __int64 Unit; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v5 = 0LL;
  HIBYTE(v16) = 0;
  v6 = a4;
  v7 = a3;
  v8 = *(__int64 **)(a1 - 16);
  v10 = *v8;
  if ( !*v8 )
    return (char)v8;
  if ( (qword_1C004F2A0 & 0x40) != 0 )
    DbgLogRequest(
      v10,
      12,
      v10,
      (unsigned __int8)a4 | (int)(*(_DWORD *)(v10 + 56) << 24) & 0xFFFFFFFFFF000000uLL | (((unsigned __int8)a3 | (a2 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( a2 == 0xFF || v7 == 0xFF || v6 == 0xFF )
  {
    RaidPauseAdapterQueue(v10);
  }
  else
  {
    LOBYTE(v16) = a2;
    BYTE1(v16) = v7;
    BYTE2(v16) = v6;
    Unit = RaidAdapterFindUnit(v10, v16, a3, a4);
    v5 = Unit;
    if ( !Unit )
    {
      v8 = (__int64 *)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v8) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v8 & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v14) = v6;
          LODWORD(v13) = v7;
          LOBYTE(v8) = WPP_SF_ddd(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0x19u,
                         (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids,
                         a2,
                         v13,
                         v14);
        }
      }
      return (char)v8;
    }
    RaidPauseUnitQueue(Unit);
  }
  LOBYTE(v8) = KeInsertQueueDpc(
                 (PRKDPC)(v10 + 1928),
                 (PVOID)(v6 | (unsigned __int64)((v7 | (a2 << 8)) << 8)),
                 (PVOID)a5);
  if ( !(_BYTE)v8 )
  {
    if ( a2 == 0xFF || v7 == 0xFF || v6 == 0xFF )
      LOBYTE(v8) = RaidResumeAdapterQueue(v10);
    else
      LOBYTE(v8) = RaidResumeUnitQueue(v5);
  }
  return (char)v8;
}
