/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0096D28
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008E68C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0155620 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
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
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned int v22; // eax
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // rdx
  D3DKMT_CREATESTANDARDALLOCATION *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  char *v32; // r9
  _QWORD *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  const void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  D3DKMT_HANDLE hResource; // r14d
  _DWORD *v46; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v48; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  char v58[8]; // [rsp+60h] [rbp-59h] BYREF
  char v59; // [rsp+68h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION v60; // [rsp+70h] [rbp-49h] BYREF
  char *v61; // [rsp+100h] [rbp+47h]
  int v62; // [rsp+110h] [rbp+57h]
  int v63; // [rsp+128h] [rbp+6Fh]

  v10 = 0;
  v14 = 0LL;
  memset(&v60, 0, sizeof(v60));
  v62 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v50 + 24) = 5971LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v58);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v58);
  if ( !a4 )
    goto LABEL_50;
  v21 = *(_QWORD *)(a4 + 16);
  if ( !v21 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v21 = -1073741811LL;
    v51[3] = this;
    v51[4] = a4;
LABEL_39:
    v51[5] = v21;
LABEL_41:
    WdLogEvent5_WdWarning(v51);
    goto LABEL_52;
  }
  v18 = *(unsigned int *)(*(_QWORD *)(v21 + 128) - 44LL);
  if ( (v18 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 72LL) + 208LL))() )
  {
    v52 = WdLogNewEntry5_WdEvent();
    LODWORD(v21) = -1073741790;
    *(_QWORD *)(v52 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v52);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(v21 + 124) != *(_DWORD *)(a2 + 16) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v53[3] = this;
    v54 = *(unsigned int *)(v21 + 124);
    LODWORD(v21) = -1073741811;
    v53[4] = v54;
    v53[5] = *(unsigned int *)(a2 + 16);
    v53[6] = -1073741811LL;
LABEL_51:
    WdLogEvent5_WdError(v53);
LABEL_52:
    if ( v59 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v21 + 12) & 4) != 0 )
  {
LABEL_50:
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    LODWORD(v21) = -1073741811;
    v53[4] = -1073741811LL;
    v53[3] = this;
    goto LABEL_51;
  }
  v22 = *(_DWORD *)(v21 + 104);
  if ( *(_DWORD *)(a2 + 32) != v22 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v51[3] = this;
    v51[4] = *(unsigned int *)(a2 + 32);
    v55 = *(unsigned int *)(v21 + 104);
LABEL_47:
    LODWORD(v21) = -1073741811;
    v51[5] = v55;
    v51[6] = -1073741811LL;
    goto LABEL_41;
  }
  if ( v22 )
    memmove(*(void **)(a2 + 40), *(const void **)(v21 + 96), v22);
  v23 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v23 = -1LL;
  v14 = (D3DDDI_ALLOCATIONINFO *)operator new(v23, 0x4B677844u, PagedPool);
  if ( !v14 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v21 = -1073741801LL;
    v51[3] = this;
    v51[4] = *(unsigned int *)(a2 + 16);
    goto LABEL_39;
  }
  v28 = *(unsigned int *)(a2 + 48);
  v29 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v60.hDevice = *(_DWORD *)a2;
  v60.NumAllocations = *(_DWORD *)(a2 + 16);
  v60.hGlobalShare = 0;
  v60.pStandardAllocation = v29;
  v60.PrivateDriverDataSize = v28;
  v60.pAllocationInfo = v14;
  v30 = (*(_DWORD *)&v60.Flags | 1) ^ ((*(_BYTE *)&v60.Flags | 1) ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x40u;
  v60.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)((*(_DWORD *)&v60.Flags | 1) ^ ((*(_BYTE *)&v60.Flags | 1) ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x40);
  if ( (_DWORD)v28 != *(_DWORD *)(v21 + 120) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v28, v26, v29);
    v51[3] = this;
    v51[4] = *(unsigned int *)(a2 + 48);
    v55 = *(unsigned int *)(v21 + 120);
    goto LABEL_47;
  }
  if ( (_DWORD)v28 )
    memmove(v29, *(const void **)(v21 + 112), v28);
  v31 = 0LL;
  v32 = *(char **)(a2 + 72);
  v33 = *(_QWORD **)(v21 + 128);
  v61 = v32;
  v63 = 0;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v34 = 0LL;
    while ( 1 )
    {
      v35 = *((unsigned int *)v33 - 2);
      if ( (int)v35 + (int)v34 < (unsigned int)v34 )
      {
        LODWORD(v21) = -1073741675;
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v31, v32);
        v51[3] = this;
        v51[4] = -1073741675LL;
        goto LABEL_41;
      }
      if ( (unsigned int)(v35 + v34) > *(_DWORD *)(a2 + 64) )
        break;
      v36 = (const void *)*(v33 - 2);
      if ( v36 )
      {
        memmove(v32, v36, (unsigned int)v35);
        v32 = v61;
        LODWORD(v31) = v63;
      }
      v37 = (unsigned int)v31;
      v31 = (unsigned int)(v31 + 1);
      v63 = v31;
      v38 = 96 * v37;
      *(D3DKMT_HANDLE *)((char *)&v14->hAllocation + v38) = 0;
      *(const void **)((char *)&v14->pSystemMem + v38) = 0LL;
      LODWORD(v37) = *((_DWORD *)v33 - 11);
      *(UINT *)((char *)&v14->Flags.Value + v38) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v14->VidPnSourceId + v38) = ((unsigned int)v37 >> 6) & 0xF;
      LODWORD(v37) = *((_DWORD *)v33 - 11);
      *(void **)((char *)&v14->pPrivateDriverData + v38) = v32;
      *(UINT *)((char *)&v14->Flags.Value + v38) = v37 & 1 | ((((unsigned int)v37 | ((unsigned int)v37 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v14->PrivateDriverDataSize + v38) = *((_DWORD *)v33 - 2);
      v39 = *((unsigned int *)v33 - 2);
      v32 += v39;
      v33 = (_QWORD *)*v33;
      v34 = (unsigned int)(v39 + v62);
      v62 += v39;
      v61 = v32;
      if ( (unsigned int)v31 >= *(_DWORD *)(a2 + 16) )
        goto LABEL_28;
    }
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v31, v32);
    LODWORD(v21) = -1073741801;
    v51[3] = this;
    v51[4] = -1073741801LL;
    goto LABEL_41;
  }
