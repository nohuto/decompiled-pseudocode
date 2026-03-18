/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C01523A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0151220 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  _DWORD *v8; // r8
  ULONG64 v9; // rcx
  bool v10; // zf
  ULONG64 v12; // rax
  DXGGLOBAL *v13; // rcx
  unsigned int v14; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2067);
  if ( DXGPROCESS::GetCurrent() )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v12;
    *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_DWORD *)v3 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v7 = DXGGLOBAL::OpenKeyedMutex(
           v13,
           *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           v3 + 1,
           (unsigned int *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL),
           *(char **)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
           *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    if ( v7 >= 0 )
    {
      v8 = (_DWORD *)(a1 + 4);
      v9 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v8 = (_DWORD *)MmUserProbeAddress;
      *v8 = *(_DWORD *)v3;
    }
    if ( v7 < 0 )
    {
      v9 = *(unsigned int *)v3;
      if ( (_DWORD)v9 )
        DXGKEYEDMUTEX::DestroyHandle(v9);
    }
    v10 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, (__int64)v8, 2067);
  return (unsigned int)v7;
}
