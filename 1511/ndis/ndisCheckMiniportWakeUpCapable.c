/*
 * XREFs of ndisCheckMiniportWakeUpCapable @ 0x1C001FB7C
 * Callers:
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C0045BC0 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 */

char __fastcall ndisCheckMiniportWakeUpCapable(__int64 a1)
{
  int v1; // eax
  int v3; // ecx

  v1 = *(_DWORD *)(a1 + 1048);
  v3 = 2;
  if ( ((unsigned int)(v1 - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1044) - 2) <= 2
     || (*(_DWORD *)(a1 + 1004) & 2) != 0)
    && *(_DWORD *)(a1 + 1268)
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && (*(_DWORD *)(a1 + 1228) & 0x3800) != 0 )
  {
    *(_DWORD *)(a1 + 124) |= 0x4000000u;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 124) &= ~0x4000000u;
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(121LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
      Template_jqxqq(
        v3,
        (unsigned int)&InitializeAdapterInfo,
        a1 + 4064,
        a1 + 4064,
        *(_DWORD *)(a1 + 4112),
        *(_QWORD *)(a1 + 4080),
        3,
        0);
    return 0;
  }
}
