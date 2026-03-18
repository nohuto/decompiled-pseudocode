/*
 * XREFs of IrqTranslateResources @ 0x1C0089600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dDDq @ 0x1C00220A8 (WPP_RECORDER_SF_dDDq.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0022158 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C002216C (IrqLibAcquireArbiterLock.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C0088B98 (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
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
  PRTL_RANGE v7; // rbx
  int DeviceIdtAssignment; // edi
  unsigned int v11; // eax
  PRTL_RANGE v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v17; // edx
  ULONGLONG v18; // [rsp+50h] [rbp-58h] BYREF
  __int16 v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+64h] [rbp-44h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+70h] [rbp-38h] BYREF

  v7 = Range;
  DeviceIdtAssignment = 0;
  *(_OWORD *)&Range->Start = *(_OWORD *)a2;
  LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
  if ( a6 == *(PVOID *)(RootDeviceExtension + 736) )
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
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v11, 0LL, &v18);
    if ( DeviceIdtAssignment >= 0 )
    {
      v17 = v20;
      HIWORD(v7->Start) = v19;
      *(ULONGLONG *)((char *)&v7->End + 4) = v18;
      LODWORD(v7->End) = v17;
      DeviceIdtAssignment = 288;
      WORD2(v7->Start) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(_DWORD *)(a2 + 8), v17);
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
  WPP_RECORDER_SF_dDDq(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
  return (unsigned int)DeviceIdtAssignment;
}
