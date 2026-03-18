/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C013D310
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0137FB0 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0137FE4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0138044 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013AD0C (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int i; // r14d
  unsigned int *v24; // rdx
  __int64 v25; // r12
  struct _EX_RUNDOWN_REF **v26; // rdi
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  DXGDEVICE *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  char v46; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 2079;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2079);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2079);
    return v8;
  }
  *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = _guard_dispatch_icall_fptr() == 0;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
  v16 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v16;
  if ( !v16 || (v17 = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C), !(_DWORD)v17) )
  {
    v45 = WdLogNewEntry5_WdWarning(1LL, v13, v14, v15);
    *(_QWORD *)(v45 + 24) = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v8 = -1073741811;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v45);
LABEL_45:
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(v3 + 176);
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements((__int64 *)(v3 + 176), v17);
  v21 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
  *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v21;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, 0LL);
    *(_QWORD *)(v22 + 24) = v17;
    v8 = -1073741801;
    *(_QWORD *)(v22 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)(v3 + 176));
    goto LABEL_6;
  }
  for ( i = 0; i < (unsigned int)v17; ++i )
  {
    v24 = (unsigned int *)(v16 + 4LL * i);
    if ( v24 + 1 < v24 || (unsigned __int64)(v24 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v25 = *v24;
    *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v25;
    v26 = (struct _EX_RUNDOWN_REF **)(v21 + 8LL * i);
    ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                            (__int64)Current,
                                            (DXGRESOURCEREFERENCE *)(v3 + 56),
                                            v25);
    DXGRESOURCEREFERENCE::Assign(v26, ResourceSafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 56));
    v30 = *v26;
    if ( !*v26 || (HIDWORD(v30->Ptr) & 1) == 0 || !v30[7].Count )
    {
LABEL_30:
      v31 = WdLogNewEntry5_WdWarning(v28, v30, v29, v21);
      *(_QWORD *)(v31 + 24) = v25;
      v8 = -1073741811;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
LABEL_31:
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)(v3 + 176));
      goto LABEL_45;
    }
    v28 = 0LL;
    v21 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    while ( (unsigned int)v28 < i )
    {
      if ( *(struct _EX_RUNDOWN_REF **)(v21 + 8 * v28) == v30 )
        goto LABEL_30;
      v28 = (unsigned int)(v28 + 1);
    }
    v16 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    Current,
    (struct DXGDEVICE **)(v3 + 72));
  v33 = *(DXGDEVICE **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  if ( !v33 )
  {
    v34 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v34 + 24) = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v8 = -1073741811;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
LABEL_34:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_31;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 40),
    *(struct DXGDEVICE **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 96, (__int64)v33, 2, v35, 0);
  v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 96));
  v41 = v36;
  if ( v36 >= 0 )
  {
    v8 = DXGDEVICE::PinDirectFlipResources(
           v33,
           v17,
           *(const struct DXGRESOURCEREFERENCE **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           *(_BYTE *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
    if ( *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 40));
    goto LABEL_34;
  }
  v42 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
  *(_QWORD *)(v42 + 24) = v33;
  *(_QWORD *)(v42 + 32) = v41;
  WdLogEvent5_WdWarning(v42);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
  if ( *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 40));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL));
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)(v3 + 176));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v43, &EventProfilerExit, v44, 2079);
  return (unsigned int)v41;
}
