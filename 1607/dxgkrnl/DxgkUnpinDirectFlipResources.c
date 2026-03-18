/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C0161E80
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
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C015F314 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
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
  _BOOL8 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned int v19; // r13d
  __int64 v20; // rcx
  DXGDEVICE *v21; // r12
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int *v31; // rdx
  __int64 v32; // r15
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  char v39; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 2080;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2080);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v15 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
    *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v15;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v4;
    v18 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v18;
    if ( v18 && (v19 = *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24)) != 0 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL),
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        ProcessDxgProcess,
        v3 + 7);
      v21 = *(DXGDEVICE **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      if ( v21 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          *(struct DXGDEVICE **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), (__int64)v21, 2, v23, 0);
        v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 10));
        v10 = v24;
        if ( v24 >= 0 )
        {
          v30 = 0LL;
          while ( (unsigned int)v30 < v19 )
          {
            v31 = (unsigned int *)(v18 + 4 * v30);
            if ( v31 + 1 < v31 || (unsigned __int64)(v31 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v32 = *v31;
            *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v32;
            v33 = DXGDEVICE::UnpinDirectFlipResource(
                    v21,
                    v32,
                    *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                    (struct COREDEVICEACCESS *)(v3 + 10));
            v10 = v33;
            if ( v33 < 0 )
            {
              v29 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
              *(_QWORD *)(v29 + 24) = v32;
              goto LABEL_19;
            }
            v30 = (unsigned int)(v30 + 1);
            v18 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          }
        }
        else
        {
          v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
          *(_QWORD *)(v29 + 24) = v21;
LABEL_19:
          *(_QWORD *)(v29 + 32) = v10;
          WdLogEvent5_WdWarning(v29);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
        if ( *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 1));
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v22 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        LODWORD(v10) = -1073741811;
        *(_QWORD *)(v22 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v22);
      }
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL));
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v15, 1LL, v16, v17);
      *(_QWORD *)(v38 + 24) = *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v38 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v38);
    }
    v13 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v11, 2080);
  return (unsigned int)v10;
}
