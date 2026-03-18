/*
 * XREFs of PopPepUpdateConstraints @ 0x140136D3C
 * Callers:
 *     PopPluginDevicePower @ 0x140027AFC (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x14023B440 (PopPepDeviceWaitWake.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x140027E40 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x140027E84 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     PopPepCancelActivityRange @ 0x140028508 (PopPepCancelActivityRange.c)
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

int __fastcall PopPepUpdateConstraints(unsigned int *a1, int a2, char a3)
{
  __int64 v3; // r14
  char v6; // r15
  unsigned int v7; // esi
  unsigned int i; // r12d
  __int64 v9; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v6 = PopPepLockActivityLink((__int64)a1, 0LL, 4u, 1u, &v15);
  v7 = 0;
  for ( i = PopPepCountReadyActivities(a1, 0LL, 3); v7 < a1[42]; ++v7 )
  {
    v9 = (__int64)&a1[50 * v7 + 44];
    if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v9 + 4 * v3 + 152) = *(_DWORD *)(v9 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v9 + 56, 1, 1, 1, (volatile signed __int32 *)(v9 + 104));
        *(_DWORD *)(v9 + 4 * v3 + 152) = 0;
        KeResetEvent((PRKEVENT)(v9 + 32));
      }
      PopPepUpdateIdleState((__int64)a1, v9, a3);
      v14 = *(_QWORD *)(v9 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v14 )
          *(_BYTE *)(v14 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities((__int64)a1, 0LL, 3);
  ready = PopPepCountReadyActivities(a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  result = PopPepReleaseActivityLink((__int64)a1, 0LL, v6, v15);
  if ( !a3 )
  {
    for ( j = 0; j < a1[42]; ++j )
    {
      result = j;
      v13 = 50LL * j;
      if ( (a1[v13 + 48] & 1) != 0 )
        result = KeWaitForSingleObject(&a1[v13 + 52], Executive, 0, 0, 0LL);
    }
  }
  return result;
}
