/*
 * XREFs of RIMRemoveContactFromActiveList @ 0x1C00D3A74
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C53B4 (RIMUpdateDeviceFrameState.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 * Callees:
 *     IsPostPointerDeviceOutOfRangeMessageSupported_0 @ 0x1C0002D70 (IsPostPointerDeviceOutOfRangeMessageSupported_0.c)
 *     PostPointerDeviceOutOfRangeMessage_0 @ 0x1C0002D78 (PostPointerDeviceOutOfRangeMessage_0.c)
 *     RIMRemoveFromActiveDevices @ 0x1C000AE4C (RIMRemoveFromActiveDevices.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00ABFE0 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00AC010 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C554C (RIMUpdatePrimaryDevice.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C9E70 (RIMCALMAddAfterLifeContact.c)
 *     RIMReleaseCursor @ 0x1C00D3A18 (RIMReleaseCursor.c)
 *     RIMABRemoveBoostSource @ 0x1C00D4488 (RIMABRemoveBoostSource.c)
 *     RIMICRemoveDeadZone @ 0x1C00D4BA4 (RIMICRemoveDeadZone.c)
 */

void *__fastcall RIMRemoveContactFromActiveList(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4)
{
  __int64 v4; // rsi
  int v7; // ecx
  void *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rax

  v4 = a3;
  if ( *(_DWORD *)(a2 + 720) <= 1u )
  {
    if ( a4 )
      *a4 = *(_WORD *)(*(_QWORD *)(a2 + 328)
                     + 12LL * ((*(_BYTE *)(2400LL * a3 + *(_QWORD *)(a2 + 696) + 2392) & 8) != 0)
                     + 4);
  }
  else
  {
    RIMReleaseCursor(a1, a2, *(_DWORD *)(2400LL * a3 + *(_QWORD *)(a2 + 696) + 2332));
  }
  v7 = *(_DWORD *)(a2 + 24);
  --*(_DWORD *)(a2 + 704);
  if ( (unsigned int)(v7 - 1) > 4 )
  {
    if ( (unsigned int)(v7 - 6) <= 1 )
      RIMICRemoveDeadZone(a1);
  }
  else
  {
    RIMABRemoveBoostSource(a1, a2, (unsigned int)v4, 1LL);
    RIMCALMAddAfterLifeContact(a1, *(_QWORD *)(a2 + 696) + 2400 * v4);
  }
  result = memset((void *)(*(_QWORD *)(a2 + 696) + 2400 * v4), 0, 0x960uLL);
  if ( !*(_DWORD *)(a2 + 704) )
  {
    if ( *(_QWORD *)(a1 + 600) == a2 )
      RIMUpdatePrimaryDevice(a1, 0LL, 0, 0);
    if ( *(_DWORD *)(a2 + 24) != 8 )
    {
      EtwTracePointerDeviceOutOfRangeMessageStart(v9);
      if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported_0() >= 0 )
        PostPointerDeviceOutOfRangeMessage_0();
      EtwTracePointerDeviceOutOfRangeMessageStop(v10);
    }
    memset((void *)(a2 + 1432), 0, 0x38uLL);
    v11 = *(_DWORD **)(a2 + 712);
    if ( v11 )
      *v11 = 0;
    return (void *)RIMRemoveFromActiveDevices(a1, a2, 0, 0LL);
  }
  return result;
}
