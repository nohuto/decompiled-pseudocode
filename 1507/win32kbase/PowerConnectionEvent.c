/*
 * XREFs of PowerConnectionEvent @ 0x1C00791B4
 * Callers:
 *     SetConnectedState @ 0x1C0079160 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C0079180 (SetConnectCompletedState.c)
 * Callees:
 *     UpdateLastInput @ 0x1C0007440 (UpdateLastInput.c)
 */

NTSTATUS __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  int OutputBuffer; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  InputBuffer = a1;
  v1 = gbConnected != 0;
  if ( dword_1C0100024 != v1 )
  {
    dword_1C0100024 = gbConnected != 0;
    UpdateLastInput(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      0xDu);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    result = ZwPowerInformation(
               PowerInformationLevelMaximum|SystemReserveHiberFile,
               &InputBuffer,
               2u,
               &OutputBuffer,
               8u);
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      result = 1000 * v5;
      giPowerOffTimeOutMs = 1000 * v5;
    }
    else
    {
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
  return result;
}
