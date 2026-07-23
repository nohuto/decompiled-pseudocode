/*
 * XREFs of PopPepComponentSetResidency @ 0x14014C2A0
 * Callers:
 *     PoFxSetComponentResidency @ 0x14014C224 (PoFxSetComponentResidency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x1400C0224 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1400C02C8 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400C044C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400C059C (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400C0B78 (PopPepComponentGetResidencyIdleState.c)
 */

void __fastcall PopPepComponentSetResidency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int ResidencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  v4 = (__int64)&a1[50 * a2 + 44];
  if ( a3 == -1LL )
    v3 = 0LL;
  ResidencyIdleState = PopPepComponentGetResidencyIdleState(v4, v3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v11);
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
  PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v11);
}
