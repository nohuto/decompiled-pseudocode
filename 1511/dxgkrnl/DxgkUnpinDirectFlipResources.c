/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C013DB90
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
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013BA6C (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _BOOL8 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned int v17; // r13d
  __int64 v18; // rcx
  DXGDEVICE *v19; // r12
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int *v29; // rdx
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  char v37; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2080;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2080);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v13 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
    *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v13;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v4;
    v16 = *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v16;
    if ( v16 && (v17 = *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24)) != 0 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL),
        *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        Current,
        v3 + 6);
      v19 = *(DXGDEVICE **)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      if ( v19 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          *(struct DXGDEVICE **)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), (__int64)v19, 2, v21, 0);
        v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 10));
        v8 = v22;
        if ( v22 >= 0 )
        {
          v28 = 0LL;
          while ( (unsigned int)v28 < v17 )
          {
            v29 = (unsigned int *)(v16 + 4 * v28);
            if ( v29 + 1 < v29 || (unsigned __int64)(v29 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v30 = *v29;
            *(_DWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v30;
            v31 = DXGDEVICE::UnpinDirectFlipResource(
                    v19,
                    v30,
                    *(_BYTE *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
                    (struct COREDEVICEACCESS *)(v3 + 10));
            v8 = v31;
            if ( v31 < 0 )
            {
              v27 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
              *(_QWORD *)(v27 + 24) = v30;
              goto LABEL_19;
            }
            v28 = (unsigned int)(v28 + 1);
            v16 = *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          }
        }
        else
        {
          v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
          *(_QWORD *)(v27 + 24) = v19;
LABEL_19:
          *(_QWORD *)(v27 + 32) = v8;
          WdLogEvent5_WdWarning(v27);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
        if ( *(_QWORD *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 1));
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = *(unsigned int *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        LODWORD(v8) = -1073741811;
        *(_QWORD *)(v20 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v20);
      }
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL));
    }
    else
    {
      v36 = WdLogNewEntry5_WdWarning(v13, 1LL, v14, v15);
      *(_QWORD *)(v36 + 24) = *(unsigned int *)(((unsigned __int64)&v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v36 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v36);
    }
    v11 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2080);
  return (unsigned int)v8;
}
