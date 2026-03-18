/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00B09B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _BYTE v21[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[80]; // [rsp+40h] [rbp-58h] BYREF
  struct DXGDEVICE *v23; // [rsp+B0h] [rbp+18h] BYREF
  char v24; // [rsp+B8h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, a1->hDevice, Current, &v23);
    v8 = v23;
    if ( v23 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v21, v23);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v8, 2, v9, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22) < 0 )
      {
        v14 = 0;
      }
      else
      {
        v11 = DXGDEVICE::Unlock(v8, a1, 0LL, v10);
        v13 = v11;
        if ( v11 < 0 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v20[3] = v13;
          v20[4] = v8;
          v20[5] = v6;
          WdLogEvent5_WdError(v20);
        }
        v14 = v13;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v21);
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v14 = -1073741811;
      v19[3] = -1073741811LL;
      v19[4] = a1->hDevice;
      v19[5] = v6;
      WdLogEvent5_WdError(v19);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24);
  }
  else
  {
    v14 = -1073741811;
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v18);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 3007);
  return v14;
}
