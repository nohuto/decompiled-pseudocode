/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x1C0021590
 * Callers:
 *     <none>
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F1D8 (UsbhClearPdoIdleReady.c)
 *     UsbhSshPropagateResume @ 0x1C0020824 (UsbhSshPropagateResume.c)
 *     UsbhSyncResumePort @ 0x1C00291BC (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rsi
  struct _DEVICE_OBJECT *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v30; // r8
  struct _DEVICE_OBJECT *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rax
  __int64 v36; // r9

  v5 = PdoExt(a1, a2, a3, a4);
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 147);
  FdoExt((__int64)v6, v7, v8, v9);
  v12 = (unsigned int)v5[353];
  if ( (v12 & 4) != 0 )
  {
    v13 = FdoExt((__int64)v6, v12, v10, v11) + 478;
    v14 = (_QWORD *)UsbhIncHubBusy(v6, (__int64)v13, (__int64)v6, 1129476712LL, 0);
    if ( (Usbh_SSH_Event(v6, 5u, (__int64)v13, v15) & 0xC0000000) == 0xC0000000 )
    {
      v19 = FdoExt((__int64)v6, v16, v17, v18);
      v22 = Usbh_SSH_Event(v6, 6u, (__int64)(v19 + 478), v20);
    }
    else
    {
      v31 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)v6, *((_WORD *)v5 + 710), 0LL, 0x48536942u);
      if ( !v31 )
      {
        v22 = -1073741661;
        goto LABEL_5;
      }
      FdoExt((__int64)v6, v27, v30, v28);
      if ( (int)UsbhSyncResumePort((_DWORD)v6) >= 0 )
        UsbhSshSetPortsBusyState(v6, *((_WORD *)v5 + 710), 2LL, 1LL);
      v35 = FdoExt((__int64)v6, v32, v33, v34);
      v22 = UsbhSshPropagateResume((__int64)v6, (__int64)(v35 + 478), v31, v36);
      UsbhUnlatchPdo((__int64)v6, (__int64)v31, 0LL, 0x48536942u);
    }
    v25 = FdoExt((__int64)v6, v21, v23, v24);
    UsbhClearPdoIdleReady((__int64)v6, a1, (__int64)(v25 + 478), v26);
LABEL_5:
    UsbhDecHubBusy((__int64)v6, v27, v14, v28);
    return v22;
  }
  return 3221225473LL;
}
