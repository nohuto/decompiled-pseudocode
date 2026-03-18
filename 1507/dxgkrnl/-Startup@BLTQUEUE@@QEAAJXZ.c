/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00D23D8
 * Callers:
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00D2844 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0128CC0 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000A4D0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(PVOID StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 v3; // r8
  __int64 Timer; // rax
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = *(DXGDODPRESENT **)StartContext;
  *((_QWORD *)StartContext + 29) = &Event;
  if ( v2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 71) & 0x80u) != 0 )
      *((_BYTE *)StartContext + 221) = 1;
  }
  else if ( *((_BYTE *)StartContext + 220) )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = 682LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v3 = 0LL;
  if ( *((_BYTE *)StartContext + 221) )
    v3 = 4LL;
  Timer = ExAllocateTimer(0LL, 0LL, v3);
  *((_QWORD *)StartContext + 40) = Timer;
  if ( Timer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = PsCreateSystemThread(
           (PHANDLE)StartContext + 37,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           BLTQUEUE::BltQueueWorkerThread,
           StartContext);
    v8 = v6;
    if ( v6 >= 0 )
    {
      KeWaitForSingleObject(*((PVOID *)StartContext + 29), Executive, 0, 0, 0LL);
      return 0LL;
    }
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = StartContext;
    *(_QWORD *)(v12 + 32) = v8;
    WdLogEvent5_WdError(v12);
    *((_QWORD *)StartContext + 29) = 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = StartContext;
    WdLogEvent5_WdError(v11);
  }
  return 3221225495LL;
}
