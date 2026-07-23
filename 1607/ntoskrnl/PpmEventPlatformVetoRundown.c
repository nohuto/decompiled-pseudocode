/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x14020C2AC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CD58 (PpmEventTracePreVetoAccounting.c)
 */

void PpmEventPlatformVetoRundown()
{
  KIRQL v0; // al
  _DWORD *v1; // r9
  __int64 v2; // r8
  KIRQL j; // si
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  unsigned int i; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+50h] [rbp-20h]
  int v10; // [rsp+54h] [rbp-1Ch]
  char *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  if ( PpmPlatformStates )
  {
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      UserData.Reserved = 0;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v1 = (_DWORD *)PpmPlatformStates;
      v2 = 0LL;
      i = 0;
      for ( j = v0; (unsigned int)v2 < *v1; i = v2 )
      {
        UserData.Reserved = 0;
        v4 = (_QWORD **)&v1[96 * v2 + 20];
        UserData.Size = 4;
        UserData.Ptr = (ULONGLONG)&i;
        v5 = *v4;
        if ( *v4 != v4 )
        {
          do
          {
            v10 = 0;
            v13 = 0;
            v8 = v5 + 2;
            v9 = 4;
            v11 = (char *)v5 + 20;
            v12 = 4;
            EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 3u, &UserData);
            v5 = (_QWORD *)*v5;
          }
          while ( v5 != v4 );
          LODWORD(v2) = i;
          v1 = (_DWORD *)PpmPlatformStates;
        }
        v2 = (unsigned int)(v2 + 1);
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, j);
    }
  }
}
