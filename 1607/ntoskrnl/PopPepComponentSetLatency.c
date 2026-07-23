/*
 * XREFs of PopPepComponentSetLatency @ 0x1401422B0
 * Callers:
 *     PoFxSetComponentLatency @ 0x140142234 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x1400C0224 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1400C02C8 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400C044C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400C059C (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x1401426C0 (PopPepComponentGetLatencyIdleState.c)
 */

void __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, __int64 a3)
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
