/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C014A420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DB224 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(DXGPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  DXGPROCESS *Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  DXGPROCESS *v20[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v21; // [rsp+38h] [rbp-10h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2033);
  v20[2] = 0LL;
  v20[1] = a1;
  v21 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)v20, a2, a3, a4) >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, v14, v15, v16);
    DXGPROCESSMUTEXBYHANDLE::Release(v20, v17, v18);
    v12 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = a1;
    v12 = -1073741811;
  }
  if ( HIBYTE(v21) )
    DXGPROCESSMUTEXBYHANDLE::Release(v20, v9, v11);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 2033);
  return v12;
}
