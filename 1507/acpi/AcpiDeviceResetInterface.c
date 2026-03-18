/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C0039030
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0007730 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00089D4 (ACPIInitReferenceDeviceExtension.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rbp
  _WORD *v5; // r14
  unsigned int v6; // edi
  KIRQL v7; // r9
  bool v8; // si
  char v9; // r12
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD **v13; // r8
  _QWORD *i; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 result; // rax
  bool v21; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD **)(v2 + 24);
  if ( *(_WORD *)(v2 + 16) < 0x38u )
  {
    v6 = -1073741789;
    goto LABEL_31;
  }
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v8 = v4[55] != 0LL;
  v21 = v8;
  if ( v4[49] )
  {
    v9 = 1;
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  v11 = v4[48];
  v9 = 0;
  if ( !v11 )
    goto LABEL_5;
  v12 = *(_QWORD *)(v11 + 8);
  v10 = 1;
  if ( (*(_DWORD *)(v12 + 16) & 0x220LL) != 0 )
    goto LABEL_5;
  v13 = (_QWORD **)(v12 + 48);
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(*(i - 1) + 904LL) & 0x800LL) == 0 )
      goto LABEL_5;
  }
LABEL_6:
  KeReleaseSpinLock(&AcpiPowerLock, v7);
  if ( !v8 && !v9 && !v10
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)*v5 + 88LL, 0x51706341u),
        (v16 = PoolWithTag) == 0LL) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    goto LABEL_31;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  ACPIInitReferenceDeviceExtension((__int64)v4);
  v16[1] = v4;
  *(_DWORD *)v16 = 1;
  if ( *v5 )
  {
    memmove(v16 + 11, v5, (unsigned __int16)*v5);
    v16[10] = v16 + 11;
  }
  *((_BYTE *)v16 + 16) = v9;
  if ( v9 )
  {
    v17 = v4[49];
  }
  else
  {
    if ( !v10 )
      goto LABEL_25;
    v17 = v4[48];
  }
  v16[9] = *(_QWORD *)(v17 + 8);
LABEL_25:
  v16[8] = v16;
  v16[7] = AcpiDeviceResetCompleteResetWorker;
  v16[5] = 0LL;
  *(_OWORD *)v5 = DeviceResetInterface;
  *((_OWORD *)v5 + 1) = *(_OWORD *)&off_1C004DF00;
  *((_OWORD *)v5 + 2) = *(_OWORD *)&off_1C004DF10;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 1) = v16;
  v18 = v16[10];
  if ( v18 && *(_QWORD *)(v18 + 32) )
    *((_DWORD *)v5 + 10) = *(_DWORD *)(v18 + 40);
  v19 = v21;
  if ( v16[9] )
    v19 |= 2u;
  *((_DWORD *)v5 + 10) = v19;
LABEL_31:
  result = v6;
  *(_DWORD *)(a2 + 48) = v6;
  return result;
}
