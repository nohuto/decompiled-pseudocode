/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C0060374
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C005E0BC (RaidAdapterPassThrough.c)
 * Callees:
 *     StorASyncScsiPassThroughCompletion @ 0x1C002A680 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughBuildIrpEx @ 0x1C004397C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughExBasicValidation @ 0x1C0043C98 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C0043D38 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0043D94 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExValidate @ 0x1C004402C (PortPassThroughExValidate.c)
 *     PortPassThroughFreeIrpEx @ 0x1C0044134 (PortPassThroughFreeIrpEx.c)
 *     PortpEnableCancel @ 0x1C00445FC (PortpEnableCancel.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C005FFF4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C0060334 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C006094C (PortPassThroughSendAsync.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        int a4,
        int a5,
        int a6,
        PMDL MemoryDescriptorList,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v12; // r13
  int v13; // r9d
  void *v14; // r14
  int BasicStructureSize; // ebx
  unsigned int *PoolWithTag; // rax
  __int64 v18; // rsi
  char v19; // dl
  char v20; // r11
  KPROCESSOR_MODE RequestorMode; // cl
  __int64 v22; // rbx
  char v23; // r9
  ULONG v24; // r8d
  void *v25; // rdx
  PIRP v26; // r15
  struct _MDL *v27; // r12
  unsigned int *v28; // rax
  _BYTE *v29; // rax
  __int64 v30; // rdx
  _IO_STACK_LOCATION *v31; // rax
  ULONG AccessMode; // [rsp+20h] [rbp-40h]
  int v33; // [rsp+30h] [rbp-30h]
  int v34[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(NumberOfBytes) = a4;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)v34 = 0LL;
  v36 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v12 = 0LL;
  v13 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  MemoryDescriptorList = 0LL;
  v14 = 0LL;
  if ( (v13 & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync((int)a1, a2, a5, a6, v33, a8);
  BasicStructureSize = PortPassThroughExBasicValidation(a2);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)a2, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  v18 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    BasicStructureSize = -1073741670;
LABEL_27:
    a2->IoStatus.Status = BasicStructureSize;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)BasicStructureSize;
  }
  BasicStructureSize = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( BasicStructureSize < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)v18, 0x69506C50u);
    goto LABEL_27;
  }
  PortPassThroughExGetDataBuffers(v18, (__int64)a2, a3, v34, &v36);
  v19 = *(_BYTE *)(v18 + 18);
  v20 = v19 == 3;
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v22 = *(_QWORD *)v34;
  v23 = v19 == 1;
  if ( *(_QWORD *)v34 )
    v24 = *(_DWORD *)(v18 + 32);
  else
    v24 = *(_DWORD *)(v18 + 36);
  v25 = (void *)v36;
  if ( *(_QWORD *)v34 )
    v25 = *(void **)v34;
  v26 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          v25,
          v24,
          v23,
          RequestorMode,
          a2,
          v20,
          (void *)v36,
          *(_DWORD *)(v18 + 36),
          &MemoryDescriptorList);
  if ( !v26
    || (v28 = PortPassThroughExBuildSrbEx(a2, v18, v22, v36, AccessMode, (__int64)MemoryDescriptorList),
        (v12 = v28) == 0LL)
    || (*((_QWORD *)v28 + 10) = v26,
        v26->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v28,
        v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v14 = v29) == 0LL) )
  {
    BasicStructureSize = -1073741670;
LABEL_18:
    v27 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      MmUnlockPages(MemoryDescriptorList);
      IoFreeMdl(v27);
    }
    if ( v26 )
      PortPassThroughFreeIrpEx(v26);
    if ( v12 )
      PortPassThroughExFreeSrbEx(v12);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x69506C50u);
    goto LABEL_26;
  }
  *((_QWORD *)v29 + 3) = v12;
  *((_QWORD *)v29 + 1) = v26;
  v30 = (__int64)v29;
  *v29 = a3;
  *((_QWORD *)v29 + 2) = a2;
  *((_QWORD *)v29 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v29 + 5) = a8;
  v31 = v26->Tail.Overlay.CurrentStackLocation;
  v31[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v31[-1].Context = v14;
  v31[-1].Control = -32;
  BasicStructureSize = PortpEnableCancel((__int64)a2, v30);
  if ( BasicStructureSize != 259 )
    goto LABEL_18;
  ExFreePoolWithTag((PVOID)v18, 0x69506C50u);
  IofCallDriver(a1, v26);
  return 259LL;
}
