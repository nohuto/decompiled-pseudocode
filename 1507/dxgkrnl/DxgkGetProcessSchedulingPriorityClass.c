/*
 * XREFs of DxgkGetProcessSchedulingPriorityClass @ 0x1C014A300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DB224 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00DB29C (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C011ECF4 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityClass(void *a1, _DWORD *a2, __int64 a3)
{
  char v5; // dl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[32]; // [rsp+60h] [rbp+0h] BYREF

  v5 = qword_1C00467F0;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2032);
    v5 = qword_1C00467F0;
  }
  if ( a2 )
  {
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
      (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL),
      a1,
      0);
    v11 = DXGPROCESSMUTEXBYHANDLE::Acquire(
            (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL),
            v7,
            v8,
            v9);
    if ( v11 >= 0 )
    {
      v13 = *((unsigned int *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL))
            + 60);
      v11 = 0;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v13;
      DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESS **)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL), v13, v14);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
      (DXGPROCESS **)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL),
      v10,
      v12);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2032);
    return (unsigned int)v11;
  }
  else
  {
    if ( (v5 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)a1, &EventProfilerExit, a3, 2032);
    return 3221225485LL;
  }
}
