/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1C006B1D4
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C006C260 (IrqArbCommitAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C008074C (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C006BA60 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C006DD34 (IrqPolicySetDeviceAffinity.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm0
  PVOID *p_Owner; // rax
  char v4; // di
  __int128 v5; // xmm1
  struct _DEVICE_OBJECT *Owner; // r12
  char v7; // r15
  unsigned int v8; // r14d
  PRTL_RANGE v9; // r13
  NTSTATUS DeviceIdtAssignment; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  _DWORD *UserData; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *Data; // rsi
  __int128 v16; // xmm0
  __int64 v17; // rdi
  unsigned int v18; // eax
  _DWORD *v19; // rbx
  NTSTATUS NextRange; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-69h] BYREF
  ULONG Size; // [rsp+48h] [rbp-61h]
  PVOID *v24; // [rsp+50h] [rbp-59h]
  struct _DEVICE_OBJECT *v25; // [rsp+58h] [rbp-51h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-29h]
  __int128 v28; // [rsp+90h] [rbp-19h]
  _BYTE v29[24]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+Fh]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = 0;
  v5 = a2[1];
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v7 = 0;
  v8 = 0;
  v24 = &a1->Owner;
  v9 = a1;
  v25 = Owner;
  v28 = v2;
  Range = a1;
  v27 = v5;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v5;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v11 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v11, 0LL, v29);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = v30;
      v8 += v30;
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v4 )
      {
        IrqPolicySetDeviceAffinity(Owner, v29);
        v12 = v30;
        v4 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v24;
  }
  if ( !v8 )
    return (unsigned int)DeviceIdtAssignment;
  Size = 80 * (v8 - 1) + 88;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Size, 0x49706341u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    v16 = v28;
    *Data = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v16;
    v17 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v27;
    while ( 1 )
    {
      if ( v9->Owner == *v24 )
      {
        v18 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v18, 0LL, v29);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_24;
        if ( v7 )
          v17 = (unsigned int)v17 - v30;
        v19 = Range->UserData;
        memmove(&Data[20 * v17 + 2], v19 + 12, 80LL * v30);
        if ( (v19[1] & 0x10) != 0 && v19[2] == 1 )
          Data[20 * v17 + 17] |= 1u;
        if ( !v7 )
          v17 = v30 + (unsigned int)v17;
        v19[1] &= ~1u;
        Owner = v25;
      }
      NextRange = RtlGetNextRange(&Iterator, &Range, 1u);
      if ( (unsigned int)v17 >= v8 || NextRange == -2147483622 )
        break;
      v9 = Range;
    }
    DeviceIdtAssignment = IoSetDevicePropertyData(Owner, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, Size, Data);
LABEL_24:
    ExFreePoolWithTag(Data, 0);
    return (unsigned int)DeviceIdtAssignment;
  }
  return 3221225626LL;
}
