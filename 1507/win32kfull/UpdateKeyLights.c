/*
 * XREFs of UpdateKeyLights @ 0x1C01383A4
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00472A4 (xxxChangeForegroundKeyboardTable.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0135904 (UpdatePerUserKeyboardIndicators.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01459D0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     RemotePassthruDisable @ 0x1C0202AD0 (RemotePassthruDisable.c)
 * Callees:
 *     UpdateRimManagedKeyboardLeds @ 0x1C01447EC (UpdateRimManagedKeyboardLeds.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall UpdateKeyLights(int a1)
{
  __int16 v1; // dx
  char v3; // r8
  char v4; // cl
  char v5; // cl
  char v6; // r8
  NTSTATUS result; // eax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v9; // rcx
  int v10; // edi
  __int64 i; // rbx
  __int64 v12; // rcx
  __int16 v13; // dx
  void *v14; // rcx

  v1 = 0;
  word_1C0323982 = 0;
  if ( (gafAsyncKeyState[5] & 2) != 0 )
  {
    v1 = 4;
    v3 = byte_1C03230D5 | 2;
    word_1C0323982 = 4;
  }
  else
  {
    v3 = byte_1C03230D5 & 0xFD;
  }
  byte_1C03230D5 = v3;
  if ( (gafAsyncKeyState[36] & 2) != 0 )
  {
    v1 |= 2u;
    word_1C0323982 = v1;
    v4 = byte_1C03230F4 | 2;
  }
  else
  {
    v4 = byte_1C03230F4 & 0xFD;
  }
  byte_1C03230F4 = v4;
  if ( (gafAsyncKeyState[36] & 8) != 0 )
  {
    v1 |= 1u;
    word_1C0323982 = v1;
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xF7;
  }
  byte_1C03230F4 = v5;
  if ( (_BYTE)gKeyboardInfo == 7 )
    goto LABEL_8;
  if ( !gProtocolType )
    goto LABEL_12;
  if ( gRemoteClientKeyboardType == 7 )
  {
LABEL_8:
    if ( (gafAsyncKeyState[5] & 8) != 0 )
    {
      v1 |= 8u;
      word_1C0323982 = v1;
      v6 = v3 | 8;
    }
    else
    {
      v6 = v3 & 0xF7;
    }
    byte_1C03230D5 = v6;
  }
  if ( gProtocolType )
  {
    if ( a1 )
      v13 = v1 | 0x8000;
    else
      v13 = v1 & 0x7FFF;
    word_1C0323982 = v13;
  }
LABEL_12:
  if ( gptiCurrent == gptiRit )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v10 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v9);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_BYTE *)(i + 48) == 1 )
      {
        v14 = *(void **)(i + 224);
        if ( v14 )
          ZwDeviceIoControlFile(v14, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0008u, &gklp, 4u, 0LL, 0);
      }
    }
    gdwUpdateKeyboard |= 2u;
    UpdateRimManagedKeyboardLeds();
    gdwUpdateKeyboard &= ~2u;
    if ( !v10 )
      LeaveDeviceInfoListCrit_(v12);
    result = gfRemotingConsole;
    if ( gfRemotingConsole )
      return ZwDeviceIoControlFile(
               ghConsoleShadowKeyboardChannel,
               0LL,
               0LL,
               0LL,
               &giosbKbdControl,
               0xB0008u,
               &gklp,
               4u,
               0LL,
               0);
  }
  else
  {
    result = gdwUpdateKeyboard;
    gdwUpdateKeyboard |= 2u;
  }
  return result;
}
