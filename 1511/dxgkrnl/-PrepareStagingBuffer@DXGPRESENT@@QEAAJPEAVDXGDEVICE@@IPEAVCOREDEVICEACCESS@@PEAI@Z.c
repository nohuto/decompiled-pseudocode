/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C014C074
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000238C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // r8d
  struct DXGRESOURCE *v19; // r14
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // r9
  int v28; // r8d
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // esi
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r14
  struct DXGPROCESS *v41; // rdi
  unsigned int v42; // r8d
  __int64 v43; // rdx
  int v44; // ecx
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rcx
  struct _EX_RUNDOWN_REF *v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // rax
  struct _EX_RUNDOWN_REF *v57; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v62; // [rsp+68h] [rbp-98h]
  _BYTE v63[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v64[50]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v65[2]; // [rsp+210h] [rbp+110h] BYREF
  int v66; // [rsp+218h] [rbp+118h]

  v62 = a5;
  v8 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8294LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[2]);
  v11 = *((_DWORD *)this + 1);
  LODWORD(v12) = 0;
  if ( (v11 & 0x40) == 0 )
  {
LABEL_24:
    if ( *((_DWORD *)this + 105) )
      goto LABEL_55;
    goto LABEL_25;
  }
  *((_DWORD *)this + 1) = v11 & 0xFFFFFFBF;
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 8311LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v65, Current);
    v16 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)Current + 58)
      && (v17 = *((_QWORD *)Current + 27),
          v18 = *(_DWORD *)(v17 + 16LL * (unsigned int)v16 + 8),
          ((*((_DWORD *)this + 105) >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x30))
      && (v18 & 0x1000) == 0
      && (v18 & 0xF) != 0
      && (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0xF) == 4 )
    {
      v19 = *(struct DXGRESOURCE **)(v17 + 16LL * (unsigned int)v16);
      if ( v19 )
        goto LABEL_18;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 8317LL;
    WdLogEvent5_WdAssertion(v20);
LABEL_18:
    v21 = *((_DWORD *)this + 105);
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *((_DWORD *)Current + 58) )
    {
      v23 = *((_QWORD *)Current + 27);
      v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
      if ( ((v21 >> 26) & 0x30) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x30) && (v24 & 0x1000) == 0 && (v24 & 0xF) != 0 )
        *(_DWORD *)(v23 + 16LL * ((v21 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
    DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v19, (DXGADAPTER **)a4, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
    goto LABEL_24;
  }
LABEL_25:
  v25 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 192));
  v26 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v26 < *(_DWORD *)(v25 + 232)
    && (v27 = *(_QWORD *)(v25 + 216),
        v28 = *(_DWORD *)(v27 + 16LL * v26 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x30))
    && (v28 & 0x1000) == 0
    && (v28 & 0xF) != 0
    && (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0xF) == 5 )
  {
    v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 16LL * v26);
  }
  else
  {
    v29 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58, v29);
  ExReleasePushLockSharedEx(v25 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v58 )
  {
    memset(v64, 0, 392);
    v34 = *((_DWORD *)this + 19);
    v66 = 0;
    HIDWORD(v64[0]) = 0;
    v65[0] = v34;
    v65[1] = *((_DWORD *)this + 20);
    v64[3] = v65;
    LODWORD(v64[2]) = 3;
    LODWORD(v12) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v64, a4);
    if ( (int)v12 >= 0 )
    {
      if ( v64 == (_QWORD *)-52LL )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v36 + 24) = 8349LL;
        WdLogEvent5_WdAssertion(v36);
      }
      v37 = HIDWORD(v64[6]);
      *((_DWORD *)this + 105) = v64[1];
      v38 = v66;
      *((_DWORD *)this + 104) = v37;
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v39 + 24) = 8352LL;
        WdLogEvent5_WdAssertion(v39);
        v38 = v66;
      }
      *((_DWORD *)this + 106) = v38;
      if ( DXGDEVICE::UmdManagesResidency(a2) )
      {
        v61 = 0LL;
        v59 = 0LL;
        v40 = *((_QWORD *)a2 + 2);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v40 + 424) + 8LL) + 944LL))(
          *((_QWORD *)a2 + 67),
          0LL,
          &v61,
          &v59);
        v60 = 0LL;
        v41 = DXGPROCESS::GetCurrent();
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v41 + 192));
        v42 = (v37 >> 6) & 0xFFFFFF;
        if ( v42 < *((_DWORD *)v41 + 58)
          && (v43 = *((_QWORD *)v41 + 27),
              v44 = *(_DWORD *)(v43 + 16LL * v42 + 8),
              ((v37 >> 26) & 0x30) == (*(_BYTE *)(v43 + 16LL * v42 + 8) & 0x30))
          && (v44 & 0x1000) == 0
          && (v44 & 0xF) != 0
          && (*(_BYTE *)(v43 + 16LL * v42 + 8) & 0xF) == 5 )
        {
          v45 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * v42);
        }
        else
        {
          v45 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57, v45);
        ExReleasePushLockSharedEx((char *)v41 + 192, 0LL);
        KeLeaveCriticalRegion();
        v47 = v57;
        if ( !v57 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v48 + 24) = 8376LL;
          WdLogEvent5_WdAssertion(v48);
          v47 = v57;
        }
        v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v40 + 424) + 8LL) + 752LL))(
                *(_QWORD *)(v40 + 432),
                v61,
                v47 + 3,
                1LL,
                3,
                &v60,
                v63);
        v12 = v49;
        if ( v49 >= 0 )
        {
          if ( v49 == 259 )
          {
            (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v40 + 424) + 8LL)
                                                                          + 952LL))(
              *(_QWORD *)(v40 + 432),
              &v59,
              &v60,
              1LL);
            LODWORD(v12) = 0;
          }
        }
        else
        {
          v54 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
          *(_QWORD *)(v54 + 24) = v12;
          WdLogEvent5_WdWarning(v54);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v57);
      }
    }
  }
  else
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    LODWORD(v12) = -1073741811;
    v55[3] = -1073741811LL;
    v55[4] = this;
    v55[5] = v8;
    WdLogEvent5_WdWarning(v55);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v58);
LABEL_55:
  *v62 = *((_DWORD *)this + 104);
  return (unsigned int)v12;
}
