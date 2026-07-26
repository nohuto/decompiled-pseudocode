/*
 * XREFs of ndisMIsr @ 0x1C005CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

char __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  struct NDIS_PCW_CONTEXT v6; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+68h] [rbp+28h] BYREF
  char v8; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  v6.CurrentCpu = -1;
  v7 = 0;
  v4 = *(_DWORD *)(v2 + 80);
  v6.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v2 + 40);
  v6.DatapathEventsMask = *(_DWORD *)(v2 + 48);
  v6.DatapathCyclesMask = v4;
  if ( (v4 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v6);
    LOBYTE(v4) = v6.DatapathCyclesMask;
  }
  if ( (*(_DWORD *)(v2 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 3816) + 128LL))(*(_QWORD *)(v2 + 24));
    v7 = 1;
    v8 = 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, _QWORD))(a2 + 24))(&v8, &v7, *(_QWORD *)(v2 + 24));
  }
  if ( (v4 & 2) != 0 )
    ndisPcwEndCycleCounter(&v6);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v6.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v6);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v8 && (v6.DatapathEventsMask & 2) != 0 )
    ndisPcwAddEvent(&v6, 1uLL, 1uLL);
  return v8;
}
