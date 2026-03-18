/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01713C4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0147CC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // ebx
  int v5; // r13d
  char v6; // r12
  __int64 v8; // r15
  DXGADAPTER **v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int CddPrimaryShareResourceHandle; // r12d
  __int64 v23; // r13
  SIZE_T v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  char *v27; // r14
  _BYTE *PoolWithTag; // rcx
  __int64 v29; // r15
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  __int64 v51; // rax
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+5Ch] [rbp-A4h]
  __int64 v58; // [rsp+64h] [rbp-9Ch]
  __int64 v59; // [rsp+6Ch] [rbp-94h]
  unsigned int v60; // [rsp+74h] [rbp-8Ch]
  _QWORD v61[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v62; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v63[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v64; // [rsp+238h] [rbp+138h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v8 = a2;
  v9 = *(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 7265LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 7266LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 7267LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + v8 + 54);
  v17 = v8;
  if ( v16 && *((_DWORD *)this + 76) == 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v56, (struct DXGFASTMUTEX *const)(v16 + 80));
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v56);
    v18 = *(unsigned int *)(*((_QWORD *)this + v8 + 54) + 4LL);
    if ( (v18 & 1) == 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 7281LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = *(_QWORD *)(*((_QWORD *)this + v8 + 54) + 24LL);
    if ( !*(_DWORD *)(v20 + 16) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v21 + 24) = 7282LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v8 + 54) + 24LL) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v56);
  }
  if ( !*((_QWORD *)this + v8 + 54) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v9, v8);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_44;
    v56 = 0;
    v57 = CddPrimaryShareResourceHandle;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                (__int64)this,
                &v56,
                CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_44;
    v23 = (unsigned int)v59;
    v24 = (unsigned int)(v59 + HIDWORD(v59));
    if ( (unsigned int)v24 >= (unsigned int)v59 )
    {
      v25 = (unsigned int)v24;
      v27 = (char *)operator new(v24, 0x4B677844u, PagedPool);
      if ( v27 )
      {
        memset(v61, 0, 0x48uLL);
        v29 = v60;
        v62 = 0LL;
        v64 = 0;
        if ( v60 <= 4 )
        {
          PoolWithTag = v63;
          v62 = v63;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v60 < 0x50 )
            goto LABEL_40;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v60, 0x4B677844u);
          v62 = PoolWithTag;
        }
        v64 = v29;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v29);
          if ( v62 )
          {
            LODWORD(v61[0]) = 0;
            HIDWORD(v61[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v61[1]) = v29;
            v61[2] = v62;
            if ( HIDWORD(v59) )
              v61[5] = &v27[v23];
            else
              v61[5] = 0LL;
            LODWORD(v61[6]) = HIDWORD(v59);
            v61[7] = v27;
            LODWORD(v61[8]) = v23;
            if ( HIDWORD(v58) )
            {
              v31 = WdLogNewEntry5_WdAssertion(HIDWORD(v59));
              *(_QWORD *)(v31 + 24) = 7345LL;
              WdLogEvent5_WdAssertion(v31);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v61,
                        CddPrimaryShareResourceHandle,
                        v30,
                        0,
                        0LL,
                        v53,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v34 = WdLogNewEntry5_WdEvent(v32);
              *(_QWORD *)(v34 + 24) = this;
              *(_QWORD *)(v34 + 32) = v17;
              WdLogEvent5_WdEvent(v34);
            }
            else
            {
              *((_BYTE *)this + v17 + 416) = 1;
              if ( !*((_QWORD *)this + v17 + 54) )
              {
                v33 = WdLogNewEntry5_WdAssertion(v32);
                *(_QWORD *)(v33 + 24) = 7356LL;
                WdLogEvent5_WdAssertion(v33);
              }
            }
            operator delete(v27);
            PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v62);
            goto LABEL_43;
          }
        }
LABEL_40:
        v35 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v35 + 24) = 7323LL;
        WdLogEvent5_WdLowResource(v35);
        operator delete(v27);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v62);
        return 0LL;
      }
      v37 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = v25;
      WdLogEvent5_WdLowResource(v37);
    }
LABEL_43:
    v5 = a4;
LABEL_44:
    v6 = a3;
  }
  v38 = *((_QWORD *)this + v17 + 54);
  if ( !v38 )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v56, (struct DXGFASTMUTEX *const)(v38 + 80));
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v56);
  v39 = *(unsigned int *)(*((_QWORD *)this + v17 + 54) + 4LL);
  if ( (v39 & 1) == 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v39);
    *(_QWORD *)(v40 + 24) = 7382LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v41 = *(_QWORD *)(*((_QWORD *)this + v17 + 54) + 24LL);
  if ( !*(_DWORD *)(v41 + 16) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41);
    *(_QWORD *)(v42 + 24) = 7383LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !v6 )
    goto LABEL_55;
  memset(v61, 0, 0x68uLL);
  v61[7] |= 1uLL;
  v43 = (_QWORD *)*((_QWORD *)this + 2);
  LOBYTE(v52) = 0;
  v61[2] = *(_QWORD *)(v43[2] + 2008LL);
  v44 = *((_QWORD *)this + v17 + 54);
  v61[3] = *(_QWORD *)(v43[2] + 2016LL);
  v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v43[50] + 8LL)
                                                                                       + 792LL))(
          v43[51],
          0LL,
          *(_QWORD *)(*(_QWORD *)(v44 + 24) + 24LL),
          v61,
          v52,
          v5);
  v50 = v45;
  if ( v45 < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
    *(_QWORD *)(v51 + 24) = v50;
    WdLogEvent5_WdWarning(v51);
    DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  else
  {
LABEL_55:
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v17 + 54) + 24LL) + 16LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v56);
  return v4;
}
