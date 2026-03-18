/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009B870
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C001C910 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C001CA80 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00929C8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00CD2D0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // edi
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v15; // rdx
  ADAPTER_RENDER *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct DXGALLOCATION *v29; // rax
  _DWORD *v30; // rax
  struct DXGALLOCATION **v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGALLOCATION *v38; // rbx
  struct DXGALLOCATION *v39; // rdi
  DXGADAPTERALLOCATION *v40; // rcx
  __int64 v41; // [rsp+70h] [rbp+8h]
  char v42; // [rsp+78h] [rbp+10h]
  struct DXGALLOCATION **v43; // [rsp+90h] [rbp+28h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v33 + 24) = 2617LL;
    WdLogEvent5_WdAssertion(v33);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v42 = 1;
    v43 = *(struct DXGALLOCATION ***)(*((_QWORD *)a4 + 7) + 136LL);
  }
  else
  {
    v42 = 0;
    v43 = 0LL;
  }
  v13 = a2 - 1;
  if ( v13 < 0 )
    return 0LL;
  do
  {
    PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v19 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      goto LABEL_33;
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
    v41 = *((_QWORD *)this + 5);
    v20 = v41 + 184;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v41 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *(_DWORD *)(v41 + 200);
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v21, &EventBlockThread, v22, v34);
      }
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    *(_QWORD *)(v41 + 192) = KeGetCurrentThread();
    LODWORD(v19[2].Count) = HMGRTABLE::AllocHandle(v41 + 208, v19, 5LL);
    DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v19);
    *(_QWORD *)(v41 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    if ( LODWORD(v19[2].Count) )
    {
      v19[5].Count = (ULONG_PTR)a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v19;
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 144)) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v36 + 24) = 7297LL;
        WdLogEvent5_WdAssertion(v36);
      }
      v19[7].Count = 0LL;
      v29 = *a3;
      v19[8].Count = (ULONG_PTR)*a3;
      if ( v29 )
        *((_QWORD *)v29 + 7) = v19;
      *a3 = (struct DXGALLOCATION *)v19;
      if ( v42 )
      {
        v32 = v43 - 6;
        v16 = v43[1];
        v43 = (struct DXGALLOCATION **)v16;
        v19[6].Count = (ULONG_PTR)v32;
        goto LABEL_20;
      }
      v30 = operator new(0x40uLL, 0x4B677844u, PagedPool);
      if ( v30 )
      {
        v30[1] = 0;
        *((_QWORD *)v30 + 1) = 0LL;
        *((_QWORD *)v30 + 2) = 0LL;
        *((_QWORD *)v30 + 4) = 0LL;
        v30[10] = 0;
        *((_QWORD *)v30 + 7) = 0LL;
        *((_QWORD *)v30 + 6) = 0LL;
        v19[6].Count = (ULONG_PTR)v30;
        goto LABEL_20;
      }
LABEL_33:
      v37 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v37);
      goto LABEL_34;
    }
    v35 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v35);
    DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v19);
LABEL_34:
    v9 = -1073741801;
LABEL_20:
    --v13;
  }
  while ( v13 >= 0 );
  if ( v9 < 0 )
  {
    v38 = *a3;
    while ( v38 )
    {
      v39 = v38;
      v38 = (struct DXGALLOCATION *)*((_QWORD *)v38 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v16, v39, 0LL);
      v40 = (DXGADAPTERALLOCATION *)*((_QWORD *)v39 + 6);
      if ( v40 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
        DXGADAPTERALLOCATION::`scalar deleting destructor'(v40);
      DXGALLOCATION::`scalar deleting destructor'(v39);
    }
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
