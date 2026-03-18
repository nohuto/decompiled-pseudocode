/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C0018360
 * Callers:
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BDAC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AF10 (UsbhDriverNotFoundWorker.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhSshPortsBusy @ 0x1C000B91C (UsbhSshPortsBusy.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(struct _DEVICE_OBJECT *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  int v6; // ebp
  LONG result; // eax
  char *DeviceExtension; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // al
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r10d
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r11d
  int v23; // r10d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _DWORD *v33; // rax

  v5 = a4;
  v6 = a3;
  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
    DeviceExtension = (char *)a1->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
    KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
    v10 = *((_DWORD *)DeviceExtension + 830)
       || *((_DWORD *)DeviceExtension + 831)
       || *((_DWORD *)DeviceExtension + 832)
       || *((_DWORD *)DeviceExtension + 833);
    v11 = a2 >> 5;
    v12 = a2 & 0x1F;
    v13 = v6 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)&DeviceExtension[4 * v11 + 3320] |= 1 << v12;
        Log((__int64)a1, 0x10000, 1400066114, v10, a2);
        if ( !v17 )
        {
          v18 = FdoExt((__int64)a1, v14, v15, v16);
          UsbhSshPortsBusy(a1, (__int64)(v18 + 478), v5);
          UsbhDisableTimerObject(a1, DeviceExtension + 3200);
        }
      }
    }
    else
    {
      *(_DWORD *)&DeviceExtension[4 * v11 + 3320] &= ~(1 << v12);
      Log((__int64)a1, 0x10000, 1400066121, v10, a2);
      if ( v23 && !v22 )
      {
        FdoExt((__int64)a1, v19, v20, v21);
        v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt((__int64)a1, v24, v25, v26) + 414, 0LL);
        Log((__int64)a1, 0x10000, 1213419565, 0LL, (__int64)v27);
        UsbhDecHubBusy((__int64)a1, v28, v27, v29);
        v33 = FdoExt((__int64)a1, v30, v31, v32);
        UsbhEnableTimerObject(
          (_DWORD)a1,
          (_DWORD)DeviceExtension + 3200,
          *((_DWORD *)DeviceExtension + 1314),
          0,
          (__int64)(v33 + 478),
          2001228627);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
  }
  return result;
}
