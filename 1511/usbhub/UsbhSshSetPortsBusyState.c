/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C000FDC0
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BF70 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000D644 (UsbhSet_Pdo_Dx.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C001FAE0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00450F4 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AEC0 (UsbhDriverNotFoundWorker.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSshPortsBusy @ 0x1C00262E0 (UsbhSshPortsBusy.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  int v6; // ebp
  LONG result; // eax
  __int64 v9; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // al
  int v13; // ebp
  int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r11d
  int v19; // r10d
  _QWORD *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax

  v5 = a4;
  v6 = a3;
  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
    v11 = a2 >> 5;
    v12 = a2 & 0x1F;
    v13 = v6 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(v9 + 4LL * v11 + 3320) |= 1 << v12;
        Log(a1, 0x10000, 1400066114, v10, a2);
        if ( !v14 )
        {
          v15 = FdoExt(a1);
          UsbhSshPortsBusy(a1, v15 + 1912, v5);
          UsbhDisableTimerObject(a1, v9 + 3200, v16, v17);
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 4LL * v11 + 3320) &= ~(1 << v12);
      Log(a1, 0x10000, 1400066121, v10, a2);
      if ( v19 && !v18 )
      {
        FdoExt(a1);
        v20 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(FdoExt(a1) + 3312), 0LL);
        Log(a1, 0x10000, 1213419565, 0, (__int64)v20);
        UsbhDecHubBusy(a1, v21, v20, v22);
        v23 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v9 + 3200, *(unsigned int *)(v9 + 5256), 0LL, v23 + 1912, 0x77485353u);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
