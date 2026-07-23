/*
 * XREFs of PopPepTriggerActivity @ 0x1400C0888
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400BFB50 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 *     PopPepTryPowerUpComponent @ 0x1400C0C44 (PopPepTryPowerUpComponent.c)
 *     PopPepSurprisePowerOn @ 0x140125F60 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopPepCancelActivities @ 0x1400C0604 (PopPepCancelActivities.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepTriggerActivity(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v8; // r10
  int v9; // edx
  __int64 v10; // r8
  _DWORD *v11; // r9
  _DWORD *v12; // rcx

  v4 = a3;
  PopPepCancelActivities(a1, a2, a3);
  if ( (unsigned int)v4 > 5 || (v8 = a1 + 72, *((_BYTE *)&ActivityAttributes + 136 * v4) != 1) )
    v8 = a2 + 56;
  v9 = 0;
  v10 = 0LL;
  do
  {
    v11 = *(_DWORD **)(v8 + 8 * v10);
    if ( v11 && (*((_DWORD *)&ActivityAttributes + 34 * v4 + v10 + 4) & *v11) != 0 )
      PopFxBugCheck(0x666uLL, v8, v4, v9);
    ++v9;
    ++v10;
  }
  while ( v9 < 6 );
  if ( a2 )
    v12 = *(_DWORD **)(a2 + 8 * v4 + 56);
  else
    v12 = *(_DWORD **)(a1 + 8 * v4 + 72);
  *v12 |= 1u;
  v12[1] = a4;
  return (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))&ActivityAttributes + 17 * v4 + 14))(a1, a2, a4);
}
