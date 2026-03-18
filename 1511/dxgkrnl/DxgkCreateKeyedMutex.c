/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C0152030
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  int KeyedMutex; // ebx
  __int64 v8; // r8
  ULONG64 v9; // rcx
  bool v10; // zf
  _OWORD *v12; // rax
  union _LARGE_INTEGER *Global; // rax
  _DWORD *v14; // r8
  _DWORD *v15; // rdx
  _BYTE v16[32]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2051);
  if ( DXGPROCESS::GetCurrent() )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v12;
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                   Global,
                   *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                   v3 + 1,
                   (unsigned int *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL),
                   0LL,
                   0,
                   0);
    if ( KeyedMutex >= 0 )
    {
      v14 = (_DWORD *)(a1 + 12);
      v9 = MmUserProbeAddress;
      if ( a1 + 12 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *(_DWORD *)v3;
      v8 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
      *(_DWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v8;
      v15 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v8;
    }
    if ( KeyedMutex < 0 )
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
    KeyedMutex = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v8, 2051);
  return (unsigned int)KeyedMutex;
}
