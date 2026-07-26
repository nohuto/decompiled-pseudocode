/*
 * XREFs of ndisSetWakeUpTimer @ 0x1C001B638
 * Callers:
 *     ndisMWakeUpDpcX @ 0x1C000F6E0 (ndisMWakeUpDpcX.c)
 *     ndisMWakeUpDpc @ 0x1C0060A30 (ndisMWakeUpDpc.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C001B6DC (ndisCheckForHangSupported.c)
 */

char __fastcall ndisSetWakeUpTimer(__int64 a1)
{
  ULONG v2; // esi
  char result; // al
  __int64 v4; // rcx
  int v5; // r8d
  unsigned __int8 v6; // al
  __int64 v7; // rbx

  v2 = 1000 * *(_DWORD *)(a1 + 376) / 5;
  result = ndisCheckForHangSupported();
  if ( result )
  {
    v6 = *(_BYTE *)(v4 + 32);
    if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v4 + 33) >= 0x1Eu )
      v2 = 4000;
    *(_DWORD *)(v4 + 124) &= ~0x20000000u;
    v7 = -10000LL * v5;
    KeClearEvent((PRKEVENT)(v4 + 1912));
    KeSetCoalescableTimer((PKTIMER)(a1 + 216), (LARGE_INTEGER)v7, 0, v2, (PKDPC)(a1 + 280));
    return 1;
  }
  return result;
}
