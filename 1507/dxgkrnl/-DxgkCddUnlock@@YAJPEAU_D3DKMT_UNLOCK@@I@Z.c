/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C005DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v20[80]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGDEVICE *v21; // [rsp+A0h] [rbp+18h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, a1->hDevice, Current, &v21);
    v8 = v21;
    if ( v21 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v21, v21);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v8, 2, v9, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20) < 0 )
      {
        v13 = 0;
      }
      else
      {
        v10 = DXGDEVICE::Unlock(v8, a1, 0);
        v12 = v10;
        if ( v10 < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v19[3] = v12;
          v19[4] = v8;
          v19[5] = v6;
          WdLogEvent5_WdError(v19);
        }
        v13 = v12;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
      ExReleaseResourceLite(*((PERESOURCE *)v21 + 10));
      KeLeaveCriticalRegion();
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v13 = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = a1->hDevice;
      v18[5] = v6;
      WdLogEvent5_WdError(v18);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22);
  }
  else
  {
    v13 = -1073741811;
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v17);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 3007);
  return v13;
}
