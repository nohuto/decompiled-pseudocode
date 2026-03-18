/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x1401ED038
 * Callers:
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     PopPepCountReadyActivities @ 0x1400DBA7C (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400DBAC0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400DBB20 (PopPepRequestWork.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepCompleteComponentIdleState(unsigned int *a1, int a2)
{
  __int64 v2; // rbx
  char v4; // al
  __int64 v5; // rcx
  char v6; // si
  int v7; // r8d
  unsigned int ready; // eax
  unsigned int v9; // r9d
  __int64 v10; // [rsp+20h] [rbp-18h]
  KIRQL v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64)&a1[50 * a2 + 44];
  v4 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v2, 6u, 1u, &v11);
  v5 = *(_QWORD *)(v2 + 64);
  v6 = v4;
  if ( *(_DWORD *)(v5 + 12) == 1 )
  {
    *(_DWORD *)(v5 + 12) = 2;
    PopPepCountReadyActivities(a1, v2, 2);
    **(_DWORD **)(v2 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 104));
    ready = PopPepCountReadyActivities(a1, v2, v7);
    PopPepRequestWork(v9, ready);
    PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v2, v6, v11);
  }
  else
  {
    PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v2, v4, v11);
    PopPepProcessEvent((__int64)a1, v2, 1u, 6u, v10, 0LL);
  }
}
