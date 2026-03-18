/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005BA30 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C014B9C8 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C015842C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int v24; // eax
  SIZE_T v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  size_t v30; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v31; // r9
  __int64 v32; // r8
  char *v33; // r15
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  const void *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  D3DKMT_HANDLE hResource; // r14d
  _DWORD *v47; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v49; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[8]; // [rsp+68h] [rbp-59h] BYREF
  char v60; // [rsp+70h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION v61; // [rsp+78h] [rbp-49h] BYREF
  int v62; // [rsp+110h] [rbp+4Fh]
  int v63; // [rsp+128h] [rbp+67h]

  v10 = 0;
  v11 = a3;
  memset(&v61, 0, sizeof(v61));
  v14 = 0LL;
  v63 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v51 + 24) = 5669LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[2]);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v59);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v59);
  if ( !(_DWORD)v11 )
    goto LABEL_50;
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v11, 2);
  v23 = ObjectA;
  if ( !ObjectA )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v23 = -1073741811LL;
    v52[3] = this;
    v52[4] = v11;
LABEL_39:
    v52[5] = v23;
LABEL_41:
    WdLogEvent5_WdWarning(v52);
    goto LABEL_52;
  }
  v16 = *(unsigned int *)(*(_QWORD *)(ObjectA + 120) - 44LL);
  if ( (v16 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 208LL))() )
  {
    v53 = WdLogNewEntry5_WdEvent();
    LODWORD(v23) = -1073741790;
    *(_QWORD *)(v53 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v53);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(v23 + 116) != *(_DWORD *)(a2 + 8) )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v54[3] = this;
    v55 = *(unsigned int *)(v23 + 116);
    LODWORD(v23) = -1073741811;
    v54[4] = v55;
    v54[5] = *(unsigned int *)(a2 + 8);
    v54[6] = -1073741811LL;
LABEL_51:
    WdLogEvent5_WdError(v54);
LABEL_52:
    if ( v60 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v59);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v23 + 12) & 4) != 0 )
  {
LABEL_50:
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    LODWORD(v23) = -1073741811;
    v54[4] = -1073741811LL;
    v54[3] = this;
    goto LABEL_51;
  }
  v24 = *(_DWORD *)(v23 + 96);
  if ( *(_DWORD *)(a2 + 32) != v24 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v19, v21, v22);
    v52[3] = this;
    v52[4] = *(unsigned int *)(a2 + 32);
    v56 = *(unsigned int *)(v23 + 96);
LABEL_47:
    LODWORD(v23) = -1073741811;
    v52[5] = v56;
    v52[6] = -1073741811LL;
    goto LABEL_41;
  }
  if ( v24 )
    memmove(*(void **)(a2 + 24), *(const void **)(v23 + 88), v24);
  v25 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v25 = -1LL;
  v14 = (D3DDDI_ALLOCATIONINFO *)operator new[](v25, 0x4B677844u, PagedPool);
  if ( !v14 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v23 = -1073741801LL;
    v52[3] = this;
    v52[4] = *(unsigned int *)(a2 + 8);
    goto LABEL_39;
  }
  v30 = *(unsigned int *)(a2 + 48);
  v31 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v61.hDevice = *(_DWORD *)a2;
  v61.NumAllocations = *(_DWORD *)(a2 + 8);
  v61.hGlobalShare = v11;
  v61.pStandardAllocation = v31;
  v61.PrivateDriverDataSize = v30;
  v61.pAllocationInfo = v14;
  v61.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v61.Flags & 0xFFFFFF3E | 1);
  if ( (_DWORD)v30 != *(_DWORD *)(v23 + 112) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v26, v28, v31);
    v52[3] = this;
    v52[4] = *(unsigned int *)(a2 + 48);
    v56 = *(unsigned int *)(v23 + 112);
    goto LABEL_47;
  }
  if ( (_DWORD)v30 )
    memmove(v31, *(const void **)(v23 + 104), v30);
  v32 = 0LL;
  v33 = *(char **)(a2 + 56);
  v34 = *(_QWORD **)(v23 + 120);
  v62 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v35 = 0LL;
    while ( 1 )
    {
      v36 = *((unsigned int *)v34 - 2);
      if ( (int)v36 + (int)v35 < (unsigned int)v35 )
      {
        LODWORD(v23) = -1073741675;
        v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v32, v31);
        v52[3] = this;
        v52[4] = -1073741675LL;
        goto LABEL_41;
      }
      if ( (unsigned int)(v36 + v35) > *(_DWORD *)(a2 + 64) )
        break;
      v37 = (const void *)*(v34 - 2);
      if ( v37 )
      {
        memmove(v33, v37, (unsigned int)v36);
        LODWORD(v32) = v62;
      }
      v38 = (unsigned int)v32;
      v32 = (unsigned int)(v32 + 1);
      v62 = v32;
      v39 = 96 * v38;
      *(D3DKMT_HANDLE *)((char *)&v14->hAllocation + v39) = 0;
      *(const void **)((char *)&v14->pSystemMem + v39) = 0LL;
      LODWORD(v38) = *((_DWORD *)v34 - 11);
      *(UINT *)((char *)&v14->Flags.Value + v39) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v14->VidPnSourceId + v39) = ((unsigned int)v38 >> 6) & 0xF;
      LODWORD(v38) = *((_DWORD *)v34 - 11);
      *(void **)((char *)&v14->pPrivateDriverData + v39) = v33;
      *(UINT *)((char *)&v14->Flags.Value + v39) = v38 & 1 | ((((unsigned int)v38 | ((unsigned int)v38 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v14->PrivateDriverDataSize + v39) = *((_DWORD *)v34 - 2);
      v40 = *((unsigned int *)v34 - 2);
      v33 += v40;
      v34 = (_QWORD *)*v34;
      v35 = (unsigned int)(v40 + v63);
      v63 += v40;
      if ( (unsigned int)v32 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_28;
    }
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v32, v31);
    LODWORD(v23) = -1073741801;
    v52[3] = this;
    v52[4] = -1073741801LL;
    goto LABEL_41;
  }
LABEL_28:
  if ( v60 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v59);
  v41 = DXGDEVICE::CreateAllocation(this, &v61, 0, 1u, 0LL, 0LL, (struct COREDEVICEACCESS *)a6, a5, a8, a9, a10);
  v23 = v41;
  if ( v41 < 0 )
  {
    v57 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
    *(_QWORD *)(v57 + 24) = v23;
    WdLogEvent5_WdWarning(v57);
  }
  else
  {
    hResource = v61.hResource;
    if ( !v61.hResource )
    {
      v58 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v58 + 24) = 5868LL;
      WdLogEvent5_WdAssertion(v58);
    }
    v47 = *(_DWORD **)(a2 + 16);
    *(_DWORD *)(a2 + 64) = v63;
    *(_DWORD *)(a2 + 68) = hResource;
    if ( *(_DWORD *)(a2 + 8) )
    {
      pAllocationInfo = v61.pAllocationInfo;
      do
      {
        v49 = v10++;
        *v47 = *(&pAllocationInfo->hAllocation + 24 * v49);
        v47 += 20;
        *((_QWORD *)v47 - 9) = *(_QWORD *)(a2 + 56)
                             + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v49)
                                            - *(_DWORD *)(a2 + 56));
        *(v47 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v49);
      }
      while ( v10 < *(_DWORD *)(a2 + 8) );
    }
  }
LABEL_36:
  operator delete(v14);
  return (unsigned int)v23;
}
