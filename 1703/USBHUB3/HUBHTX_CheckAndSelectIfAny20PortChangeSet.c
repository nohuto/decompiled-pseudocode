/*
 * XREFs of HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x1C00044DC
 * Callers:
 *     HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect @ 0x1C000EFD0 (HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_CheckAndSelectIfAny20PortChangeSet(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // ecx
  unsigned int v4; // esi

  *(_WORD *)(a1 + 186) &= ~*(_WORD *)(a1 + 194);
  v2 = *(_WORD *)(a1 + 186);
  if ( (v2 & 1) != 0 )
  {
    v3 = 16;
    *(_WORD *)(a1 + 186) = v2 & 0xFFFE;
    *(_WORD *)(a1 + 194) |= 1u;
LABEL_11:
    *(_DWORD *)(a1 + 12) = v3;
    return 3089;
  }
  if ( (v2 & 8) != 0 )
  {
    v3 = 19;
    *(_WORD *)(a1 + 186) = v2 & 0xFFF7;
    *(_WORD *)(a1 + 194) |= 8u;
    *(_DWORD *)(a1 + 1424) = 4;
    goto LABEL_11;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v3 = 20;
    *(_WORD *)(a1 + 186) = v2 & 0xFFEF;
    *(_WORD *)(a1 + 194) |= 0x10u;
    goto LABEL_11;
  }
  if ( (v2 & 4) != 0 )
  {
    v3 = 18;
    *(_WORD *)(a1 + 186) = v2 & 0xFFFB;
    *(_WORD *)(a1 + 194) |= 4u;
    goto LABEL_11;
  }
  if ( (v2 & 2) != 0 )
  {
    v3 = 17;
    *(_WORD *)(a1 + 186) = v2 & 0xFFFD;
    *(_WORD *)(a1 + 194) |= 2u;
    goto LABEL_11;
  }
  if ( v2 )
  {
    v4 = 3041;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x52u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v2);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2560LL) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", *(_QWORD *)a1 + 1232LL);
  }
  else
  {
    return 3005;
  }
  return v4;
}
