/*
 * XREFs of PnprQuiesceDevices @ 0x1403DC3D4
 * Callers:
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1403DBA40 (PnprGetMillisecondCounter.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     PoInitializeBroadcast @ 0x14053253C (PoInitializeBroadcast.c)
 *     PoStartPowerStateTasks @ 0x1405349B4 (PoStartPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x14066EA84 (PoStartPartitionReplace.c)
 */

__int64 __fastcall PnprQuiesceDevices(char *a1)
{
  int started; // edi
  SIZE_T v3; // rdx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  SIZE_T v13; // rcx
  int v14; // eax
  int v15; // eax

  *(_DWORD *)(PnprContext + 10784) = PnprGetMillisecondCounter(0);
  memset(a1, 0, 0x3CuLL);
  *((_DWORD *)a1 + 10) = 2;
  *(_DWORD *)a1 = -2013265920;
  *((_DWORD *)a1 + 12) = -2013265920;
  *((_DWORD *)a1 + 11) = 5;
  *((_DWORD *)a1 + 8) = PoBlockConsoleSwitch(a1 + 36);
  started = PoStartPowerStateTasks(a1 + 36);
  if ( started >= 0 )
  {
    PoStartPartitionReplace(a1 + 36, *((unsigned int *)a1 + 8));
    *((_DWORD *)a1 + 2) = 5;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 1) = 1;
    *((_DWORD *)a1 + 6) = *(_DWORD *)a1;
    *((_DWORD *)a1 + 3) = 5;
    *((_DWORD *)a1 + 5) = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      a1[30] = 3;
      PoBroadcastSystemState((__int64)(a1 + 4), v6, v7, v8);
      a1[30] = 2;
      started = PoBroadcastSystemState((__int64)(a1 + 4), v10, v11, v12);
      if ( started >= 0 )
        goto LABEL_16;
      v9 = 2016;
    }
    else
    {
      v9 = 1998;
    }
    v13 = PnprContext;
    v14 = *(_DWORD *)(PnprContext + 10744);
    if ( !v14 )
      v14 = v9;
    *(_DWORD *)(PnprContext + 10744) = v14;
    v15 = *(_DWORD *)(v13 + 10748);
    if ( !v15 )
      v15 = 7;
    *(_DWORD *)(v13 + 10748) = v15;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 10744);
    if ( !v4 )
      v4 = 1975;
    v5 = *(_DWORD *)(PnprContext + 10748);
    *(_DWORD *)(PnprContext + 10744) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 10748) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 10788) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
