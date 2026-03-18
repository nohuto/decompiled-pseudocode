/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01267B0
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0019854 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall HandleAdapterTeardownEvent(
        __int64 IoObject,
        unsigned int *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-48h]
  unsigned int v16; // [rsp+28h] [rbp-40h]
  _DWORD v17[10]; // [rsp+40h] [rbp-28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     IoObject,
                                                     (__int64)Context,
                                                     (__int64)IoWorkItem,
                                                     a4) + 224);
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  v10[3] = *(_QWORD *)Context;
  v10[4] = Context[2];
  v10[5] = Context[3];
  WdLogEvent5_WdEvent(v10);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v16 = Context[3];
    v15 = Context[2];
    Template_pqq(v11, &HardwareContentProtectionTeardown, v12, *(_QWORD *)Context, v15, v16);
  }
  memset(v17, 0, 0x20uLL);
  v17[0] = 11;
  SMgrGdiCallout(v17, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = 2402LL;
    WdLogEvent5_WdError(v14);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
