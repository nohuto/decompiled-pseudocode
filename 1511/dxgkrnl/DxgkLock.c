/*
 * XREFs of DxgkLock @ 0x1C0061450
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkLock(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v7; // rax
  __int64 v8; // rcx
  DXGDEVICE *v9; // rsi
  __int64 v10; // r9
  int v11; // r15d
  _QWORD *v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rax
  char v22; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2011;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2011);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v7 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *v7;
    *(_OWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v7[1];
    *(_OWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v7[2];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
      Current,
      (struct DXGDEVICE **)(v3 + 8));
    v9 = *(DXGDEVICE **)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v9 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 104),
        *(struct DXGDEVICE **)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16),
        *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 128, (__int64)v9, 0, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 128));
      if ( v11 >= 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
        v11 = DXGDEVICE::Lock(v9, (struct _D3DKMT_LOCK *)(v3 + 56), (struct COREDEVICEACCESS *)(v3 + 128));
        if ( v11 >= 0 )
        {
          v12 = (_QWORD *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v12 = (_QWORD *)MmUserProbeAddress;
          *v12 = *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v13 = (_DWORD *)(a1 + 4);
          if ( a1 + 4 >= MmUserProbeAddress )
            v13 = (_DWORD *)MmUserProbeAddress;
          *v13 = *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 104));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v14, &EventProfilerExit, v15, 2011);
      return (unsigned int)v11;
    }
    v21 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL));
    v20 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    v19 = qword_1C00467F0;
    v20 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v18, 2011);
  return 3221225485LL;
}
