/*
 * XREFs of PopPepComponentSetLatency @ 0x1401ED110
 * Callers:
 *     PoFxSetComponentLatency @ 0x1401E9700 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x1400DBA7C (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1400DBB20 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400DBC94 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x1400DC24C (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14013008C (PopPepComponentGetLatencyIdleState.c)
 */

void __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v11; // [rsp+58h] [rbp+10h] BYREF

  v5 = (__int64)&a1[50 * a2 + 44];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v5, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v11);
  *(_QWORD *)(v5 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v5 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v5 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v10 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork(ready, v10);
  }
  PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v5, v8, v11);
}
