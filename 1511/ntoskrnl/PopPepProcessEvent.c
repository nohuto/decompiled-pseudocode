/*
 * XREFs of PopPepProcessEvent @ 0x1400DB930
 * Callers:
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1400DB738 (PopPluginComponentActive.c)
 *     PopPluginDevicePower @ 0x1400DB7D4 (PopPluginDevicePower.c)
 *     PopPluginComponentIdleState @ 0x1401264E8 (PopPluginComponentIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1401ED038 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x14063749C (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepTryPowerDownDevice @ 0x1400DB654 (PopPepTryPowerDownDevice.c)
 *     PopPepCountReadyActivities @ 0x1400DBA7C (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400DBAC0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400DBB20 (PopPepRequestWork.c)
 *     PopPepComponentGetWork @ 0x1400DBB44 (PopPepComponentGetWork.c)
 *     PopPepPromoteActivities @ 0x1400DBC94 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 *     PopPepCompleteActivity @ 0x1400DBFD8 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1400DC038 (PopPepTriggerActivity.c)
 */

char __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int ready; // r15d
  char Work; // r14
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  char v19; // [rsp+70h] [rbp+18h]

  v6 = (int)a3;
  v10 = PopPepLockActivityLink(a1, a2, a3);
  if ( (_DWORD)v6 == 6 || (v11 = *((_DWORD *)&unk_14023D1DC + 34 * v6), (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( a4 != 6 )
    PopPepTriggerActivity(a1, a2, a4, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
