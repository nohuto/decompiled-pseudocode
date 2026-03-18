/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00B0AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r15
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v26; // ecx
  struct _KTHREAD *v27; // r8
  int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _BYTE v32[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v34[80]; // [rsp+50h] [rbp-19h] BYREF
  struct DXGDEVICE *v35; // [rsp+E0h] [rbp+77h] BYREF
  char v36; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, a1->hDevice, Current, &v35);
    v8 = v35;
    if ( v35 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33, v35);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v32,
        *(struct DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v8, 2, v9, 0);
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34);
      v15 = v10;
      if ( v10 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
        v24[3] = v15;
        v24[4] = v8;
        v24[5] = v6;
        WdLogEvent5_WdEvent(v24);
        v18 = v15;
      }
      else
      {
        v16 = DXGDEVICE::Lock(v8, a1, (struct COREDEVICEACCESS *)v34, v14);
        v17 = v16;
        if ( v16 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 24));
          v26 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v26 < *((_DWORD *)v6 + 58)
            && (v27 = v6[27],
                v28 = *((_DWORD *)v27 + 4 * v26 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v27 + 16 * v26 + 8) & 0x30))
            && (v28 & 0x1000) == 0
            && (v28 & 0xF) != 0
            && (*((_BYTE *)v27 + 16 * v26 + 8) & 0xF) == 5 )
          {
            v29 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v27 + 2 * v26);
          }
          else
          {
            v29 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35, v29);
          ExReleasePushLockSharedEx(v6 + 24, 0LL);
          KeLeaveCriticalRegion();
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v31[3] = v17;
          v31[4] = v8;
          v31[5] = v6;
          v31[6] = a1->hAllocation;
          v31[7] = v35;
          WdLogEvent5_WdError(v31);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35);
        }
        v18 = v17;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
      if ( v32[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v18 = -1073741811;
      v23[3] = -1073741811LL;
      v23[4] = a1->hDevice;
      v23[5] = v6;
      WdLogEvent5_WdError(v23);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36);
  }
  else
  {
    v18 = -1073741811;
    v22 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v22);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 3006);
  return v18;
}
