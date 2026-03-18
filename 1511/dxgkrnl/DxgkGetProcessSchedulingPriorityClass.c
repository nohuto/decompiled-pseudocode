/*
 * XREFs of DxgkGetProcessSchedulingPriorityClass @ 0x1C014E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00B2138 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityClass(void *a1, _DWORD *a2, __int64 a3)
{
  char v5; // dl
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v14[80]; // [rsp+60h] [rbp+0h] BYREF

  v5 = qword_1C00467F0;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2032);
    v5 = qword_1C00467F0;
  }
  if ( a2 )
  {
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
      (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL),
      a1,
      0);
    v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal(
           (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL),
           1);
    if ( v8 >= 0 )
    {
      v10 = *((unsigned int *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL))
            + 60);
      v8 = 0;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v10;
      DXGPROCESSMUTEXBYHANDLE::Release(
        (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL),
        v10,
        v11);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
      (DXGPROCESSMUTEXBYHANDLE *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL),
      v7,
      v9);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2032);
    return (unsigned int)v8;
  }
  else
  {
    if ( (v5 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)a1, &EventProfilerExit, a3, 2032);
    return 3221225485LL;
  }
}
