/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B52C
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005A740 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // ebx
  D3DDDI_ALLOCATIONINFO *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  size_t v31; // rdx
  D3DKMT_CREATESTANDARDALLOCATION *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // r9
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  const void *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  D3DKMT_HANDLE hResource; // r14d
  _DWORD *v49; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v51; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  char v61[8]; // [rsp+60h] [rbp-59h] BYREF
  char v62; // [rsp+68h] [rbp-51h]
  _D3DKMT_CREATEALLOCATION v63; // [rsp+70h] [rbp-49h] BYREF
  char *v64; // [rsp+100h] [rbp+47h]
  int v65; // [rsp+110h] [rbp+57h]
  int v66; // [rsp+128h] [rbp+6Fh]

  v10 = 0;
  memset(&v63, 0, sizeof(v63));
  v14 = 0LL;
  v65 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v53 + 24) = 5820LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[2]);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v61);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
  if ( !a4 )
    goto LABEL_50;
  v24 = *(_QWORD *)(a4 + 16);
  if ( !v24 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v24 = -1073741811LL;
    v54[3] = this;
    v54[4] = a4;
LABEL_39:
    v54[5] = v24;
LABEL_41:
    WdLogEvent5_WdWarning(v54);
    goto LABEL_52;
  }
  v21 = *(unsigned int *)(*(_QWORD *)(v24 + 120) - 44LL);
  if ( (v21 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 208LL))() )
  {
    v55 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
    LODWORD(v24) = -1073741790;
    *(_QWORD *)(v55 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v55);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(v24 + 116) != *(_DWORD *)(a2 + 16) )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v56[3] = this;
    v57 = *(unsigned int *)(v24 + 116);
    LODWORD(v24) = -1073741811;
    v56[4] = v57;
    v56[5] = *(unsigned int *)(a2 + 16);
    v56[6] = -1073741811LL;
LABEL_51:
    WdLogEvent5_WdError(v56);
