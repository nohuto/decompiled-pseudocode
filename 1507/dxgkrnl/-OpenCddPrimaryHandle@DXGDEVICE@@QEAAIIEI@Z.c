/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0147CAC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BD88 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0126428 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147AFC (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // rsi
  DXGADAPTER **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int CddPrimaryShareResourceHandle; // r15d
  __int64 v30; // r12
  int v31; // r13d
  unsigned int v32; // eax
  __int64 v33; // r14
  _BYTE *PoolWithTag; // rcx
  char *v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rsi
  __int64 v62; // rax
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+5Ch] [rbp-A4h]
  __int64 v69; // [rsp+64h] [rbp-9Ch]
  __int64 v70; // [rsp+6Ch] [rbp-94h]
  unsigned int v71; // [rsp+74h] [rbp-8Ch]
  _QWORD v72[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v73; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v74[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v75; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 6747LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 6748LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = 6749LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = *((_QWORD *)this + v7 + 51);
  v25 = v7;
  if ( v24 && *((_DWORD *)this + 70) == 1 )
  {
    if ( (*(_DWORD *)(v24 + 4) & 1) == 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v26 + 24) = 6758LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = *(_QWORD *)(*((_QWORD *)this + v7 + 51) + 24LL);
    if ( !*(_DWORD *)(v27 + 16) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, v19, v21, v22);
      *(_QWORD *)(v28 + 24) = 6759LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v20 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 51) + 24LL) + 48LL) + 4LL);
    if ( (v20 & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v7 + 51) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, (unsigned int)v7, v21, v22);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_41;
    v67 = 0;
    v68 = CddPrimaryShareResourceHandle;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                (__int64)this,
                &v67,
                CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_41;
    v30 = (unsigned int)v70;
    v31 = HIDWORD(v70);
    v32 = v70 + HIDWORD(v70);
    if ( (int)v70 + HIDWORD(v70) >= (unsigned int)v70 )
    {
      v33 = v32;
      v35 = (char *)operator new[](v32, 0x4B677844u, PagedPool);
      if ( v35 )
      {
        memset(v72, 0, 72);
        v73 = 0LL;
        v75 = 0;
        v36 = v71;
        if ( v71 <= 4 )
        {
          PoolWithTag = v74;
          v73 = v74;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v71 < 0x50 )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v71, 0x4B677844u);
          v73 = PoolWithTag;
        }
        v75 = v36;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v36);
          if ( v73 )
          {
            LODWORD(v72[0]) = 0;
            HIDWORD(v72[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v72[1]) = v36;
            v72[2] = v73;
            if ( v31 )
              v72[5] = &v35[v30];
            else
              v72[5] = 0LL;
            LODWORD(v72[6]) = v31;
            v72[7] = v35;
            LODWORD(v72[8]) = v30;
            if ( HIDWORD(v69) )
            {
              v40 = WdLogNewEntry5_WdAssertion(PoolWithTag, v37, v38, v39);
              *(_QWORD *)(v40 + 24) = 6822LL;
              WdLogEvent5_WdAssertion(v40);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v72,
                        CddPrimaryShareResourceHandle,
                        v39,
                        0,
                        0LL,
                        v64,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v46 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
              *(_QWORD *)(v46 + 24) = this;
              *(_QWORD *)(v46 + 32) = v25;
              WdLogEvent5_WdEvent(v46);
            }
            else
            {
              *((_BYTE *)this + v25 + 392) = 1;
              if ( !*((_QWORD *)this + v25 + 51) )
              {
                v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
                *(_QWORD *)(v45 + 24) = 6833LL;
                WdLogEvent5_WdAssertion(v45);
              }
            }
            operator delete(v35);
            PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v73);
            goto LABEL_40;
          }
        }
LABEL_37:
        v47 = WdLogNewEntry5_WdLowResource(PoolWithTag);
        *(_QWORD *)(v47 + 24) = 6800LL;
        WdLogEvent5_WdLowResource(v47);
        operator delete(v35);
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v73);
        return 0LL;
      }
      v49 = WdLogNewEntry5_WdLowResource(PoolWithTag);
      *(_QWORD *)(v49 + 24) = this;
      *(_QWORD *)(v49 + 32) = v33;
      WdLogEvent5_WdLowResource(v49);
    }
LABEL_40:
    v4 = a4;
LABEL_41:
    v5 = a3;
  }
  v50 = *((_QWORD *)this + v25 + 51);
  if ( !v50 )
    return 0LL;
  if ( (*(_DWORD *)(v50 + 4) & 1) == 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v51 + 24) = 6853LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v52 = *(_QWORD *)(*((_QWORD *)this + v25 + 51) + 24LL);
  if ( !*(_DWORD *)(v52 + 16) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v52, v19, v21, v22);
    *(_QWORD *)(v53 + 24) = 6854LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( v5 )
  {
    memset(v72, 0, 0x68uLL);
    v72[7] |= 1uLL;
    v54 = (_QWORD *)*((_QWORD *)this + 2);
    LOBYTE(v63) = 0;
    v72[2] = *(_QWORD *)(v54[2] + 1864LL);
    v55 = *((_QWORD *)this + v25 + 51);
    v72[3] = *(_QWORD *)(v54[2] + 1872LL);
    v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v54[50] + 8LL)
                                                                                         + 776LL))(
            v54[51],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v55 + 24) + 24LL),
            v72,
            v63,
            v4);
    v61 = v56;
    if ( v56 < 0 )
    {
      v62 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
      *(_QWORD *)(v62 + 24) = v61;
      WdLogEvent5_WdWarning(v62);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v25 + 51) + 24LL) + 16LL);
}
