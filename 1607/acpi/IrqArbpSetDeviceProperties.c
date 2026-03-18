/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1C0088E18
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C008A080 (IrqArbCommitAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00A23AC (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C0088418 (IrqPolicySetDeviceAffinity.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm0
  PVOID *p_Owner; // rax
  __int128 v4; // xmm1
  char v5; // di
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
  unsigned int v17; // edi
  unsigned int v18; // eax
  _DWORD *v19; // rbx
  __int64 v20; // r12
  NTSTATUS NextRange; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-69h] BYREF
  ULONG Size; // [rsp+48h] [rbp-61h]
  PVOID *v25; // [rsp+50h] [rbp-59h]
  struct _DEVICE_OBJECT *v26; // [rsp+58h] [rbp-51h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-49h] BYREF
  __int128 v28; // [rsp+80h] [rbp-29h]
  __int128 v29; // [rsp+90h] [rbp-19h]
  unsigned __int16 v30[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+Fh]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = a2[1];
  v5 = 0;
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v7 = 0;
  v8 = 0;
  v25 = &a1->Owner;
  v9 = a1;
  v26 = Owner;
  v28 = v2;
  Range = a1;
  v29 = v4;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v4;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v11 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v11, 0LL, v30);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = v31;
      v8 += v31;
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v5 )
      {
        IrqPolicySetDeviceAffinity(Owner, v30);
        v12 = v31;
        v5 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v25;
  }
  if ( !v8 )
    return (unsigned int)DeviceIdtAssignment;
  Size = 88 * (v8 - 1) + 96;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Size, 0x49706341u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v16 = v28;
    *Data = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v16;
    v17 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v29;
    while ( 1 )
    {
      if ( v9->Owner == *v25 )
      {
        v18 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v18, 0LL, v30);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_24;
        if ( v7 )
          v17 -= v31;
        v19 = Range->UserData;
        v20 = 22LL * v17;
        memmove(&Data[v20 + 2], v19 + 12, 88LL * v31);
        if ( (v19[1] & 0x10) != 0 && v19[2] == 1 )
          Data[v20 + 17] |= 1u;
        if ( !v7 )
          v17 += v31;
        v19[1] &= ~1u;
        Owner = v26;
      }
      NextRange = RtlGetNextRange(&Iterator, &Range, 1u);
      if ( v17 >= v8 || NextRange == -2147483622 )
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
