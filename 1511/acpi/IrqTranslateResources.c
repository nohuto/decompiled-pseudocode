/*
 * XREFs of IrqTranslateResources @ 0x1C0069440
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0019894 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C00198A8 (IrqLibAcquireArbiterLock.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0069590 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0069D80 (IrqArbGsivFromIrq.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C006AB60 (IrqTranslatepQueryDeviceIrql.c)
 */

__int64 __fastcall IrqTranslateResources(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        PVOID a6,
        PRTL_RANGE Range)
{
  PRTL_RANGE v7; // rsi
  int DeviceIdtAssignment; // ebx
  unsigned int v11; // eax
  PRTL_RANGE v12; // rax
  int v14; // edx
  ULONGLONG v15; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-44h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-38h] BYREF

  v7 = Range;
  DeviceIdtAssignment = 0;
  *(_OWORD *)&Range->Start = *(_OWORD *)a2;
  LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
  if ( a6 == *(PVOID *)(RootDeviceExtension + 728) )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      DeviceIdtAssignment = -1073741637;
  }
  else
  {
    v11 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v11, 0LL, &v15);
    if ( DeviceIdtAssignment >= 0 )
    {
      v14 = v17;
      HIWORD(v7->Start) = v16;
      *(ULONGLONG *)((char *)&v7->End + 4) = v15;
      LODWORD(v7->End) = v14;
      DeviceIdtAssignment = 288;
      WORD2(v7->Start) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(unsigned int *)(a2 + 8));
    }
    else
    {
      RtlGetFirstRange(RangeList, &Iterator, &Range);
      v12 = Range;
      if ( !Range )
        goto LABEL_9;
      do
      {
        if ( v12->Owner == a6 )
          LOBYTE(a3) = 1;
        RtlGetNextRange(&Iterator, &Range, 1u);
        v12 = Range;
      }
      while ( Range );
      if ( !(_BYTE)a3 )
      {
LABEL_9:
        DeviceIdtAssignment = 0;
        *(_OWORD *)&v7->Start = *(_OWORD *)a2;
        LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
      }
    }
  }
  IrqLibReleaseArbiterLock();
  return (unsigned int)DeviceIdtAssignment;
}
