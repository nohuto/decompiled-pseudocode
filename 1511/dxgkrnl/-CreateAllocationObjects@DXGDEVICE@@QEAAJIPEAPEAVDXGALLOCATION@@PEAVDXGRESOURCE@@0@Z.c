/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00730E0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C0018800 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C00188AC (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00BB3CC (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01242F8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
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
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGALLOCATION *v30; // rax
  ULONG_PTR v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rax
  struct DXGALLOCATION *v34; // rbx
  struct DXGALLOCATION *v35; // rdi
  DXGADAPTERALLOCATION *v36; // rcx
  int v38; // [rsp+60h] [rbp+8h]
  char v39; // [rsp+68h] [rbp+10h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 128)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2456LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v39 = 1;
    v13 = *(_QWORD *)(*((_QWORD *)a4 + 7) + 128LL);
  }
  else
  {
    v39 = 0;
    v13 = 0LL;
  }
  v38 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
      v19 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
        break;
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
      v20 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 192, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v23 = *(_DWORD *)(v20 + 208);
          if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v21, &EventBlockThread, v22, v23);
        }
        ExAcquirePushLockExclusiveEx(v20 + 192, 0LL);
      }
      *(_QWORD *)(v20 + 200) = KeGetCurrentThread();
      LODWORD(v19[2].Count) = HMGRTABLE::AllocHandle(v20 + 216, v19, 5LL);
      DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v19);
      *(_QWORD *)(v20 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 192, 0LL);
      KeLeaveCriticalRegion();
      if ( !LODWORD(v19[2].Count) )
      {
        v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v28 + 24) = this;
        *(_QWORD *)(v28 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v28);
        DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v19);
LABEL_30:
        v9 = -1073741801;
        goto LABEL_31;
      }
      v19[5].Count = (ULONG_PTR)a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v19;
      v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 144)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 128)) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v29 + 24) = 6965LL;
        WdLogEvent5_WdAssertion(v29);
      }
      v19[7].Count = 0LL;
      v30 = *a3;
      v19[8].Count = (ULONG_PTR)*a3;
      if ( v30 )
        *((_QWORD *)v30 + 7) = v19;
      *a3 = (struct DXGALLOCATION *)v19;
      if ( v39 )
      {
        v31 = v13 - 48;
        v13 = *(_QWORD *)(v13 + 8);
        v19[6].Count = v31;
      }
      else
      {
        v32 = operator new[](0x40uLL, 0x4B677844u, PagedPool);
        if ( !v32 )
          break;
        v32[1] = 0;
        *((_QWORD *)v32 + 1) = 0LL;
        *((_QWORD *)v32 + 2) = 0LL;
        *((_QWORD *)v32 + 4) = 0LL;
        v32[10] = 0;
        *((_QWORD *)v32 + 7) = 0LL;
        *((_QWORD *)v32 + 6) = 0LL;
        v19[6].Count = (ULONG_PTR)v32;
      }
LABEL_31:
      if ( --v38 < 0 )
      {
        if ( v9 < 0 )
        {
          v34 = *a3;
          while ( v34 )
          {
            v35 = v34;
            v34 = (struct DXGALLOCATION *)*((_QWORD *)v34 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v16, v35, 0LL);
            v36 = (DXGADAPTERALLOCATION *)*((_QWORD *)v35 + 6);
            if ( v36 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v36);
            DXGALLOCATION::`scalar deleting destructor'(v35);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v33 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_30;
  }
  return (unsigned int)v9;
}
