/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1405446A0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopBatteryCheckTrigger @ 0x140544624 (PopBatteryCheckTrigger.c)
 */

__int64 PopRecalculateCBTriggerLevels()
{
  signed __int64 v0; // r14
  int *v1; // rbx
  __int64 v2; // rsi
  signed __int64 v3; // rbp
  int v4; // edi
  int v6; // edi

  PopAcquirePolicyLock();
  v0 = (char *)&qword_140303678 - (_BYTE *)PopPolicy;
  v1 = &dword_1403036CC;
  v2 = 0LL;
  v3 = (_BYTE *)PopPolicy - (_BYTE *)&dword_1403036CC;
  do
  {
    v4 = *v1;
    if ( (*v1 & 0x80u) == 0 )
    {
      *(int *)((char *)v1 + v3 + v0 + 96) = *(int *)((char *)v1 + v3 + 100);
      if ( *((_BYTE *)v1 + v3 + 96) )
      {
        v6 = v4 | 0x80;
        *v1 = v6;
        if ( PopBatteryCheckTrigger((__int64)&unk_1403036C8 + 24 * v2) )
          *v1 = v6 | 2;
      }
    }
    v2 = (unsigned int)(v2 + 1);
    v1 += 6;
  }
  while ( (unsigned int)v2 < 4 );
  return PopReleasePolicyLock();
}
