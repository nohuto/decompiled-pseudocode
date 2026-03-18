/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D1E30
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D1D8C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonTimerCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTABLET_BUTTON_ACTION *v4; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = gpTabBtnAction;
  if ( gpTabBtnAction )
  {
    v6 = (*(unsigned __int8 *)(a4 + 48) >> 4) & 1;
    v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v9;
    ++*(_DWORD *)(a4 + 8);
    v9[1] = a4;
    xxxTabletButtonExecuteAction(v4, v6, 0LL);
    if ( v6 )
    {
      gpTabBtnAction = 0LL;
    }
    else
    {
      v7 = 500LL;
      if ( *(_DWORD *)(a4 + 52) != 500 )
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, 0x1F4u, (__int64)xxxTabletButtonTimerCallback, 0);
    }
    ThreadUnlock1(v8, v7);
  }
}
