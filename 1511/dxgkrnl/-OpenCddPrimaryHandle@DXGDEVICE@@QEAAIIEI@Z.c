/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C014B9C8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C006EAC4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C012C700 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // rsi
  DXGADAPTER **v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int CddPrimaryShareResourceHandle; // r15d
  __int64 v21; // r12
  int v22; // r13d
  unsigned int v23; // eax
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  _BYTE *PoolWithTag; // rcx
  char *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+5Ch] [rbp-A4h]
  __int64 v60; // [rsp+64h] [rbp-9Ch]
  __int64 v61; // [rsp+6Ch] [rbp-94h]
  unsigned int v62; // [rsp+74h] [rbp-8Ch]
  _QWORD v63[14]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v64; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v65[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v66; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6693LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 6694LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 6695LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + v7 + 51);
  v16 = v7;
  if ( v15 && *((_DWORD *)this + 70) == 1 )
  {
    if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v17 + 24) = 6704LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *(_QWORD *)(*((_QWORD *)this + v7 + 51) + 24LL);
    if ( !*(_DWORD *)(v18 + 16) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 6705LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 51) + 24LL) + 48LL) + 4LL);
    if ( (v13 & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v7 + 51) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, v7);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_41;
    v58 = 0;
    v59 = CddPrimaryShareResourceHandle;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                (__int64)this,
                &v58,
                CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_41;
    v21 = (unsigned int)v61;
    v22 = HIDWORD(v61);
    v23 = v61 + HIDWORD(v61);
    if ( (int)v61 + HIDWORD(v61) >= (unsigned int)v61 )
    {
      v24 = v23;
      v27 = (char *)operator new[](v23, 0x4B677844u, PagedPool);
      if ( v27 )
      {
        memset(v63, 0, 72);
        v64 = 0LL;
        v66 = 0;
        v30 = v62;
        if ( v62 <= 4 )
        {
          PoolWithTag = v65;
          v64 = v65;
        }
        else
        {
          v25 = 0xFFFFFFFFFFFFFFFFuLL % v62;
          if ( 0xFFFFFFFFFFFFFFFFuLL / v62 < 0x50 )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v62, 0x4B677844u);
          v64 = PoolWithTag;
        }
        v66 = v30;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v30);
          if ( v64 )
          {
            LODWORD(v63[0]) = 0;
            HIDWORD(v63[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v63[1]) = v30;
            v63[2] = v64;
            if ( v22 )
              v63[5] = &v27[v21];
            else
              v63[5] = 0LL;
            LODWORD(v63[6]) = v22;
            v63[7] = v27;
            LODWORD(v63[8]) = v21;
            if ( HIDWORD(v60) )
            {
              v31 = WdLogNewEntry5_WdAssertion(PoolWithTag);
              *(_QWORD *)(v31 + 24) = 6768LL;
              WdLogEvent5_WdAssertion(v31);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v63,
                        CddPrimaryShareResourceHandle,
                        v29,
                        0,
                        0LL,
                        v55,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v37 = WdLogNewEntry5_WdEvent(v33, v32, v34, v35);
              *(_QWORD *)(v37 + 24) = this;
              *(_QWORD *)(v37 + 32) = v16;
              WdLogEvent5_WdEvent(v37);
            }
            else
            {
              *((_BYTE *)this + v16 + 392) = 1;
              if ( !*((_QWORD *)this + v16 + 51) )
              {
                v36 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v36 + 24) = 6779LL;
                WdLogEvent5_WdAssertion(v36);
              }
            }
            operator delete(v27);
            PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v64);
            goto LABEL_40;
          }
        }
LABEL_37:
        v38 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v28, v29);
        *(_QWORD *)(v38 + 24) = 6746LL;
        WdLogEvent5_WdLowResource(v38);
        operator delete(v27);
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v64);
        return 0LL;
      }
      v40 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v28, v29);
      *(_QWORD *)(v40 + 24) = this;
      *(_QWORD *)(v40 + 32) = v24;
      WdLogEvent5_WdLowResource(v40);
    }
LABEL_40:
    v4 = a4;
LABEL_41:
    v5 = a3;
  }
  v41 = *((_QWORD *)this + v16 + 51);
  if ( !v41 )
    return 0LL;
  if ( (*(_DWORD *)(v41 + 4) & 1) == 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v42 + 24) = 6799LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v43 = *(_QWORD *)(*((_QWORD *)this + v16 + 51) + 24LL);
  if ( !*(_DWORD *)(v43 + 16) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43);
    *(_QWORD *)(v44 + 24) = 6800LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v5 )
  {
    memset(v63, 0, 0x68uLL);
    v63[7] |= 1uLL;
    v45 = (_QWORD *)*((_QWORD *)this + 2);
    LOBYTE(v54) = 0;
    v63[2] = *(_QWORD *)(v45[2] + 1872LL);
    v46 = *((_QWORD *)this + v16 + 51);
    v63[3] = *(_QWORD *)(v45[2] + 1880LL);
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v45[53] + 8LL)
                                                                                         + 776LL))(
            v45[54],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v46 + 24) + 24LL),
            v63,
            v54,
            v4);
    v52 = v47;
    if ( v47 < 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v53 + 24) = v52;
      WdLogEvent5_WdWarning(v53);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v16 + 51) + 24LL) + 16LL);
}
