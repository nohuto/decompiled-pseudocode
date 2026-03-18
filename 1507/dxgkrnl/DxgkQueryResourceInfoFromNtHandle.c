/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00A85C0
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BB44 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
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
  void *v17; // r12
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // r15
  int Resource; // esi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // r8
  __int64 v31; // rcx
  bool v32; // zf
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // zf
  _QWORD *v39; // rax
  __int64 v40; // r8
  char v41; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 2073;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v7 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *v7;
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v7[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
      Current,
      (struct DXGDEVICE **)(v3 + 32));
    v9 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( v9 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 96, v9, 0, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 96));
      v16 = v11;
      if ( v11 < 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v35 + 24) = v9;
        *(_QWORD *)(v35 + 32) = v16;
        WdLogEvent5_WdWarning(v35);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
        v38 = (qword_1C00467F0 & 2) == 0;
LABEL_26:
        if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v36, &EventProfilerExit, v37, 2073);
        return (unsigned int)v16;
      }
      v17 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      v18 = ObReferenceObjectByHandle(v17, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)(v3 + 24), 0LL);
      v16 = v18;
      v23 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v23;
      if ( v18 != -1073741788 )
      {
        if ( v18 >= 0 )
        {
          Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                       v9,
                       (_DWORD *)(v3 + 48),
                       v21,
                       (__int64)v23);
          ObfDereferenceObject(v23);
          if ( Resource < 0 )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(qword_1C00467F0, &EventProfilerExit, v40, 2073);
            return (unsigned int)Resource;
          }
          else
          {
            if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
            *(_QWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
            if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(v25, &EventProfilerExit, v26, 2073);
            return 0LL;
          }
        }
        v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        v39[3] = v9;
        v39[4] = v17;
        v39[5] = v16;
        WdLogEvent5_WdWarning(v39);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
        v38 = (qword_1C00467F0 & 2) == 0;
        goto LABEL_26;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v33[3] = v9;
      v33[4] = v17;
      v29 = -1073741788;
      v33[5] = -1073741788LL;
      WdLogEvent5_WdWarning(v33);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
      v31 = qword_1C00467F0;
      v32 = (qword_1C00467F0 & 2) == 0;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v34 + 24) = *(unsigned int *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v29 = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
      v32 = (qword_1C00467F0 & 2) == 0;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v5);
    v29 = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    v31 = qword_1C00467F0;
    v32 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v31, &EventProfilerExit, v30, 2073);
  return v29;
}
