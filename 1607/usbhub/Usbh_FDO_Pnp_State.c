/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1C000BAB0
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhAddDevice @ 0x1C000A140 (UsbhAddDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C000B930 (UsbhFdoPnp_StartDevice.c)
 *     UsbhInitCallbackWorker @ 0x1C0027CA0 (UsbhInitCallbackWorker.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C004B9C0 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x1C004BB90 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x1C004BC10 (UsbhFdoPnp_SurpriseRemove.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(v4 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v4, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64), a3, a4);
  v8 = *(_QWORD *)(v7 + 1368);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 1044730963;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v8;
    *(_QWORD *)(v9 + 24) = (int)a2;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v8, a4);
  v11 = *(_QWORD *)(v10 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(v10, 0LL, v8, a4);
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64), v8, a4);
  KeWaitForSingleObject((PVOID)(v11 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v11 + 1360);
  *(_DWORD *)(a1 + 60) = a2;
  *(_DWORD *)(a1 + 48) = 827278406;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v11 + 1328) = a1;
  *(_QWORD *)(v7 + 1352) = *(_QWORD *)(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v7 + 1368))(a1, a2);
  *(_QWORD *)(v7 + 1352) = 0LL;
  return result;
}
