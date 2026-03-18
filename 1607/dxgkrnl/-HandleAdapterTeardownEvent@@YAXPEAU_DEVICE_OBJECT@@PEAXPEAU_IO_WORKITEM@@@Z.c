/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01457B0
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C001DB9C (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall HandleAdapterTeardownEvent(__int64 IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+28h] [rbp-40h]
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(IoObject) + 220);
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5);
  v6[3] = *(_QWORD *)Context;
  v6[4] = Context[2];
  v6[5] = Context[3];
  WdLogEvent5_WdEvent(v6);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v12 = Context[3];
    v11 = Context[2];
    Template_pqq(v7, &HardwareContentProtectionTeardown, v8, *(_QWORD *)Context, v11, v12);
  }
  memset(v13, 0, 0x20uLL);
  LODWORD(v13[0]) = 11;
  v13[2] = 1LL;
  SMgrGdiCallout(v13, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = 2094LL;
    WdLogEvent5_WdError(v10);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
