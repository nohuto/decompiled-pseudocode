/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005AA00 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0147CAC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0154328 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // ebx
  __int64 v11; // r15
  D3DDDI_ALLOCATIONINFO *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  size_t v36; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v37; // r9
  __int64 v38; // r8
  char *v39; // r15
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  const void *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  D3DKMT_HANDLE hResource; // r14d
  _DWORD *v53; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v55; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  _BYTE v65[8]; // [rsp+68h] [rbp-59h] BYREF
  char v66; // [rsp+70h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION v67; // [rsp+78h] [rbp-49h] BYREF
  int v68; // [rsp+110h] [rbp+4Fh]
  int v69; // [rsp+128h] [rbp+67h]

  v10 = 0;
  v11 = a3;
  memset(&v67, 0, sizeof(v67));
  v14 = 0LL;
  v69 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v57 + 24) = 5820LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[2]);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v65);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
  if ( !(_DWORD)v11 )
    goto LABEL_50;
  Global = DXGGLOBAL::GetGlobal(v20, v19, v21, v22);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v11, 2);
  v29 = ObjectA;
  if ( !ObjectA )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v29 = -1073741811LL;
    v58[3] = this;
    v58[4] = v11;
LABEL_39:
    v58[5] = v29;
LABEL_41:
    WdLogEvent5_WdWarning(v58);
    goto LABEL_52;
  }
  v20 = *(unsigned int *)(*(_QWORD *)(ObjectA + 120) - 44LL);
  if ( (v20 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 208LL))() )
  {
    v59 = WdLogNewEntry5_WdEvent(v20, v25, v27, v28);
    LODWORD(v29) = -1073741790;
    *(_QWORD *)(v59 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v59);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(v29 + 116) != *(_DWORD *)(a2 + 8) )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v60[3] = this;
    v61 = *(unsigned int *)(v29 + 116);
    LODWORD(v29) = -1073741811;
    v60[4] = v61;
    v60[5] = *(unsigned int *)(a2 + 8);
    v60[6] = -1073741811LL;
LABEL_51:
    WdLogEvent5_WdError(v60);
LABEL_52:
    if ( v66 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v29 + 12) & 4) != 0 )
  {
LABEL_50:
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    LODWORD(v29) = -1073741811;
    v60[4] = -1073741811LL;
    v60[3] = this;
    goto LABEL_51;
  }
  v30 = *(_DWORD *)(v29 + 96);
  if ( *(_DWORD *)(a2 + 32) != v30 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v25, v27, v28);
    v58[3] = this;
    v58[4] = *(unsigned int *)(a2 + 32);
    v62 = *(unsigned int *)(v29 + 96);
