/*
 * XREFs of UpdateKeyLights @ 0x1C009D668
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0080AC8 (xxxChangeForegroundKeyboardTable.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0095550 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C009D588 (UpdatePerUserKeyboardIndicators.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C0202E70 (RemotePassthruDisable.c)
 * Callees:
 *     UpdateRimManagedKeyboardLeds @ 0x1C009CD4C (UpdateRimManagedKeyboardLeds.c)
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
  int v9; // edi
  __int64 i; // rbx
  __int16 v11; // dx
  void *v12; // rcx

  v1 = 0;
  word_1C03223C2 = 0;
  if ( (BYTE5(gafAsyncKeyState[0]) & 2) != 0 )
  {
    v1 = 4;
    v3 = byte_1C0322AA5 | 2;
    word_1C03223C2 = 4;
  }
  else
  {
    v3 = byte_1C0322AA5 & 0xFD;
  }
  byte_1C0322AA5 = v3;
  if ( (BYTE4(gafAsyncKeyState[2]) & 2) != 0 )
  {
    v1 |= 2u;
    word_1C03223C2 = v1;
    v4 = byte_1C0322AC4 | 2;
  }
  else
  {
    v4 = byte_1C0322AC4 & 0xFD;
  }
  byte_1C0322AC4 = v4;
  if ( (BYTE4(gafAsyncKeyState[2]) & 8) != 0 )
  {
    v1 |= 1u;
    word_1C03223C2 = v1;
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xF7;
  }
  byte_1C0322AC4 = v5;
  if ( (_BYTE)gKeyboardInfo == 7 )
    goto LABEL_8;
  if ( !gProtocolType )
    goto LABEL_12;
  if ( gRemoteClientKeyboardType[0] == 7 )
  {
LABEL_8:
    if ( (BYTE5(gafAsyncKeyState[0]) & 8) != 0 )
    {
      v1 |= 8u;
      word_1C03223C2 = v1;
      v6 = v3 | 8;
    }
    else
    {
      v6 = v3 & 0xF7;
    }
    byte_1C0322AA5 = v6;
  }
  if ( gProtocolType )
  {
    if ( a1 )
      v11 = v1 | 0x8000;
    else
      v11 = v1 & 0x7FFF;
    word_1C03223C2 = v11;
  }
LABEL_12:
  if ( gptiCurrent == gptiRit )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v9 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_();
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_BYTE *)(i + 48) == 1 )
      {
        v12 = *(void **)(i + 216);
        if ( v12 )
          ZwDeviceIoControlFile(v12, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0008u, &gklp, 4u, 0LL, 0);
      }
    }
    gdwUpdateKeyboard |= 2u;
    UpdateRimManagedKeyboardLeds();
    gdwUpdateKeyboard &= ~2u;
    if ( !v9 )
      LeaveDeviceInfoListCrit_();
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
