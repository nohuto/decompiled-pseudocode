/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C0054D60
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0052E00 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00012D8 (PortPassThroughFreeIrp.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0024F20 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C003A17C (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C003A21C (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C003A278 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExValidate @ 0x1C003A510 (PortPassThroughExValidate.c)
 *     PortpEnableCancel @ 0x1C003AAAC (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C004C000 (PortPassThroughBuildIrp.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0054A54 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C0054D20 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C005530C (PortPassThroughSendAsync.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8)
{
  void *v11; // r14
  int BasicStructureSize; // ebx
  unsigned int *PoolWithTag; // rax
  __int64 v15; // rsi
  KPROCESSOR_MODE RequestorMode; // al
  __int64 v17; // rbx
  ULONG v18; // r8d
  void *v19; // rdx
  PIRP v20; // r15
  unsigned int *v21; // rax
  unsigned int *v22; // rbp
  _BYTE *v23; // rax
  __int64 v24; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-48h]
  void *v28; // [rsp+88h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+20h] BYREF

  a7 = 0LL;
  v28 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v11 = 0LL;
  if ( ((a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync(a1, a5, a6, v27, a8);
  BasicStructureSize = PortPassThroughExBasicValidation(a2);
  if ( BasicStructureSize < 0 )
    goto LABEL_25;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)a2, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_25;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    BasicStructureSize = -1073741670;
LABEL_25:
    a2->IoStatus.Status = BasicStructureSize;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)BasicStructureSize;
  }
  BasicStructureSize = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( BasicStructureSize < 0 )
  {
LABEL_24:
    ExFreePoolWithTag((PVOID)v15, 0x69506C50u);
    goto LABEL_25;
  }
  PortPassThroughExGetDataBuffers(v15, (__int64)a2, a3, &a7, &v28);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v17 = (__int64)a7;
  if ( a7 )
    v18 = *(_DWORD *)(v15 + 32);
  else
    v18 = *(_DWORD *)(v15 + 36);
  v19 = v28;
  if ( a7 )
    v19 = a7;
  v20 = PortPassThroughBuildIrp((__int64)a1, v19, v18, *(_BYTE *)(v15 + 18) == 1, RequestorMode);
  if ( !v20 )
  {
    BasicStructureSize = -1073741670;
    goto LABEL_24;
  }
  v21 = PortPassThroughExBuildSrbEx(a2, v15, v17, (__int64)v28, v26);
  v22 = v21;
  if ( !v21
    || (*((_QWORD *)v21 + 10) = v20,
        v20->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v21,
        v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v11 = v23) == 0LL) )
  {
    BasicStructureSize = -1073741670;
LABEL_20:
    PortPassThroughFreeIrp(v20);
    if ( v22 )
      PortPassThroughExFreeSrbEx(v22);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x69506C50u);
    goto LABEL_24;
  }
  *((_QWORD *)v23 + 3) = v22;
  *((_QWORD *)v23 + 1) = v20;
  v24 = (__int64)v23;
  *v23 = a3;
  *((_QWORD *)v23 + 2) = a2;
  *((_QWORD *)v23 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v23 + 5) = a8;
  CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v11;
  CurrentStackLocation[-1].Control = -32;
  BasicStructureSize = PortpEnableCancel((__int64)a2, v24);
  if ( BasicStructureSize != 259 )
    goto LABEL_20;
  ExFreePoolWithTag((PVOID)v15, 0x69506C50u);
  IofCallDriver(a1, v20);
  return 259LL;
}
