/*
 * XREFs of ndisSetWakeUpTimer @ 0x1C001BBF8
 * Callers:
 *     ndisMWakeUpDpcX @ 0x1C0008120 (ndisMWakeUpDpcX.c)
 *     ndisMWakeUpDpc @ 0x1C005CF70 (ndisMWakeUpDpc.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006880C (ndisSelectiveSuspendResumeOperations.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C001BC98 (ndisCheckForHangSupported.c)
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
