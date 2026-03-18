/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00CF074
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEB64 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00F7D14 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C6CC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
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
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  if ( v2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 75) & 0x100) != 0 )
      StartContext[317] = 1;
  }
  else if ( StartContext[316] )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = 683LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v3 = 0LL;
  if ( StartContext[317] )
    v3 = 4LL;
  Timer = ExAllocateTimer(0LL, 0LL, v3);
  *((_QWORD *)StartContext + 58) = Timer;
  if ( Timer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = PsCreateSystemThread(
           (PHANDLE)StartContext + 55,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)BLTQUEUE::BltQueueWorkerThread,
           StartContext);
    v8 = v6;
    if ( v6 >= 0 )
    {
      KeWaitForSingleObject(StartContext + 328, Executive, 0, 0, 0LL);
      return 0LL;
    }
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 32) = v8;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v5);
  }
  *(_QWORD *)(v11 + 24) = StartContext;
  WdLogEvent5_WdError(v11);
  return 3221225495LL;
}
