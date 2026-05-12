/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C0058C50
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0056D68 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00012FC (PortPassThroughFreeIrp.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0027000 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C003CBAC (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C003CC38 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C003CEDC (PortPassThroughExValidate.c)
 *     PortpEnableCancel @ 0x1C003D47C (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C0050000 (PortPassThroughBuildIrp.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0058994 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C0058C10 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C00591D8 (PortPassThroughSendAsync.c)
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
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  void *v9; // r14
  int v14; // ebx
  unsigned int *PoolWithTag; // rax
  __int64 v16; // rsi
  KPROCESSOR_MODE RequestorMode; // al
  __int64 v18; // rbx
  ULONG v19; // r8d
  void *v20; // rdx
  PIRP v21; // r15
  unsigned int *v22; // rax
  unsigned int *v23; // rbp
  _BYTE *v24; // rax
  __int64 v25; // rdx
  _IO_STACK_LOCATION *v26; // rax
  int v27; // [rsp+30h] [rbp-38h]
  void *v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = 0LL;
  a7 = 0LL;
  v28 = 0LL;
  if ( ((CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync(a1, a5, a6, v27, a8);
  v14 = PortPassThroughExBasicValidation(a2);
  if ( v14 < 0 )
    goto LABEL_24;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  (unsigned int)(LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63),
                                  0x69506C50u);
  v16 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
LABEL_24:
    a2->IoStatus.Status = v14;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v14;
  }
  v14 = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( v14 < 0 )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)v16, 0x69506C50u);
    goto LABEL_24;
  }
  PortPassThroughExGetDataBuffers(v16, (__int64)a2, a3, &a7, &v28);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v18 = (__int64)a7;
  if ( a7 )
    v19 = *(_DWORD *)(v16 + 32);
  else
    v19 = *(_DWORD *)(v16 + 36);
  v20 = v28;
  if ( a7 )
    v20 = a7;
  v21 = PortPassThroughBuildIrp((__int64)a1, v20, v19, *(_BYTE *)(v16 + 18) == 1, RequestorMode);
  if ( !v21 )
  {
    v14 = -1073741670;
    goto LABEL_23;
  }
  v22 = PortPassThroughExBuildSrbEx(a2, v16, v18, (__int64)v28);
  v23 = v22;
  if ( !v22
    || (*((_QWORD *)v22 + 10) = v21,
        v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v22,
        v24 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v9 = v24) == 0LL) )
  {
    v14 = -1073741670;
LABEL_19:
    PortPassThroughFreeIrp(v21);
    if ( v23 )
      PortPassThroughExFreeSrbEx(v23);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x69506C50u);
    goto LABEL_23;
  }
  *((_QWORD *)v24 + 3) = v23;
  *((_QWORD *)v24 + 1) = v21;
  v25 = (__int64)v24;
  *v24 = a3;
  *((_QWORD *)v24 + 2) = a2;
  *((_QWORD *)v24 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v24 + 5) = a8;
  v26 = v21->Tail.Overlay.CurrentStackLocation;
  v26[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v26[-1].Context = v9;
  v26[-1].Control = -32;
  v14 = PortpEnableCancel((__int64)a2, v25);
  if ( v14 != 259 )
    goto LABEL_19;
  ExFreePoolWithTag((PVOID)v16, 0x69506C50u);
  IofCallDriver(a1, v21);
  return 259LL;
}