LABEL_47:
    LODWORD(v29) = -1073741811;
    v58[5] = v62;
    v58[6] = -1073741811LL;
    goto LABEL_41;
  }
  if ( v30 )
    memmove(*(void **)(a2 + 24), *(const void **)(v29 + 88), v30);
  v31 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v31 = -1LL;
  v14 = (D3DDDI_ALLOCATIONINFO *)operator new[](v31, 0x4B677844u, PagedPool);
  if ( !v14 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    v29 = -1073741801LL;
    v58[3] = this;
    v58[4] = *(unsigned int *)(a2 + 8);
    goto LABEL_39;
  }
  v36 = *(unsigned int *)(a2 + 48);
  v37 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v67.hDevice = *(_DWORD *)a2;
  v67.NumAllocations = *(_DWORD *)(a2 + 8);
  v67.hGlobalShare = v11;
  v67.pStandardAllocation = v37;
  v67.PrivateDriverDataSize = v36;
  v67.pAllocationInfo = v14;
  v67.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v67.Flags & 0xFFFFFF3E | 1);
  if ( (_DWORD)v36 != *(_DWORD *)(v29 + 112) )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v32, v34, v37);
    v58[3] = this;
    v58[4] = *(unsigned int *)(a2 + 48);
    v62 = *(unsigned int *)(v29 + 112);
    goto LABEL_47;
  }
  if ( (_DWORD)v36 )
    memmove(v37, *(const void **)(v29 + 104), v36);
  v38 = 0LL;
  v39 = *(char **)(a2 + 56);
  v40 = *(_QWORD **)(v29 + 120);
  v68 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v41 = 0LL;
    while ( 1 )
    {
      v42 = *((unsigned int *)v40 - 2);
      if ( (int)v42 + (int)v41 < (unsigned int)v41 )
      {
        LODWORD(v29) = -1073741675;
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v38, v37);
        v58[3] = this;
        v58[4] = -1073741675LL;
        goto LABEL_41;
      }
      if ( (unsigned int)(v42 + v41) > *(_DWORD *)(a2 + 64) )
        break;
      v43 = (const void *)*(v40 - 2);
      if ( v43 )
      {
        memmove(v39, v43, (unsigned int)v42);
        LODWORD(v38) = v68;
      }
      v44 = (unsigned int)v38;
      v38 = (unsigned int)(v38 + 1);
      v68 = v38;
      v45 = 96 * v44;
      *(D3DKMT_HANDLE *)((char *)&v14->hAllocation + v45) = 0;
      *(const void **)((char *)&v14->pSystemMem + v45) = 0LL;
      LODWORD(v44) = *((_DWORD *)v40 - 11);
      *(UINT *)((char *)&v14->Flags.Value + v45) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v14->VidPnSourceId + v45) = ((unsigned int)v44 >> 6) & 0xF;
      LODWORD(v44) = *((_DWORD *)v40 - 11);
      *(void **)((char *)&v14->pPrivateDriverData + v45) = v39;
      *(UINT *)((char *)&v14->Flags.Value + v45) = v44 & 1 | ((((unsigned int)v44 | ((unsigned int)v44 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v14->PrivateDriverDataSize + v45) = *((_DWORD *)v40 - 2);
      v46 = *((unsigned int *)v40 - 2);
      v39 += v46;
      v40 = (_QWORD *)*v40;
      v41 = (unsigned int)(v46 + v69);
      v69 += v46;
      if ( (unsigned int)v38 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_28;
    }
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v38, v37);
    LODWORD(v29) = -1073741801;
    v58[3] = this;
    v58[4] = -1073741801LL;
    goto LABEL_41;
  }
LABEL_28:
  if ( v66 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
  v47 = DXGDEVICE::CreateAllocation(this, &v67, 0, 1u, 0LL, 0LL, (struct COREDEVICEACCESS *)a6, a5, a8, a9, a10);
  v29 = v47;
  if ( v47 < 0 )
  {
    v63 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
    *(_QWORD *)(v63 + 24) = v29;
    WdLogEvent5_WdWarning(v63);
  }
  else
  {
    hResource = v67.hResource;
    if ( !v67.hResource )
    {
      v64 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
      *(_QWORD *)(v64 + 24) = 6019LL;
      WdLogEvent5_WdAssertion(v64);
    }
    v53 = *(_DWORD **)(a2 + 16);
    *(_DWORD *)(a2 + 64) = v69;
    *(_DWORD *)(a2 + 68) = hResource;
    if ( *(_DWORD *)(a2 + 8) )
    {
      pAllocationInfo = v67.pAllocationInfo;
      do
      {
        v55 = v10++;
        *v53 = *(&pAllocationInfo->hAllocation + 24 * v55);
        v53 += 20;
        *((_QWORD *)v53 - 9) = *(_QWORD *)(a2 + 56)
                             + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v55)
                                            - *(_DWORD *)(a2 + 56));
        *(v53 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v55);
      }
      while ( v10 < *(_DWORD *)(a2 + 8) );
    }
  }
LABEL_36:
  operator delete(v14);
  return (unsigned int)v29;
}
