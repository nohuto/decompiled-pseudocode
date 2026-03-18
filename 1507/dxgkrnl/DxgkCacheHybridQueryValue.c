/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C0149FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  int *v9; // rax
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8

  v3 = (int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2091);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v9 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = (int *)MmUserProbeAddress;
    v10 = *v9;
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)Current + 11));
    if ( !*((_DWORD *)Current + 82) )
      *((_DWORD *)Current + 82) = v10;
    v11 = *((_DWORD *)Current + 82);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)Current + 11));
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (int *)MmUserProbeAddress;
    *v3 = v11;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2091);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v7, 2091);
    return 3221225485LL;
  }
}
