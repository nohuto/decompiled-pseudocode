/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C005BF20
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD *v9; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v10; // edi
  DXGGLOBAL *Global; // rax
  ULONG64 v12; // rcx
  int KeyedMutex; // edi
  __int64 v14; // r8
  _DWORD *v15; // r8
  _DWORD *v16; // rdx
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2066);
  if ( DXGPROCESS::GetCurrent() )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v9;
    *(_OWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v9[1];
    v10.0 = *(struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    if ( (v10.Value & 0xFFFFFFFE) != 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7, v8);
      KeyedMutex = -1073741811;
      *(_QWORD *)(v20 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
    }
    else
    {
      *(_DWORD *)v3 = 0;
      *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                     Global,
                     *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                     v3 + 1,
                     (unsigned int *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL),
                     *(void **)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                     *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                     v10);
      if ( KeyedMutex >= 0 )
      {
        v15 = (_DWORD *)(a1 + 12);
        v12 = MmUserProbeAddress;
        if ( a1 + 12 >= MmUserProbeAddress )
          v15 = (_DWORD *)MmUserProbeAddress;
        *v15 = *(_DWORD *)v3;
        v14 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
        *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v14;
        v16 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v14;
      }
      if ( KeyedMutex < 0 )
      {
        v12 = *(unsigned int *)v3;
        if ( (_DWORD)v12 )
          DXGKEYEDMUTEX::DestroyHandle(v12);
      }
    }
    v17 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    KeyedMutex = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v12 = qword_1C00467F0;
    v17 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v14, 2066);
  return (unsigned int)KeyedMutex;
}
