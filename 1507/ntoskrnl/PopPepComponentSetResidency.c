/*
 * XREFs of PopPepComponentSetResidency @ 0x14017143C
 * Callers:
 *     PoFxSetComponentResidency @ 0x1401713A4 (PoFxSetComponentResidency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x140027E40 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140028758 (PopPepComponentGetResidencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetResidency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int ResidencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  unsigned __int8 v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  v4 = (__int64)&a1[50 * a2 + 44];
  if ( a3 == -1LL )
    v3 = 0LL;
  ResidencyIdleState = PopPepComponentGetResidencyIdleState(v4, v3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile signed __int32 *)v4, 6u, 1u, &v12);
  *(_QWORD *)(v4 + 128) = v3;
  v8 = v7;
  *(_QWORD *)(v4 + 120) = v3;
  if ( *(_DWORD *)(v4 + 160) != ResidencyIdleState )
  {
    *(_DWORD *)(v4 + 160) = ResidencyIdleState;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (_DWORD *)v4, v8, v12);
}
