/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C01615E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C015AC30 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C015AC64 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C015ACC4 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015E3D8 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGDEVICE *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rcx
  const struct DXGRESOURCEREFERENCE *v24; // r13
  __int64 v25; // rax
  unsigned int i; // edi
  unsigned int *v27; // rdx
  __int64 v28; // r12
  struct _EX_RUNDOWN_REF **v29; // r13
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _EX_RUNDOWN_REF *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 2079;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2079);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = _guard_dispatch_icall_fptr() == 0;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *v4;
    v10 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 48));
    v19 = *(struct DXGDEVICE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( v19 )
    {
      v21 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v21;
      if ( v21 && (v22 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54), (_DWORD)v22) )
      {
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(v3 + 192);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements((__int64 *)(v3 + 192), v22);
        v24 = *(const struct DXGRESOURCEREFERENCE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
        *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v24;
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdLowResource(v23);
          *(_QWORD *)(v25 + 24) = v22;
          LODWORD(v10) = -1073741801;
          *(_QWORD *)(v25 + 32) = -1073741801LL;
          WdLogEvent5_WdLowResource(v25);
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)(v3 + 192));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
          goto LABEL_6;
        }
        for ( i = 0; i < (unsigned int)v22; ++i )
        {
          v27 = (unsigned int *)(v21 + 4LL * i);
          if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v28 = *v27;
          *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v28;
          v29 = (struct _EX_RUNDOWN_REF **)((char *)v24 + 8 * i);
          ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                                                      (DXGRESOURCEREFERENCE *)(v3 + 64),
                                                      v28);
          DXGRESOURCEREFERENCE::MoveAssign(v29, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 64));
          v33 = *v29;
          if ( !*v29 || (HIDWORD(v33->Ptr) & 1) == 0 || !v33[7].Count )
            goto LABEL_34;
          v34 = *(_QWORD *)(v33[1].Count + 16);
          if ( *(_QWORD *)(v34 + 16) != *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
            v35[3] = v19;
            v35[4] = *v29;
            LODWORD(v10) = -1073741811;
            v35[5] = -1073741811LL;
            WdLogEvent5_WdError(v35);
            goto LABEL_35;
          }
          v32 = 0LL;
          v24 = *(const struct DXGRESOURCEREFERENCE **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          if ( i )
          {
            while ( *((struct _EX_RUNDOWN_REF **)v24 + (unsigned int)v32) != v33 )
            {
              v32 = (unsigned int)(v32 + 1);
              if ( (unsigned int)v32 >= i )
                goto LABEL_33;
            }
LABEL_34:
            v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, 0LL);
            *(_QWORD *)(v36 + 24) = v28;
            LODWORD(v10) = -1073741811;
            *(_QWORD *)(v36 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v36);
            goto LABEL_35;
          }
LABEL_33:
          v21 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 24), v19);
        COREDEVICEACCESS::COREDEVICEACCESS(v3 + 96, (__int64)v19, 2, v37, 0);
        v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 96));
        v10 = v38;
        if ( v38 >= 0 )
        {
          LODWORD(v10) = DXGDEVICE::PinDirectFlipResources(
                           v19,
                           v22,
                           v24,
                           *(_BYTE *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
        }
        else
        {
          v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
          *(_QWORD *)(v43 + 24) = v19;
          *(_QWORD *)(v43 + 32) = v10;
          WdLogEvent5_WdWarning(v43);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
        if ( *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 24));
LABEL_35:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)(v3 + 192));
      }
      else
      {
        v44 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v44 + 24) = v10;
        LODWORD(v10) = -1073741811;
        *(_QWORD *)(v44 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v44);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v20 + 24) = v10;
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  v9 = WdLogNewEntry5_WdError(v7);
  LODWORD(v10) = -1073741811;
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v9);
LABEL_6:
  v12 = qword_1C0056840;
  v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v11, 2079);
  return (unsigned int)v10;
}
