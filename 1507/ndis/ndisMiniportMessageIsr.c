/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C000A980
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int Number; // r15d
  unsigned __int64 v6; // r14
  unsigned int v7; // esi
  unsigned __int8 v8; // di
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // r9
  unsigned int v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  struct NDIS_PCW_CONTEXT v18; // [rsp+48h] [rbp-38h] BYREF
  struct NDIS_PCW_CONTEXT v19; // [rsp+60h] [rbp-20h] BYREF
  char v20; // [rsp+B8h] [rbp+38h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a2 + 96);
  Number = 0;
  v16 = 0;
  v20 = 0;
  v6 = a3;
  v7 = *(_DWORD *)(v3 + 80);
  v18.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v18.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v18.DatapathCyclesMask = v7;
  v18.CurrentCpu = -1;
  if ( (v7 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v18, 1u);
    LOBYTE(v7) = v18.DatapathCyclesMask;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
         *(_QWORD *)(a2 + 8),
         (unsigned int)v6,
         &v20,
         &v16);
  if ( (v7 & 2) != 0 )
    ndisPcwEndCycleCounter(&v18, 1u, 0xEuLL);
  if ( v8 && (v18.DatapathEventsMask & 2) != 0 )
    ndisPcwAddEvent(&v18, 1uLL, 1uLL);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v6 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v6,
           0LL) )
    {
      if ( (v18.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v18, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 96);
    v11 = v16;
    v17 = v16;
    v19.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v10 + 40);
    v19.DatapathEventsMask = *(_DWORD *)(v10 + 48);
    v19.DatapathCyclesMask = *(_DWORD *)(v10 + 80);
    v19.CurrentCpu = -1;
    if ( *(_BYTE *)(a2 + 193) )
      v12 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v6 * (ndisMaxNumberOfProcessors + 1)) << 6);
    else
      v12 = *(_QWORD *)(a2 + 112);
    v13 = v16;
    ProcNumber = 0;
    if ( (v19.DatapathEventsMask & 0x1000000) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v11 = v17;
    }
    if ( v11 )
    {
      do
      {
        if ( (v13 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          v15 = ProcessorIndexFromNumber;
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != Number && (v19.DatapathEventsMask & 0x1000000) != 0 )
              ndisPcwAddEvent(&v19, 0xCuLL, 1uLL);
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v12 + (v15 << 6)), (PVOID)v6, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v13 >>= 1;
      }
      while ( v13 );
    }
  }
  return v8;
}
