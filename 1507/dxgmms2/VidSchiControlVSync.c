/*
 * XREFs of VidSchiControlVSync @ 0x1C007A1EC
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0016120 (VidSchiControlVSyncThread.c)
 *     VidSchiResumeVSync @ 0x1C0076DEC (VidSchiResumeVSync.c)
 *     VidSchControlVSyncAdapter @ 0x1C0077C10 (VidSchControlVSyncAdapter.c)
 *     VidSchSetMonitorPowerState @ 0x1C0079360 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C000E05C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  char v5; // di
  __int64 v7; // rax
  int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx

  v4 = a3;
  v5 = a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 1952) != ((_BYTE)a2 != 0) )
  {
    if ( (_BYTE)a2 )
    {
      LODWORD(a2) = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 2020), 1);
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v10 = *(_DWORD *)(a1 + 1972);
          if ( _bittest(&v10, a2) )
          {
            if ( *(_BYTE *)(a1 + 1976) )
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2640) + 14684LL), 1);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2640) + 14688LL) = 0;
          }
          LODWORD(a2) = a2 + 1;
        }
        while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
      }
    }
    v9 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
    if ( v9 == -1073741822 )
      v9 = 0;
    if ( v9 < 0 )
      return (unsigned int)v9;
    v13 = bTracingEnabled == 0;
    *(_BYTE *)(a1 + 1952) = v5 != 0;
    if ( v13 )
      goto LABEL_22;
    if ( v5 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
LABEL_21:
        Template_p(v11, v14, v12, *(_QWORD *)(a1 + 16));
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    {
      v14 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
      goto LABEL_21;
    }
LABEL_22:
    if ( *(_BYTE *)(a1 + 1952) )
      *(_BYTE *)(a1 + 1976) = 0;
    if ( v5 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
    else
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
    v15 = *(unsigned int *)(a1 + 5112);
    *(_QWORD *)(a1 + 8 * v15 + 5120) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 4 * v15 + 5152) = v4;
    *(_DWORD *)(a1 + 5112) = ((unsigned __int8)*(_DWORD *)(a1 + 5112) + 1) & 3;
    return (unsigned int)v9;
  }
  return 0;
}