LABEL_52:
    if ( v62 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v24 + 12) & 4) != 0 )
  {
LABEL_50:
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    LODWORD(v24) = -1073741811;
    v56[4] = -1073741811LL;
    v56[3] = this;
    goto LABEL_51;
  }
  v25 = *(_DWORD *)(v24 + 96);
  if ( *(_DWORD *)(a2 + 32) != v25 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v54[3] = this;
    v54[4] = *(unsigned int *)(a2 + 32);
    v58 = *(unsigned int *)(v24 + 96);
LABEL_47:
    LODWORD(v24) = -1073741811;
    v54[5] = v58;
    v54[6] = -1073741811LL;
    goto LABEL_41;
  }
  if ( v25 )
    memmove(*(void **)(a2 + 40), *(const void **)(v24 + 88), v25);
  v26 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v26 = -1LL;
  v14 = (D3DDDI_ALLOCATIONINFO *)operator new[](v26, 0x4B677844u, PagedPool);
  if ( !v14 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    v24 = -1073741801LL;
    v54[3] = this;
    v54[4] = *(unsigned int *)(a2 + 16);
    goto LABEL_39;
  }
  v31 = *(unsigned int *)(a2 + 48);
  v32 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v63.hDevice = *(_DWORD *)a2;
  v63.NumAllocations = *(_DWORD *)(a2 + 16);
  v63.hGlobalShare = 0;
  v63.pStandardAllocation = v32;
  v63.PrivateDriverDataSize = v31;
  v63.pAllocationInfo = v14;
  v33 = (*(_DWORD *)&v63.Flags | 1) ^ ((*(_BYTE *)&v63.Flags | 1) ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x40u;
  v63.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)((*(_DWORD *)&v63.Flags | 1) ^ ((*(_BYTE *)&v63.Flags | 1) ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x40);
  if ( (_DWORD)v31 != *(_DWORD *)(v24 + 112) )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v31, v29, v32);
    v54[3] = this;
    v54[4] = *(unsigned int *)(a2 + 48);
    v58 = *(unsigned int *)(v24 + 112);
    goto LABEL_47;
  }
  if ( (_DWORD)v31 )
    memmove(v32, *(const void **)(v24 + 104), v31);
  v34 = 0LL;
  v35 = *(char **)(a2 + 72);
  v36 = *(_QWORD **)(v24 + 120);
  v64 = v35;
  v66 = 0;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = *((unsigned int *)v36 - 2);
      if ( (int)v38 + (int)v37 < (unsigned int)v37 )
      {
        LODWORD(v24) = -1073741675;
        v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v34, v35);
        v54[3] = this;
        v54[4] = -1073741675LL;
        goto LABEL_41;
      }
      if ( (unsigned int)(v38 + v37) > *(_DWORD *)(a2 + 64) )
        break;
      v39 = (const void *)*(v36 - 2);
      if ( v39 )
      {
        memmove(v35, v39, (unsigned int)v38);
        v35 = v64;
        LODWORD(v34) = v66;
      }
      v40 = (unsigned int)v34;
      v34 = (unsigned int)(v34 + 1);
      v66 = v34;
      v41 = 96 * v40;
      *(D3DKMT_HANDLE *)((char *)&v14->hAllocation + v41) = 0;
      *(const void **)((char *)&v14->pSystemMem + v41) = 0LL;
      LODWORD(v40) = *((_DWORD *)v36 - 11);
      *(UINT *)((char *)&v14->Flags.Value + v41) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v14->VidPnSourceId + v41) = ((unsigned int)v40 >> 6) & 0xF;
      LODWORD(v40) = *((_DWORD *)v36 - 11);
      *(void **)((char *)&v14->pPrivateDriverData + v41) = v35;
      *(UINT *)((char *)&v14->Flags.Value + v41) = v40 & 1 | ((((unsigned int)v40 | ((unsigned int)v40 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v14->PrivateDriverDataSize + v41) = *((_DWORD *)v36 - 2);
      v42 = *((unsigned int *)v36 - 2);
      v35 += v42;
      v36 = (_QWORD *)*v36;
      v37 = (unsigned int)(v42 + v65);
      v65 += v42;
      v64 = v35;
      if ( (unsigned int)v34 >= *(_DWORD *)(a2 + 16) )
        goto LABEL_28;
    }
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v34, v35);
    LODWORD(v24) = -1073741801;
    v54[3] = this;
    v54[4] = -1073741801LL;
    goto LABEL_41;
  }
LABEL_28:
  if ( v62 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
  v43 = DXGDEVICE::CreateAllocation(
          this,
          &v63,
          0,
          1u,
          (struct _DXGSHAREDALLOCOBJECT *)a4,
          0LL,
          (struct COREDEVICEACCESS *)a6,
          a5,
          a8,
          a9,
          a10);
  v24 = v43;
  if ( v43 < 0 )
  {
    v59 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
    *(_QWORD *)(v59 + 24) = v24;
    WdLogEvent5_WdWarning(v59);
  }
  else
  {
    hResource = v63.hResource;
    if ( !v63.hResource )
    {
      v60 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
      *(_QWORD *)(v60 + 24) = 6019LL;
      WdLogEvent5_WdAssertion(v60);
    }
    v49 = *(_DWORD **)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v65;
    *(_DWORD *)(a2 + 80) = hResource;
    if ( *(_DWORD *)(a2 + 16) )
    {
      pAllocationInfo = v63.pAllocationInfo;
      do
      {
        v51 = v10++;
        *v49 = *(&pAllocationInfo->hAllocation + 24 * v51);
        v49 += 20;
        *((_QWORD *)v49 - 9) = *(_QWORD *)(a2 + 72)
                             + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v51)
                                            - *(_DWORD *)(a2 + 72));
        *(v49 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v51);
      }
      while ( v10 < *(_DWORD *)(a2 + 16) );
    }
  }
LABEL_36:
  operator delete(v14);
  return (unsigned int)v24;
}
