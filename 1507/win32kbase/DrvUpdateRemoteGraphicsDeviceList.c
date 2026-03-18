/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BCB2C
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00456E0 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v1 = WdLogNewEntry5_WdAssertion(v0);
    WdLogEvent5_WdAssertion(v1);
  }
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 37) )
    {
      v3 = ((__int64 (__fastcall *)(char *, char *, char *))qword_1C0101458)(
             (char *)i + 296,
             (char *)i + 304,
             (char *)i + 312);
      v8 = v3;
      if ( v3 < 0 )
      {
        v9 = WdLogNewEntry5_WdError(v5, v4, v6, v7);
        *(_QWORD *)(v9 + 24) = i;
        *(_QWORD *)(v9 + 32) = v8;
        WdLogEvent5_WdError(v9);
      }
    }
  }
  return 1LL;
}
