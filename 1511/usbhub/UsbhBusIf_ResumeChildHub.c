/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x1C001FAE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F0D8 (UsbhClearPdoIdleReady.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhSshPropagateResume @ 0x1C0025CD0 (UsbhSshPropagateResume.c)
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  _DWORD *v15; // rbx
  _QWORD *v16; // r15
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  __int64 v23; // r9
  _DWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _DWORD *v34; // rax

  v5 = PdoExt(a1, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 147);
  v10 = FdoExt(v6, v7, v8, v9);
  v13 = (unsigned int)v5[353];
  v14 = v10;
  if ( (v13 & 4) != 0 )
  {
    v15 = FdoExt(v6, v13, v11, v12) + 478;
    v16 = (_QWORD *)UsbhIncHubBusy(v6, (__int64)v15, v6, 1129476712LL, 0);
    v19 = Usbh_SSH_Event(v6, 5u, (__int64)v15, v17);
    if ( (v19 & 0xC0000000) == 0xC0000000 )
    {
      v22 = FdoExt(v6, v18, v20, v21);
      Usbh_SSH_Event(v6, 6u, (__int64)(v22 + 478), v23);
    }
    if ( v19 >= 0 || *((_BYTE *)v14 + 3416) )
    {
      v29 = UsbhLatchPdo(v6, *((_WORD *)v5 + 710), 0LL, 0x48536942u);
      if ( !v29 )
      {
        v19 = -1073741661;
        goto LABEL_7;
      }
      FdoExt(v6, v26, v30, v27);
      if ( (int)UsbhSyncResumePort(v6) >= 0 )
        UsbhSshSetPortsBusyState(v6, *((_WORD *)v5 + 710), 2LL, 1LL);
      v34 = FdoExt(v6, v31, v32, v33);
      v19 = UsbhSshPropagateResume(v6, v34 + 478, v29);
      UsbhUnlatchPdo(v6, v29, 0LL, 1213425986LL);
    }
    v24 = FdoExt(v6, v18, v20, v21);
    UsbhClearPdoIdleReady(v6, a1, (__int64)(v24 + 478), v25);
LABEL_7:
    UsbhDecHubBusy(v6, v26, v16, v27);
    return (unsigned int)v19;
  }
  return 3221225473LL;
}
