/*
 * XREFs of RaidCheckPerProcessorCompletions @ 0x1C0019054
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidCheckPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r8
  union _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rsi
  PSLIST_ENTRY v8; // rbx

  if ( (*(_BYTE *)(a1 + 4740) & 1) != 0 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 < g_RaidPerfRedirectGroupCount )
    {
      v4 = *((unsigned __int8 *)a2 + 2);
      if ( v4 < *((_DWORD *)g_RaidDPCRedirectionProcessors + v3) )
      {
        v5 = (__int64)(int)(v4 + ((_DWORD)v3 << 6)) << 7;
        v6 = (union _SLIST_HEADER *)((char *)g_RaidPerProcessorState + v5 + 64);
        _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v5 + 80), 1);
        v7 = ExpInterlockedFlushSList(v6);
        while ( v7 )
        {
          v8 = v7 - 2;
          v7 = v7->Next;
          if ( (BYTE1(v8[1].Next) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v8[13].Next + 1), *((unsigned int *)&v8[46].Next + 3));
            BYTE1(v8[1].Next) &= ~1u;
          }
          ((void (__fastcall *)(PSLIST_ENTRY))v8[41].Next)(v8);
        }
        _InterlockedExchange(
          (volatile __int32 *)g_RaidPerProcessorState + 32 * (__int64)(*((unsigned __int8 *)a2 + 2) + (*a2 << 6)) + 20,
          0);
      }
    }
  }
}
