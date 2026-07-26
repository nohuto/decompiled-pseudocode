/*
 * XREFs of ndisMiniportIsr @ 0x1C005D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpc @ 0x1C005C520 (NdisMQueueDpc.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

char __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  char v5; // si
  struct NDIS_PCW_CONTEXT v7; // [rsp+20h] [rbp-20h] BYREF
  char v8; // [rsp+68h] [rbp+28h] BYREF
  ULONG TargetProcessors; // [rsp+70h] [rbp+30h] BYREF

  TargetProcessors = 0;
  v3 = *(_QWORD *)(a2 + 96);
  v7.CurrentCpu = -1;
  v8 = 0;
  v4 = *(_DWORD *)(v3 + 80);
  v7.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v7.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v7.DatapathCyclesMask = v4;
  if ( (v4 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v7);
    LOBYTE(v4) = v7.DatapathCyclesMask;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, ULONG *))(a2 + 16))(*(_QWORD *)(a2 + 8), &v8, &TargetProcessors);
  if ( (v4 & 2) != 0 )
    ndisPcwEndCycleCounter(&v7);
  if ( v5 && (v7.DatapathEventsMask & 2) != 0 )
    ndisPcwAddEvent(&v7, 1uLL, 1uLL);
  if ( v8 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 104), 1u);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v7.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v7);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    NdisMQueueDpc((NDIS_HANDLE)a2, 0, TargetProcessors, 0LL);
  }
  return v5;
}
