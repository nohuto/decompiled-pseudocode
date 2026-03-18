/*
 * XREFs of VidSchiControlVSync @ 0x1C00426E0
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0002990 (VidSchiControlVSyncThread.c)
 *     VidSchControlVSyncAdapter @ 0x1C0040A40 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1C00425E0 (VidSchIsVSyncEnabled.c)
 *     VidSchSetMonitorPowerState @ 0x1C0073F50 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C000FD78 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, int a3)
{
  char v4; // di
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx

  v4 = a2;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1936) == ((_BYTE)a2 != 0) )
      return 0;
    if ( (_BYTE)a2 )
    {
      LODWORD(a2) = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 2004), 1);
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v12 = *(_DWORD *)(a1 + 1956);
          if ( _bittest(&v12, a2) )
          {
            if ( *(_BYTE *)(a1 + 1960) )
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2968) + 18820LL), 1);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2968) + 18824LL) = 0;
          }
          LODWORD(a2) = a2 + 1;
        }
        while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
      }
    }
    v7 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
    if ( v7 == -1073741822 )
      v7 = 0;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v9 = bTracingEnabled == 0;
    *(_BYTE *)(a1 + 1936) = v4 != 0;
    if ( v9 )
    {
LABEL_8:
      if ( *(_BYTE *)(a1 + 1936) )
        *(_BYTE *)(a1 + 1960) = 0;
      if ( v4 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
      v10 = *(unsigned int *)(a1 + 5440);
      *(_QWORD *)(a1 + 8 * v10 + 5448) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(a1 + 4 * v10 + 5480) = a3;
      *(_DWORD *)(a1 + 5440) = ((unsigned __int8)*(_DWORD *)(a1 + 5440) + 1) & 3;
      return (unsigned int)v7;
    }
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
        goto LABEL_8;
      v14 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
        goto LABEL_8;
      v14 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
    }
    Template_p(v6, v14, v8, *(_QWORD *)(a1 + 16));
    goto LABEL_8;
  }
  v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v13);
  return 0LL;
}
