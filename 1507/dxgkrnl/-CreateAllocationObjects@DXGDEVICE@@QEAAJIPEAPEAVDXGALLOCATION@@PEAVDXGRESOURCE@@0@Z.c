/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C007FD00
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00171B4 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C0017234 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009206C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r13
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _EX_RUNDOWN_REF *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  struct DXGALLOCATION *v36; // rax
  ULONG_PTR v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rax
  struct DXGALLOCATION *v40; // rbx
  struct DXGALLOCATION *v41; // rdi
  DXGADAPTERALLOCATION *v42; // rcx
  int v44; // [rsp+70h] [rbp+8h]
  char v45; // [rsp+78h] [rbp+10h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 128)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 2546LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v45 = 1;
    v16 = *(_QWORD *)(*((_QWORD *)a4 + 7) + 128LL);
  }
  else
  {
    v45 = 0;
    v16 = 0LL;
  }
  v44 = a2 - 1;
  if ( a2 - 1 < 0 )
    return 0LL;
  do
  {
    PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v22 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      goto LABEL_29;
    PoolWithQuotaTag[1].Count = (ULONG_PTR)this;
    LODWORD(PoolWithQuotaTag[2].Count) = 0;
    PoolWithQuotaTag[3].Count = 0LL;
    PoolWithQuotaTag[4].Count = 0LL;
    PoolWithQuotaTag[5].Count = 0LL;
    PoolWithQuotaTag[6].Count = 0LL;
    PoolWithQuotaTag[7].Count = 0LL;
    PoolWithQuotaTag[8].Count = 0LL;
    LODWORD(PoolWithQuotaTag[9].Count) = 0;
    PoolWithQuotaTag[10].Count = 0LL;
    ExInitializeRundownProtection(PoolWithQuotaTag + 11);
    v23 = *((_QWORD *)this + 5);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v23 + 208);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockExclusiveEx(v23 + 192, 0LL);
    }
    *(_QWORD *)(v23 + 200) = KeGetCurrentThread();
    EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
    LODWORD(v22[2].Count) = HMGRTABLE::AllocHandle(v23 + 216, v22, 5LL);
    DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v22);
    *(_QWORD *)(v23 + 200) = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( LODWORD(v22[2].Count) )
    {
      v22[5].Count = (ULONG_PTR)a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v22;
      v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 144)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 128)) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v19, v32, v33, v34);
        *(_QWORD *)(v35 + 24) = 6974LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v22[7].Count = 0LL;
      v36 = *a3;
      v22[8].Count = (ULONG_PTR)*a3;
      if ( v36 )
        *((_QWORD *)v36 + 7) = v22;
      *a3 = (struct DXGALLOCATION *)v22;
      if ( v45 )
      {
        v37 = v16 - 48;
        v16 = *(_QWORD *)(v16 + 8);
        v22[6].Count = v37;
        goto LABEL_31;
      }
      v38 = operator new[](0x40uLL, 0x4B677844u, PagedPool);
      if ( v38 )
      {
        v38[1] = 0;
        *((_QWORD *)v38 + 1) = 0LL;
        *((_QWORD *)v38 + 2) = 0LL;
        *((_QWORD *)v38 + 4) = 0LL;
        v38[10] = 0;
        *((_QWORD *)v38 + 7) = 0LL;
        *((_QWORD *)v38 + 6) = 0LL;
        v22[6].Count = (ULONG_PTR)v38;
        goto LABEL_31;
      }
LABEL_29:
      v39 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v39);
      goto LABEL_30;
    }
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v31);
    DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v22);
LABEL_30:
    v9 = -1073741801;
LABEL_31:
    --v44;
  }
  while ( v44 >= 0 );
  if ( v9 < 0 )
  {
    v40 = *a3;
    while ( v40 )
    {
      v41 = v40;
      v40 = (struct DXGALLOCATION *)*((_QWORD *)v40 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v19, v41, 0LL);
      v42 = (DXGADAPTERALLOCATION *)*((_QWORD *)v41 + 6);
      if ( v42 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
        DXGADAPTERALLOCATION::`scalar deleting destructor'(v42);
      DXGALLOCATION::`scalar deleting destructor'(v41);
    }
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
