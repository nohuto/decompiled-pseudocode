/*
 * XREFs of DxgkSetProcessSchedulingPriorityClass @ 0x1C00CDED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00A20B8 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00CE14C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityClass(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  DXGPROCESS *Process; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h]
  int v13; // [rsp+38h] [rbp-48h]
  __int16 v14; // [rsp+3Ch] [rbp-44h]
  bool v15; // [rsp+3Eh] [rbp-42h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2031);
  v12 = 0LL;
  v14 = 0;
  v11 = a1;
  v13 = 512;
  v15 = 0;
  v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v10, 0);
  if ( v6 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v10);
    v6 = DXGPROCESS::SetProcessSchedulingPriorityClass(Process, a2, v15);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v10);
  }
  if ( (_BYTE)v14 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v10);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerExit, v7, 2031);
  return (unsigned int)v6;
}
