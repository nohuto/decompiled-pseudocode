/*
 * XREFs of ACPIAmliEvaluateDsm @ 0x1C006BC54
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006B1F8 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C006D7A8 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIAmliEvaluateDsm(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rbp
  int v10; // ebx
  PVOID PoolWithTag; // rsi
  _WORD *v13; // rdi

  v7 = a4;
  v8 = a3;
  v9 = (__int64 *)AMLIGetNamedChild(a1, 1297302623);
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
      if ( v13 )
      {
        memset(PoolWithTag, 0, 0xA0uLL);
        memset(v13, 0, 0x28uLL);
        *((_DWORD *)PoolWithTag + 6) = 16;
        *((_WORD *)PoolWithTag + 1) = 3;
        *((_QWORD *)PoolWithTag + 4) = a2;
        *((_QWORD *)PoolWithTag + 7) = v8;
        *((_QWORD *)PoolWithTag + 12) = v7;
        *((_WORD *)PoolWithTag + 21) = 1;
        *((_WORD *)PoolWithTag + 41) = 1;
        *((_WORD *)PoolWithTag + 61) = 4;
        *((_DWORD *)PoolWithTag + 36) = 48;
        *((_QWORD *)PoolWithTag + 19) = a5;
        v10 = AMLIEvalNameSpaceObject(v9, v13, 4u, PoolWithTag);
        if ( v10 >= 0 )
        {
          if ( (_DWORD)v7 || v13[1] == 3 )
          {
            *a6 = v13;
            v10 = 0;
          }
          else
          {
            v10 = -1073741823;
          }
        }
      }
      else
      {
        v10 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x41706341u);
      if ( v10 < 0 && v13 )
        ExFreePoolWithTag(v13, 0x52706341u);
    }
    else
    {
      v10 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
