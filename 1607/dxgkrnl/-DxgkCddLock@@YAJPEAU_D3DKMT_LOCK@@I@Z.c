/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0072A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // r15
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // r8
  int v26; // edx
  struct DXGALLOCATION *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _BYTE v30[16]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v31[32]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v32[96]; // [rsp+60h] [rbp-29h] BYREF
  struct DXGDEVICE *v33; // [rsp+100h] [rbp+77h] BYREF
  char v34; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3006);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, a1->hDevice, ProcessDxgProcess, &v33);
    v10 = v33;
    if ( v33 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30, v33);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v31,
        *(struct DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v10, 2, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
      v13 = v12;
      if ( v12 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v22[3] = v13;
        v22[4] = v10;
        v22[5] = v8;
        WdLogEvent5_WdEvent(v22);
        v16 = v13;
      }
      else
      {
        v14 = DXGDEVICE::Lock(v10, a1, (struct COREDEVICEACCESS *)v32);
        v15 = v14;
        if ( v14 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 23));
          v24 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v24 < *((_DWORD *)v8 + 56)
            && (v25 = v8[26],
                v26 = *((_DWORD *)v25 + 4 * v24 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v25 + 16 * v24 + 8) & 0x30))
            && (v26 & 0x1000) == 0
            && (v26 & 0xF) != 0
            && (*((_BYTE *)v25 + 16 * v24 + 8) & 0xF) == 5 )
          {
            v27 = (struct DXGALLOCATION *)*((_QWORD *)v25 + 2 * v24);
          }
          else
          {
            v27 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v27);
          ExReleasePushLockSharedEx(v8 + 23, 0LL);
          KeLeaveCriticalRegion();
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v29[3] = v15;
          v29[4] = v10;
          v29[5] = v8;
          v29[6] = a1->hAllocation;
          v29[7] = v33;
          WdLogEvent5_WdError(v29);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33);
        }
        v16 = v15;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
      if ( v31[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30);
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v16 = -1073741811;
      v21[3] = -1073741811LL;
      v21[4] = a1->hDevice;
      v21[5] = v8;
      WdLogEvent5_WdError(v21);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34);
  }
  else
  {
    v16 = -1073741811;
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v20);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 3006);
  return v16;
}
