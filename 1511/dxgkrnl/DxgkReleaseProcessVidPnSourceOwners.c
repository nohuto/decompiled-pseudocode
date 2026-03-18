/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C014E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  struct _KTHREAD ***Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2033);
  v18 = 0LL;
  v17 = a1;
  v19 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v16, 1) >= 0 )
  {
    Process = (struct _KTHREAD ***)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v16);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v16, v13, v14);
    v11 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = a1;
    v11 = -1073741811;
  }
  if ( BYTE1(v19) )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v16, v8, v10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 2033);
  return v11;
}
