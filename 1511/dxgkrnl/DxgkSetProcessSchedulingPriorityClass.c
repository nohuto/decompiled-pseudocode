/*
 * XREFs of DxgkSetProcessSchedulingPriorityClass @ 0x1C00B1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?AcquireCrossSession@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C001F7C4 (-AcquireCrossSession@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C014DFF0 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityClass(
        __int64 a1,
        enum _D3DKMT_SCHEDULINGPRIORITYCLASS a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  DXGPROCESS *Process; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h]
  bool v13[4]; // [rsp+38h] [rbp-48h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2031);
  v12 = 0LL;
  v11 = a1;
  *(_DWORD *)v13 = 0;
  v6 = DXGPROCESSMUTEXBYHANDLE::AcquireCrossSession((DXGPROCESSMUTEXBYHANDLE *)v10);
  if ( v6 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v10);
    v6 = DXGPROCESS::SetProcessSchedulingPriorityClass(Process, a2, v13[3]);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v10);
  }
  if ( v13[1] )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v5, &EventProfilerExit, v7, 2031);
  return (unsigned int)v6;
}
