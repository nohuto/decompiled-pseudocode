/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x14056B8DC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopBatteryCheckTrigger @ 0x14056B8B0 (PopBatteryCheckTrigger.c)
 */

__int64 PopRecalculateCBTriggerLevels()
{
  signed __int64 v0; // r14
  int *v1; // rbx
  unsigned int v2; // esi
  signed __int64 v3; // rbp
  int v4; // edi
  int v6; // edi

  PopAcquirePolicyLock();
  v0 = (char *)&qword_14032EA58 - (_BYTE *)PopPolicy;
  v1 = (int *)&unk_14032EAAC;
  v2 = 0;
  v3 = (_BYTE *)PopPolicy - (_BYTE *)&unk_14032EAAC;
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
        if ( PopBatteryCheckTrigger() )
          *v1 = v6 | 2;
      }
    }
    ++v2;
    v1 += 6;
  }
  while ( v2 < 4 );
  return PopReleasePolicyLock();
}
