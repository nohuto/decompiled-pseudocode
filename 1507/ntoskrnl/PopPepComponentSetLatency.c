/*
 * XREFs of PopPepComponentSetLatency @ 0x1401715E4
 * Callers:
 *     PoFxSetComponentLatency @ 0x14017154C (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x140027E40 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140166F68 (PopPepComponentGetLatencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v11; // eax
  unsigned __int8 v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = (__int64)&a1[50 * a2 + 44];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v5, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile signed __int32 *)v5, 6u, 1u, &v12);
  *(_QWORD *)(v5 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v5 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v5 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v11 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork(ready, v11);
  }
  return PopPepReleaseActivityLink((__int64)a1, (_DWORD *)v5, v8, v12);
}
