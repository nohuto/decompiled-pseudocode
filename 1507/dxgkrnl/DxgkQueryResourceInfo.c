/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C00A8830
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BD88 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  int Resource; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  char v30; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 2004;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v7;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v7[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
      Current,
      (struct DXGDEVICE **)(v3 + 24));
    v9 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v9 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 80, v9, 0, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 80));
      v16 = v11;
      if ( v11 < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v26 + 24) = v9;
        *(_QWORD *)(v26 + 32) = v16;
        WdLogEvent5_WdWarning(v26);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v27, &EventProfilerExit, v28, 2004);
        return (unsigned int)v16;
      }
      else
      {
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                     v9,
                     (_DWORD *)(v3 + 32),
                     *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24));
        if ( Resource < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(qword_1C00467F0, &EventProfilerExit, v29, 2004);
          return (unsigned int)Resource;
        }
        else
        {
          if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          a1[1] = *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 80));
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v18, &EventProfilerExit, v19, 2004);
          return 0LL;
        }
      }
    }
    v25 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v25 + 24) = *(unsigned int *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
    v24 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v23 = qword_1C00467F0;
    v24 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v23, &EventProfilerExit, v22, 2004);
  return 3221225485LL;
}
