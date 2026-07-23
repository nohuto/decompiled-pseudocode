/*
 * XREFs of PopPepCompleteComponentActiveActivity @ 0x1400C09DC
 * Callers:
 *     <none>
 * Callees:
 *     PopPepTryPowerDownComponent @ 0x1400C0A4C (PopPepTryPowerDownComponent.c)
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400C0B78 (PopPepComponentGetResidencyIdleState.c)
 */

void __fastcall PopPepCompleteComponentActiveActivity(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)(a2 + 136) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 188) - 1;
    *(_DWORD *)(a2 + 160) = PopPepComponentGetResidencyIdleState(a2, *(_QWORD *)(a2 + 120));
    *(_DWORD *)(a2 + 4) &= ~1u;
    PopPepUpdateIdleState(a1, a2, 0LL);
    PopPepTryPowerDownComponent(a1, a2);
  }
}
