/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BE368
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A9454 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00374B0 (UserIsUserCritSecIn.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00873A0 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v4 = WdLogNewEntry5_WdAssertion(v1, v0, v2, v3);
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 37) )
    {
      v6 = ((__int64 (__fastcall *)(char *, char *, char *))qword_1C0104278)(
             (char *)i + 296,
             (char *)i + 304,
             (char *)i + 312);
      v11 = v6;
      if ( v6 >= 0 )
      {
        DrvUpdateRemoteAdapterInfo(i);
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v8, v7, v9, v10);
        *(_QWORD *)(v12 + 24) = i;
        *(_QWORD *)(v12 + 32) = v11;
        WdLogEvent5_WdError(v12);
      }
    }
  }
  return 1LL;
}
