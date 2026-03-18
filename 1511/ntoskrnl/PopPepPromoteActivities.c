/*
 * XREFs of PopPepPromoteActivities @ 0x1400DBC94
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400DB654 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1401169C8 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401ED110 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1401ED1F0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1401ED2E0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1401ED734 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepAttemptAcitivityPromotion @ 0x1400DBE40 (PopPepAttemptAcitivityPromotion.c)
 */

__int64 __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rbp
  _DWORD *v7; // r8
  unsigned int v8; // edi
  int v9; // r14d
  __int64 v10; // r15
  _DWORD *v11; // r8
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 result; // rax

  if ( !a3 )
    return result;
  v3 = 0;
  v4 = a3;
  v5 = a2;
  if ( !a2 && a3 == 2 )
    v4 = 1;
  v7 = *(_DWORD **)(a1 + 72);
  if ( (*v7 & 1) != 0 )
    PopPepAttemptAcitivityPromotion(a1, a2, (_DWORD)v7, 0, a1 + 120);
  if ( v4 == 2 )
  {
    v3 = *(_DWORD *)(v5 + 8);
    v8 = v3;
    goto LABEL_11;
  }
  if ( v4 == 3 )
  {
    v8 = 0;
    v3 = *(_DWORD *)(a1 + 168) - 1;
    do
    {
LABEL_11:
      v9 = 1;
      v10 = 64LL;
      v5 = 200LL * v8 + a1 + 176;
      do
      {
        v11 = *(_DWORD **)(v10 + v5);
        if ( (*v11 & 1) != 0 )
          PopPepAttemptAcitivityPromotion(a1, v5, (_DWORD)v11, v9, v5 + 104);
        ++v9;
        v10 += 8LL;
      }
      while ( v9 <= 3 );
      ++v8;
    }
    while ( v8 <= v3 );
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(a1 + 168);
  if ( !v8 )
    goto LABEL_11;
LABEL_16:
  v12 = 4;
  v13 = (_QWORD *)(a1 + 104);
  do
  {
    result = *(unsigned int *)*v13;
    if ( (result & 1) != 0 )
      result = PopPepAttemptAcitivityPromotion(a1, v5, *v13, v12, a1 + 120);
    ++v12;
    ++v13;
  }
  while ( v12 <= 5 );
  return result;
}
