/*
 * XREFs of DpiRequestIoPowerState @ 0x1C00BC9E0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInitializeFdo @ 0x1C00C6170 (DpiFdoInitializeFdo.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0167580 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0167F30 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoResetFdo @ 0x1C01684A0 (DpiFdoResetFdo.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C000CA28 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  _QWORD *v11; // rax
  _BYTE v12[80]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v12, 0, sizeof(v12));
  *(_DWORD *)&v12[16] = 1953656900;
  *(_DWORD *)&v12[20] = 11;
  *(_DWORD *)&v12[24] = a2;
  *(_QWORD *)&v12[32] = a3;
  *(_DWORD *)&v12[40] = a4;
  KeInitializeEvent((PRKEVENT)&v12[48], SynchronizationEvent, 0);
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v12);
  KeSetEvent((PRKEVENT)(v4 + 2536), 0, 0);
  if ( a2 == 6 )
  {
    v9 = KeWaitForSingleObject(*(PVOID *)(v4 + 2528), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 2528));
  }
  else
  {
    v9 = KeWaitForSingleObject(&v12[48], Executive, 0, 0, 0LL);
  }
  if ( v9 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v11[3] = DpiRequestIoPowerState;
    v11[4] = KeWaitForSingleObject;
    v11[5] = v9;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    return *(unsigned int *)&v12[72];
  }
  return (unsigned int)v9;
}
