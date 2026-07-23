/*
 * XREFs of TtmpPushTerminalState @ 0x14067760C
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1406773A0 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1406773F8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677474 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406777D8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmiGetTerminalById @ 0x140677AD0 (TtmiGetTerminalById.c)
 */

char __fastcall TtmpPushTerminalState(int *a1, __int64 a2)
{
  char v2; // di
  int TerminalById; // eax
  __int64 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( (*(_QWORD *)(a2 + 56) || *(_QWORD *)(a2 + 64)) && *(_DWORD *)(a2 + 596) != -1 )
  {
    TerminalById = TtmiGetTerminalById(&v11, a1);
    if ( TerminalById >= 0 )
    {
      v6 = v11;
      v7 = *(_DWORD *)(v11 + 268);
      if ( (a1[1] & 8) != 0 || v7 - 2 > 1 )
      {
        if ( v7 <= 1 )
          TtmpCallSetBuiltinPanelState(a1, a2, 0);
        TtmpCallSetDisplayState((int)a1, a2, v7);
        if ( v7 == 2 )
        {
          TtmpCallSetBuiltinPanelState(a1, a2, 2u);
          v8 = 2LL;
        }
        else if ( v7 == 3 )
        {
          TtmpCallSetBuiltinPanelState(a1, a2, 1u);
          v8 = 1LL;
        }
        else
        {
          v8 = 0LL;
        }
        TtmpUpdatePrimaryDisplayWnf(a1, a2, v8);
        if ( (*(_DWORD *)(a2 + 600) & 0x80u) == 0 )
          v9 = 0;
        else
          v9 = *(_DWORD *)(v6 + 44);
        TtmpCallSetInputMode((int)a1, a2, v9);
      }
      else
      {
        return 1;
      }
    }
    else
    {
      TtmiLogError("TtmpPushTerminalState", 1706, TerminalById, -1);
    }
  }
  return v2;
}
