/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01718FC
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0007F08 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4)
{
  unsigned int *v4; // r14
  unsigned int v5; // r13d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  SIZE_T v14; // rax
  __int64 v15; // rcx
  int v16; // r12d
  __int64 v17; // rax
  int v18; // r15d
  int v19; // edi
  DXGDEVICE *v20; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 ProcessDxgProcess; // r13
  unsigned int v31; // ebx
  __int64 v32; // r15
  unsigned int v33; // ecx
  __int64 v34; // r8
  int v35; // edx
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rcx
  struct _EX_RUNDOWN_REF *v38; // rbx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+50h] [rbp-B0h] BYREF
  struct COREDEVICEACCESS *v55; // [rsp+58h] [rbp-A8h] BYREF
  void *v56; // [rsp+60h] [rbp-A0h]
  void *v57; // [rsp+68h] [rbp-98h]
  void *v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v63; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v64; // [rsp+9Ch] [rbp-64h]
  unsigned int v65; // [rsp+A4h] [rbp-5Ch]
  unsigned int *v66; // [rsp+A8h] [rbp-58h]
  _BYTE v67[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v68[14]; // [rsp+C0h] [rbp-40h] BYREF

  v56 = 0LL;
  v4 = 0LL;
  v55 = a3;
  v57 = 0LL;
  v5 = (unsigned int)a2;
  v58 = 0LL;
  v66 = a4;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0;
  memset(v68, 0, 0x48uLL);
  v7 = *((_QWORD *)this + 2);
  LODWORD(v62) = v5;
  v61 = *(_DWORD *)(v7 + 308);
  LODWORD(v10) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v7, &v61, v5);
  if ( (int)v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdWarning(v13);
    goto LABEL_35;
  }
  v14 = 80LL * v65;
  if ( !is_mul_ok(v65, 0x50uLL) )
    v14 = -1LL;
  v4 = (unsigned int *)operator new(v14, 0x4B677844u, PagedPool);
  if ( !v4 )
  {
LABEL_7:
    LODWORD(v10) = -1073741670;
    goto LABEL_35;
  }
  v16 = v64;
  if ( (_DWORD)v64 && (v56 = operator new((unsigned int)v64, 0x4B677844u, PagedPool)) == 0LL
    || (v18 = HIDWORD(v64)) != 0 && (v57 = operator new(HIDWORD(v64), 0x4B677844u, PagedPool)) == 0LL
    || (v19 = HIDWORD(v63)) != 0 && (v58 = operator new(HIDWORD(v63), 0x4B677844u, PagedPool)) == 0LL )
  {
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v17);
    goto LABEL_7;
  }
  v20 = (DXGDEVICE *)*((_QWORD *)this + 2);
  HIDWORD(v68[0]) = v5;
  v68[2] = v4;
  LODWORD(v68[8]) = v16;
  LODWORD(v68[0]) = *((_DWORD *)v20 + 77);
  LODWORD(v68[1]) = v65;
  v68[7] = v56;
  v68[5] = v57;
  v68[3] = v58;
  LODWORD(v68[6]) = v18;
  LODWORD(v68[4]) = v19;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15);
  v23 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v20,
          (__int64)v68,
          v5,
          v22,
          0,
          (PERESOURCE **)v55,
          v53,
          CurrentProcess,
          0LL,
          0LL);
  v10 = v23;
  if ( v23 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v13 + 24) = v10;
    goto LABEL_3;
  }
  v28 = PsGetCurrentProcess(v25);
  ProcessDxgProcess = PsGetProcessDxgProcess(v28, v29);
  v31 = *v4;
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v33 = (v31 >> 6) & 0xFFFFFF;
  if ( v33 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v34 = *(_QWORD *)(ProcessDxgProcess + 208),
        v35 = *(_DWORD *)(v34 + 16LL * v33 + 8),
        ((v31 >> 26) & 0x30) == (*(_BYTE *)(v34 + 16LL * v33 + 8) & 0x30))
    && (v35 & 0x1000) == 0
    && (v35 & 0xF) != 0
    && (*(_BYTE *)(v34 + 16LL * v33 + 8) & 0xF) == 5 )
  {
    v36 = *(struct _EX_RUNDOWN_REF **)(v34 + 16LL * v33);
  }
  else
  {
    v36 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54, v36);
  ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
  KeLeaveCriticalRegion();
  v38 = v54;
  if ( !v54 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v37);
    *(_QWORD *)(v39 + 24) = 4931LL;
    WdLogEvent5_WdAssertion(v39);
    v38 = v54;
  }
  if ( *((_BYTE *)this + 352) )
  {
    memset(v68, 0, 0x68uLL);
    v68[7] |= 1uLL;
    LOBYTE(v52) = 0;
    v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, int))(*(_QWORD *)(*(_QWORD *)(v32 + 400) + 8LL)
                                                                                            + 792LL))(
            *(_QWORD *)(v32 + 408),
            0LL,
            v38[3].Count,
            v68,
            v52,
            (LODWORD(v38[9].Count) >> 12) & 0x3F);
    v10 = v40;
    if ( v40 < 0 )
    {
LABEL_28:
      v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
      *(_QWORD *)(v45 + 24) = v10;
      WdLogEvent5_WdWarning(v45);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
      goto LABEL_35;
    }
  }
  if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
  {
    v47 = *(_QWORD *)(v32 + 400);
    v59 = 0LL;
    v55 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(v47 + 8) + 960LL))(
      *(_QWORD *)(v46 + 560),
      0LL,
      &v59,
      &v55);
    v48 = *(_QWORD *)(v32 + 400);
    v49 = *(_QWORD *)(v32 + 408);
    v60 = 0LL;
    v50 = (*(__int64 (__fastcall **)(__int64, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(v48 + 8) + 768LL))(
            v49,
            v59,
            v54 + 3,
            1LL,
            3,
            &v60,
            v67);
    v10 = v50;
    if ( v50 < 0 )
      goto LABEL_28;
    if ( v50 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v32 + 400)
                                                                                                 + 8LL)
                                                                                     + 968LL))(
        *(_QWORD *)(v32 + 408),
        &v55,
        &v60,
        1LL);
      LODWORD(v10) = 0;
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
  if ( (int)v10 >= 0 )
    *v66 = *v4;
LABEL_35:
  operator delete(v4);
  operator delete(v56);
  operator delete(v57);
  operator delete(v58);
  return (unsigned int)v10;
}
