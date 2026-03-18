/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x1C004AF10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // r14
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 PortData; // rax

  v6 = a2;
  v7 = PdoExt(a3, a2, a3, a4);
  KeWaitForSingleObject(v7 + 714, Executive, 0, 0, 0LL);
  if ( PdoExt(a3, v8, v9, v10)[280] == 100 )
  {
    v11 = v7[353];
    if ( (v11 & 0x18000000) != 0 )
    {
      if ( (v11 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          (__int64)a1,
          (__int64)(v7 + 424),
          10000LL,
          *((unsigned __int16 *)v7 + 710),
          *((_QWORD *)v7 + 105),
          0x77464E44u);
    }
    else
    {
      v7[353] = v11 | 0x8000000;
      PortData = UsbhGetPortData((__int64)a1, v6);
      UsbhDisablePort((__int64)a1, PortData);
      UsbhSshSetPortsBusyState(a1, v6, 1LL, 0LL);
    }
  }
  KeSetEvent((PRKEVENT)v7 + 119, 0, 0);
  UsbhUnlatchPdo((__int64)a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
