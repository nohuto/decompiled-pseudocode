/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0148358
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00026D8 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  struct DXGALLOCATION **v27; // r14
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rbx
  unsigned int v34; // edx
  __int64 v35; // r9
  int v36; // r8d
  struct _EX_RUNDOWN_REF *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // esi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rcx
  struct DXGPROCESS *v55; // rbx
  unsigned int v56; // r8d
  __int64 v57; // rdx
  int v58; // ecx
  struct _EX_RUNDOWN_REF *v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct _EX_RUNDOWN_REF *v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  struct _EX_RUNDOWN_REF *v74; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v79; // [rsp+68h] [rbp-98h]
  _BYTE v80[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v81[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v82[2]; // [rsp+200h] [rbp+100h] BYREF
  int v83; // [rsp+208h] [rbp+108h]

  v79 = a5;
  v8 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 8348LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[2]);
  v14 = *((_DWORD *)this + 1);
  LODWORD(v15) = 0;
  if ( (v14 & 0x40) == 0 )
  {
LABEL_24:
    if ( *((_DWORD *)this + 105) )
      goto LABEL_57;
    goto LABEL_25;
  }
  *((_DWORD *)this + 1) = v14 & 0xFFFFFFBF;
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent(v10);
    if ( !Current )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v16, v19, v20);
      *(_QWORD *)(v21 + 24) = 8365LL;
      WdLogEvent5_WdAssertion(v21);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v82, Current);
    v24 = *((unsigned int *)this + 105);
    v25 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)Current + 58)
      && (v26 = *((_QWORD *)Current + 27),
          v24 = ((unsigned int)v24 >> 26) & 0x30,
          v22 = *(unsigned int *)(v26 + 16LL * (unsigned int)v25 + 8),
          (_BYTE)v24 == (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0x30))
      && (v22 & 0x1000) == 0
      && (v22 & 0xF) != 0
      && (v24 = 2LL * (unsigned int)v25, (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0xF) == 4) )
    {
      v27 = *(struct DXGALLOCATION ***)(v26 + 16LL * (unsigned int)v25);
      if ( v27 )
        goto LABEL_18;
    }
    else
    {
      v27 = 0LL;
    }
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v22, v23);
    *(_QWORD *)(v28 + 24) = 8371LL;
    WdLogEvent5_WdAssertion(v28);
LABEL_18:
    v29 = *((_DWORD *)this + 105);
    v30 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)Current + 58) )
    {
      v31 = *((_QWORD *)Current + 27);
      v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
      if ( ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x30) && (v32 & 0x1000) == 0 && (v32 & 0xF) != 0 )
        *(_DWORD *)(v31 + 16LL * ((v29 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v82);
    DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v27, (DXGADAPTER **)a4, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
    goto LABEL_24;
  }
LABEL_25:
  v33 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 192));
  v34 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v34 < *(_DWORD *)(v33 + 232)
    && (v35 = *(_QWORD *)(v33 + 216),
        v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x30))
    && (v36 & 0x1000) == 0
    && (v36 & 0xF) != 0
    && (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0xF) == 5 )
  {
    v37 = *(struct _EX_RUNDOWN_REF **)(v35 + 16LL * v34);
  }
  else
  {
    v37 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v37);
  ExReleasePushLockSharedEx(v33 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v75 )
  {
    v42 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v75[1].Count + 16) + 16LL) == v42 )
    {
      memset(v81, 0, 376);
      v47 = *((_DWORD *)this + 19);
      v83 = 0;
      HIDWORD(v81[0]) = 0;
      v82[0] = v47;
      v82[1] = *((_DWORD *)this + 20);
      v81[3] = v82;
      LODWORD(v81[2]) = 3;
      LODWORD(v15) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v81, a4);
      if ( (int)v15 >= 0 )
      {
        if ( v81 == (_QWORD *)-52LL )
        {
          v49 = WdLogNewEntry5_WdAssertion(v48, v44, v45, v46);
          *(_QWORD *)(v49 + 24) = 8414LL;
          WdLogEvent5_WdAssertion(v49);
        }
        v50 = HIDWORD(v81[6]);
        *((_DWORD *)this + 105) = v81[1];
        v51 = v83;
        *((_DWORD *)this + 104) = v50;
        if ( !v51 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v48, v44, v45, v46);
          *(_QWORD *)(v52 + 24) = 8417LL;
          WdLogEvent5_WdAssertion(v52);
          v51 = v83;
        }
        *((_DWORD *)this + 106) = v51;
        if ( DXGDEVICE::UmdManagesResidency(a2) )
        {
          v78 = 0LL;
          v76 = 0LL;
          v53 = *((_QWORD *)a2 + 2);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v53 + 400) + 8LL)
                                                                       + 936LL))(
            *((_QWORD *)a2 + 67),
            0LL,
            &v78,
            &v76);
          v77 = 0LL;
          v55 = DXGPROCESS::GetCurrent(v54);
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v55 + 192));
          v56 = (v50 >> 6) & 0xFFFFFF;
          if ( v56 < *((_DWORD *)v55 + 58)
            && (v57 = *((_QWORD *)v55 + 27),
                v58 = *(_DWORD *)(v57 + 16LL * v56 + 8),
                ((v50 >> 26) & 0x30) == (*(_BYTE *)(v57 + 16LL * v56 + 8) & 0x30))
            && (v58 & 0x1000) == 0
            && (v58 & 0xF) != 0
            && (*(_BYTE *)(v57 + 16LL * v56 + 8) & 0xF) == 5 )
          {
            v59 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * v56);
          }
          else
          {
            v59 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v59);
          ExReleasePushLockSharedEx((char *)v55 + 192, 0LL);
          KeLeaveCriticalRegion();
          v64 = v74;
          if ( !v74 )
          {
            v65 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
            *(_QWORD *)(v65 + 24) = 8441LL;
            WdLogEvent5_WdAssertion(v65);
            v64 = v74;
          }
          v66 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v53 + 400) + 8LL) + 752LL))(
                  *(_QWORD *)(v53 + 408),
                  v78,
                  v64 + 3,
                  1LL,
                  3,
                  &v77,
                  v80);
          v15 = v66;
          if ( v66 >= 0 )
          {
            if ( v66 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v53 + 400) + 8LL)
                                                                            + 944LL))(
                *(_QWORD *)(v53 + 408),
                &v76,
                &v77,
                1LL);
              LODWORD(v15) = 0;
            }
          }
          else
          {
            v71 = WdLogNewEntry5_WdWarning(v68, v67, v69, v70);
            *(_QWORD *)(v71 + 24) = v15;
            WdLogEvent5_WdWarning(v71);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74, v67, v69, v70);
        }
      }
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
      LODWORD(v15) = -1073741811;
      v43[3] = a2;
      v43[4] = v75;
      v43[5] = -1073741811LL;
      WdLogEvent5_WdError(v43);
    }
  }
  else
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    LODWORD(v15) = -1073741811;
    v72[3] = -1073741811LL;
    v72[4] = this;
    v72[5] = v8;
    WdLogEvent5_WdWarning(v72);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75, v44, v45, v46);
LABEL_57:
  *v79 = *((_DWORD *)this + 104);
  return (unsigned int)v15;
}
