/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C
 * Callers:
 *     rimDestroyDeadzone @ 0x1C0005280 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0005348 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00053C4 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C00D1D50 (RIMDestroyPointerDeviceDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C00E084C (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00E0F1C (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C00052CC (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C00E14B8 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(DeadzonePalmTelemetry **this)
{
  DeadzonePalmTelemetry *v3; // rcx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      Win32FreePool(this[7]);
    }
  }
}
