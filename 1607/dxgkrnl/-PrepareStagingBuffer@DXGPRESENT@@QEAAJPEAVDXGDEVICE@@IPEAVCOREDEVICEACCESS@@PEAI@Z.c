/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0171F50
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0007F08 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
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
  __int64 v12; // rbx
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // r8d
  struct DXGALLOCATION **v21; // r15
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rbx
  unsigned int v28; // edx
  __int64 v29; // r9
  int v30; // r8d
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // esi
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  unsigned int v48; // r8d
  __int64 v49; // rdx
  int v50; // ecx
  struct _EX_RUNDOWN_REF *v51; // rdx
  __int64 v52; // rcx
  struct _EX_RUNDOWN_REF *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  struct _EX_RUNDOWN_REF *v63; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v68; // [rsp+68h] [rbp-98h]
  _BYTE v69[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v70[52]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v71[2]; // [rsp+220h] [rbp+120h] BYREF
  int v72; // [rsp+228h] [rbp+128h]

  v68 = a5;
  v8 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8877LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  v11 = *((_DWORD *)this + 1);
  LODWORD(v12) = 0;
  if ( (v11 & 0x40) == 0 )
  {
LABEL_24:
    if ( *((_DWORD *)this + 105) )
      goto LABEL_57;
    goto LABEL_25;
  }
  *((_DWORD *)this + 1) = v11 & 0xFFFFFFBF;
  if ( *((_DWORD *)this + 105) )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v14);
    if ( !ProcessDxgProcess )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v17 + 24) = 8894LL;
      WdLogEvent5_WdAssertion(v17);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v71,
      (struct DXGPROCESS *)ProcessDxgProcess);
    v18 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v19 = *(_QWORD *)(ProcessDxgProcess + 208),
          v20 = *(_DWORD *)(v19 + 16LL * (unsigned int)v18 + 8),
          ((*((_DWORD *)this + 105) >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * (unsigned int)v18 + 8) & 0x30))
      && (v20 & 0x1000) == 0
      && (v20 & 0xF) != 0
      && (*(_BYTE *)(v19 + 16LL * (unsigned int)v18 + 8) & 0xF) == 4 )
    {
      v21 = *(struct DXGALLOCATION ***)(v19 + 16LL * (unsigned int)v18);
      if ( v21 )
        goto LABEL_18;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v22 + 24) = 8900LL;
    WdLogEvent5_WdAssertion(v22);
LABEL_18:
    v23 = *((_DWORD *)this + 105);
    v24 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v25 = *(_QWORD *)(ProcessDxgProcess + 208);
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((v23 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x30) && (v26 & 0x1000) == 0 && (v26 & 0xF) != 0 )
        *(_DWORD *)(v25 + 16LL * ((v23 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v71);
    DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v21, (DXGADAPTER **)a4, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
    goto LABEL_24;
  }
LABEL_25:
  v27 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 184));
  v28 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v28 < *(_DWORD *)(v27 + 224)
    && (v29 = *(_QWORD *)(v27 + 208),
        v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
    && (v30 & 0x1000) == 0
    && (v30 & 0xF) != 0
    && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 5 )
  {
    v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v28);
  }
  else
  {
    v31 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64, v31);
  ExReleasePushLockSharedEx(v27 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v64 )
  {
    v36 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v64[1].Count + 16) + 16LL) == v36 )
    {
      memset(v70, 0, 0x198uLL);
      v71[0] = *((_DWORD *)this + 19);
      v71[1] = *((_DWORD *)this + 20);
      HIDWORD(v70[0]) = 0;
      v72 = 0;
      LODWORD(v70[2]) = 3;
      v70[3] = v71;
      LODWORD(v12) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v70, a4);
      if ( (int)v12 >= 0 )
      {
        if ( v70 == (_QWORD *)-52LL )
        {
          v39 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v39 + 24) = 8943LL;
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = HIDWORD(v70[6]);
        *((_DWORD *)this + 105) = v70[1];
        v41 = v72;
        *((_DWORD *)this + 104) = v40;
        if ( !v41 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v42 + 24) = 8946LL;
          WdLogEvent5_WdAssertion(v42);
          v41 = v72;
        }
        *((_DWORD *)this + 106) = v41;
        if ( DXGDEVICE::UmdManagesResidency(a2) )
        {
          v65 = 0LL;
          v67 = 0LL;
          v43 = *((_QWORD *)a2 + 2);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v43 + 400) + 8LL)
                                                                       + 960LL))(
            *((_QWORD *)a2 + 70),
            0LL,
            &v65,
            &v67);
          v66 = 0LL;
          v45 = PsGetCurrentProcess(v44);
          v47 = PsGetProcessDxgProcess(v45, v46);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v47 + 184));
          v48 = (v40 >> 6) & 0xFFFFFF;
          if ( v48 < *(_DWORD *)(v47 + 224)
            && (v49 = *(_QWORD *)(v47 + 208),
                v50 = *(_DWORD *)(v49 + 16LL * v48 + 8),
                ((v40 >> 26) & 0x30) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x30))
            && (v50 & 0x1000) == 0
            && (v50 & 0xF) != 0
            && (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0xF) == 5 )
          {
            v51 = *(struct _EX_RUNDOWN_REF **)(v49 + 16LL * v48);
          }
          else
          {
            v51 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63, v51);
          ExReleasePushLockSharedEx(v47 + 184, 0LL);
          KeLeaveCriticalRegion();
          v53 = v63;
          if ( !v63 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v52);
            *(_QWORD *)(v54 + 24) = 8970LL;
            WdLogEvent5_WdAssertion(v54);
            v53 = v63;
          }
          v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v43 + 400) + 8LL) + 768LL))(
                  *(_QWORD *)(v43 + 408),
                  v65,
                  v53 + 3,
                  1LL,
                  3,
                  &v66,
                  v69);
          v12 = v55;
          if ( v55 >= 0 )
          {
            if ( v55 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v43 + 400) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v43 + 408),
                &v67,
                &v66,
                1LL);
              LODWORD(v12) = 0;
            }
          }
          else
          {
            v60 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
            *(_QWORD *)(v60 + 24) = v12;
            WdLogEvent5_WdWarning(v60);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63);
        }
      }
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      LODWORD(v12) = -1073741811;
      v37[3] = a2;
      v37[4] = v64;
      v37[5] = -1073741811LL;
      WdLogEvent5_WdError(v37);
    }
  }
  else
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    LODWORD(v12) = -1073741811;
    v61[3] = -1073741811LL;
    v61[4] = this;
    v61[5] = v8;
    WdLogEvent5_WdWarning(v61);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64);
LABEL_57:
  *v68 = *((_DWORD *)this + 104);
  return (unsigned int)v12;
}
