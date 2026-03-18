/*
 * XREFs of VidSchiControlVSync @ 0x1C0039180
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0002FE0 (VidSchiControlVSyncThread.c)
 *     VidSchControlVSyncAdapter @ 0x1C0038FB0 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1C0039080 (VidSchIsVSyncEnabled.c)
 *     VidSchSetMonitorPowerState @ 0x1C006DC50 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0011808 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  char v5; // di
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  int v13; // eax
  __int64 v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx

  v4 = a3;
  v5 = a2;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1904) == ((_BYTE)a2 != 0) )
      return 0;
    if ( (_BYTE)a2 )
    {
      LODWORD(a2) = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 1972), 1);
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v13 = *(_DWORD *)(a1 + 1924);
          if ( _bittest(&v13, a2) )
          {
            if ( *(_BYTE *)(a1 + 1928) )
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2592) + 14716LL), 1);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 2592) + 14720LL) = 0;
          }
          LODWORD(a2) = a2 + 1;
        }
        while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
      }
    }
    v8 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
    if ( v8 == -1073741822 )
      v8 = 0;
    if ( v8 < 0 )
      return (unsigned int)v8;
    v10 = bTracingEnabled == 0;
    *(_BYTE *)(a1 + 1904) = v5 != 0;
    if ( v10 )
    {
LABEL_8:
      if ( *(_BYTE *)(a1 + 1904) )
        *(_BYTE *)(a1 + 1928) = 0;
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
      v11 = *(unsigned int *)(a1 + 5064);
      *(_QWORD *)(a1 + 8 * v11 + 5072) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(a1 + 4 * v11 + 5104) = v4;
      *(_DWORD *)(a1 + 5064) = ((unsigned __int8)*(_DWORD *)(a1 + 5064) + 1) & 3;
      return (unsigned int)v8;
    }
    if ( v5 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) == 0 )
        goto LABEL_8;
      v15 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) == 0 )
        goto LABEL_8;
      v15 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
    }
    Template_p(v7, v15, v9, *(_QWORD *)(a1 + 16));
    goto LABEL_8;
  }
  v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
  WdLogEvent5_WdAssertion(v14);
  return 0LL;
}
