/*
 * XREFs of ndisSetWakeUpTimer @ 0x1C002497C
 * Callers:
 *     ndisMWakeUpDpcX @ 0x1C000F8C0 (ndisMWakeUpDpcX.c)
 *     ndisMWakeUpDpc @ 0x1C005C9F0 (ndisMWakeUpDpc.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00678CC (ndisSelectiveSuspendResumeOperations.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C0024A20 (ndisCheckForHangSupported.c)
 */

char __fastcall ndisSetWakeUpTimer(__int64 a1)
{
  ULONG v2; // esi
  __int64 v3; // rcx
  int v4; // r8d
  unsigned __int8 v5; // al
  __int64 v6; // rbx

  v2 = 1000 * *(_DWORD *)(a1 + 376) / 5;
  if ( !(unsigned __int8)ndisCheckForHangSupported() )
    return 0;
  v5 = *(_BYTE *)(v3 + 32);
  if ( v5 > 6u || v5 == 6 && *(_BYTE *)(v3 + 33) >= 0x1Eu )
    v2 = 4000;
  *(_DWORD *)(v3 + 124) &= ~0x20000000u;
  v6 = -10000LL * v4;
  KeClearEvent((PRKEVENT)(v3 + 1912));
  KeSetCoalescableTimer((PKTIMER)(a1 + 216), (LARGE_INTEGER)v6, 0, v2, (PKDPC)(a1 + 280));
  return 1;
}
