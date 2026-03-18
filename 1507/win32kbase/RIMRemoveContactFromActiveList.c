/*
 * XREFs of RIMRemoveContactFromActiveList @ 0x1C00D1C4C
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 * Callees:
 *     IsPostPointerDeviceOutOfRangeMessageSupported_0 @ 0x1C0002D40 (IsPostPointerDeviceOutOfRangeMessageSupported_0.c)
 *     PostPointerDeviceOutOfRangeMessage_0 @ 0x1C0002D48 (PostPointerDeviceOutOfRangeMessage_0.c)
 *     RIMIsPenPointerDevice @ 0x1C001A8E4 (RIMIsPenPointerDevice.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0078524 (RIMRemoveFromActiveDevices.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00A7A70 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00A7AA0 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C46B4 (RIMUpdatePrimaryDevice.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C8F70 (RIMCALMAddAfterLifeContact.c)
 *     RIMReleaseCursor @ 0x1C00D1BF0 (RIMReleaseCursor.c)
 *     RIMABRemoveBoostSource @ 0x1C00D2664 (RIMABRemoveBoostSource.c)
 *     RIMICRemoveDeadZone @ 0x1C00D2D84 (RIMICRemoveDeadZone.c)
 */

void *__fastcall RIMRemoveContactFromActiveList(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4)
{
  __int64 v4; // rsi
  int v7; // eax
  void *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rax

  v4 = a3;
  if ( *(_DWORD *)(a2 + 704) <= 1u )
  {
    if ( a4 )
      *a4 = *(_WORD *)(*(_QWORD *)(a2 + 312)
                     + 12LL * ((*(_BYTE *)(2400LL * a3 + *(_QWORD *)(a2 + 680) + 2392) & 8) != 0)
                     + 4);
  }
  else
  {
    RIMReleaseCursor(a1, a2, *(_DWORD *)(2400LL * a3 + *(_QWORD *)(a2 + 680) + 2332));
  }
  v7 = *(_DWORD *)(a2 + 24);
  --*(_DWORD *)(a2 + 688);
  if ( (unsigned int)(v7 - 1) > 4 )
  {
    if ( RIMIsPenPointerDevice(a2) )
      RIMICRemoveDeadZone(a1);
  }
  else
  {
    RIMABRemoveBoostSource(a1, a2, (unsigned int)v4, 1LL);
    RIMCALMAddAfterLifeContact(a1, *(_QWORD *)(a2 + 680) + 2400 * v4);
  }
  result = memset((void *)(*(_QWORD *)(a2 + 680) + 2400 * v4), 0, 0x960uLL);
  if ( !*(_DWORD *)(a2 + 688) )
  {
    if ( *(_QWORD *)(a1 + 568) == a2 )
      RIMUpdatePrimaryDevice(a1, 0LL, 0, 0);
    if ( *(_DWORD *)(a2 + 24) != 8 )
    {
      EtwTracePointerDeviceOutOfRangeMessageStart(v9);
      if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported_0() >= 0 )
        PostPointerDeviceOutOfRangeMessage_0();
      EtwTracePointerDeviceOutOfRangeMessageStop(v10);
    }
    memset((void *)(a2 + 1416), 0, 0x38uLL);
    v11 = *(_DWORD **)(a2 + 696);
    if ( v11 )
      *v11 = 0;
    return (void *)RIMRemoveFromActiveDevices(a1, a2, 0, 0LL);
  }
  return result;
}
