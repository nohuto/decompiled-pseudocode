/*
 * XREFs of ndisMFindNumaDistances @ 0x1C009EF48
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisMFindNumaNode @ 0x1C009F30C (ndisMFindNumaNode.c)
 */

void __fastcall ndisMFindNumaDistances(__int64 a1)
{
  SIZE_T v2; // rsi
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v7; // rax
  _WORD *v8; // rsi
  __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  __int64 v11; // rax

  v2 = 2LL * ndisMaxNumberOfProcessors;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x2020444Eu);
  v4 = 0LL;
  *(_QWORD *)(a1 + 4464) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    *(_WORD *)(a1 + 4456) = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * (HighestNodeNumber + 1);
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (HighestNodeNumber + 1), 0x2020444Eu);
      v8 = v7;
      if ( v7 )
      {
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               (PVOID)(a1 + 4456),
               2u,
               v7,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          v9 = ndisMaxNumberOfProcessors;
          v10 = (unsigned __int16 *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 16LL);
          do
          {
            v11 = *v10;
            v10 += 10;
            *(_WORD *)(v4 + *(_QWORD *)(a1 + 4464)) = v8[2 * v11];
            v4 += 2LL;
            --v9;
          }
          while ( v9 );
        }
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_q(0x71u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  }
}
