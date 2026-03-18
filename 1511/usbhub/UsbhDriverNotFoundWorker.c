/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x1C004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  KeWaitForSingleObject(v7 + 716, Executive, 0, 0, 0LL);
  if ( PdoExt(a3, v8, v9, v10)[280] == 100 )
  {
    v11 = v7[353];
    if ( (v11 & 0x18000000) != 0 )
    {
      if ( (v11 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          a1,
          (__int64)(v7 + 424),
          10000LL,
          *((unsigned __int16 *)v7 + 710),
          *((_QWORD *)v7 + 105),
          0x77464E44u);
    }
    else
    {
      v7[353] = v11 | 0x8000000;
      PortData = UsbhGetPortData(a1, v6);
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, v6, 1LL, 0LL);
    }
  }
  KeSetEvent((PRKEVENT)(v7 + 716), 0, 0);
  UsbhUnlatchPdo(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
