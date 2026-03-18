/*
 * XREFs of UpdateKeyLights @ 0x1C00EC4CC
 * Callers:
 *     UpdatePerUserKeyboardIndicators @ 0x1C0093338 (UpdatePerUserKeyboardIndicators.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A9E68 (xxxChangeForegroundKeyboardTable.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00E317C (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C01FA180 (RemotePassthruDisable.c)
 * Callees:
 *     UpdateRimManagedKeyboardLeds @ 0x1C00EC68C (UpdateRimManagedKeyboardLeds.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // dx
  void *v15; // rcx

  v1 = 0;
  word_1C0327032 = 0;
  if ( (gafAsyncKeyState[5] & 2) != 0 )
  {
    v1 = 4;
    v3 = byte_1C0327725 | 2;
    word_1C0327032 = 4;
  }
  else
  {
    v3 = byte_1C0327725 & 0xFD;
  }
  byte_1C0327725 = v3;
  if ( (gafAsyncKeyState[36] & 2) != 0 )
  {
    v1 |= 2u;
    word_1C0327032 = v1;
    v4 = byte_1C0327744 | 2;
  }
  else
  {
    v4 = byte_1C0327744 & 0xFD;
  }
  byte_1C0327744 = v4;
  if ( (gafAsyncKeyState[36] & 8) != 0 )
  {
    v1 |= 1u;
    word_1C0327032 = v1;
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xF7;
  }
  byte_1C0327744 = v5;
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
      word_1C0327032 = v1;
      v6 = v3 | 8;
    }
    else
    {
      v6 = v3 & 0xF7;
    }
    byte_1C0327725 = v6;
  }
  if ( gProtocolType )
  {
    if ( a1 )
      v14 = v1 | 0x8000;
    else
      v14 = v1 & 0x7FFF;
    word_1C0327032 = v14;
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
        v15 = *(void **)(i + 224);
        if ( v15 )
          ZwDeviceIoControlFile(v15, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0008u, &gklp, 4u, 0LL, 0);
      }
    }
    gdwUpdateKeyboard |= 2u;
    UpdateRimManagedKeyboardLeds();
    gdwUpdateKeyboard &= ~2u;
    if ( !v10 )
      LeaveDeviceInfoListCrit_(v13, v12);
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
