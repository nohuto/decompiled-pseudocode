/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C005DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v23; // ecx
  struct _KTHREAD *v24; // r8
  int v25; // edx
  struct DXGALLOCATION *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char v29[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+38h] [rbp-31h] BYREF
  char v31; // [rsp+40h] [rbp-29h]
  _BYTE v32[80]; // [rsp+50h] [rbp-19h] BYREF
  struct DXGDEVICE *v33; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v29, a1->hDevice, Current, &v33);
    v8 = v33;
    if ( v33 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34, v33);
      v9 = *((_QWORD *)v8 + 2);
      v31 = 0;
      v30 = *(_QWORD *)(v9 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v30);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v8, 2, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
      v12 = v11;
      if ( v11 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v21[3] = v12;
        v21[4] = v8;
        v21[5] = v6;
        WdLogEvent5_WdEvent(v21);
        v15 = v12;
      }
      else
      {
        v13 = DXGDEVICE::Lock(v8, a1, (struct COREDEVICEACCESS *)v32);
        v14 = v13;
        if ( v13 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 24));
          v23 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v23 < *((_DWORD *)v6 + 58)
            && (v24 = v6[27],
                v25 = *((_DWORD *)v24 + 4 * v23 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v24 + 16 * v23 + 8) & 0x30))
            && (v25 & 0x1000) == 0
            && (v25 & 0xF) != 0
            && (*((_BYTE *)v24 + 16 * v23 + 8) & 0xF) == 5 )
          {
            v26 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 2 * v23);
          }
          else
          {
            v26 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v26);
          ExReleasePushLockSharedEx(v6 + 24, 0LL);
          KeLeaveCriticalRegion();
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v28[3] = v14;
          v28[4] = v8;
          v28[5] = v6;
          v28[6] = a1->hAllocation;
          v28[7] = v33;
          WdLogEvent5_WdError(v28);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33);
        }
        v15 = v14;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
      if ( v31 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v30);
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 80));
      KeLeaveCriticalRegion();
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v15 = -1073741811;
      v20[3] = -1073741811LL;
      v20[4] = a1->hDevice;
      v20[5] = v6;
      WdLogEvent5_WdError(v20);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v29);
  }
  else
  {
    v15 = -1073741811;
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v19);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 3006);
  return v15;
}