LABEL_28:
  if ( v59 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v58);
  v40 = DXGDEVICE::CreateAllocation(
          this,
          &v60,
          0,
          1u,
          (struct _DXGSHAREDALLOCOBJECT *)a4,
          0LL,
          (struct COREDEVICEACCESS *)a6,
          a5,
          a8,
          a9,
          a10);
  v21 = v40;
  if ( v40 < 0 )
  {
    v56 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
    *(_QWORD *)(v56 + 24) = v21;
    WdLogEvent5_WdWarning(v56);
  }
  else
  {
    hResource = v60.hResource;
    if ( !v60.hResource )
    {
      v57 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v57 + 24) = 6170LL;
      WdLogEvent5_WdAssertion(v57);
    }
    v46 = *(_DWORD **)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v62;
    *(_DWORD *)(a2 + 80) = hResource;
    if ( *(_DWORD *)(a2 + 16) )
    {
      pAllocationInfo = v60.pAllocationInfo;
      do
      {
        v48 = v10++;
        *v46 = *(&pAllocationInfo->hAllocation + 24 * v48);
        v46 += 20;
        *((_QWORD *)v46 - 9) = *(_QWORD *)(a2 + 72)
                             + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v48)
                                            - *(_DWORD *)(a2 + 72));
        *(v46 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v48);
      }
      while ( v10 < *(_DWORD *)(a2 + 16) );
    }
  }
LABEL_36:
  operator delete(v14);
  return (unsigned int)v21;
}
