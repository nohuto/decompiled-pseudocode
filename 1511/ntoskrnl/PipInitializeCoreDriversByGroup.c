/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x1407510A0
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140750C54 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x140003214 (HeadlessKernelAddLogEntry.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1401246B4 (PnpLockDeviceActionQueue.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x140522A1C (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140522A58 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140522A7C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PnpInitializeBootStartDriver @ 0x140751FAC (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, UNICODE_STRING **a2)
{
  int v2; // r12d
  UNICODE_STRING **v4; // rbx
  UNICODE_STRING *v5; // rdi
  UNICODE_STRING *v6; // r14
  int DriverNameFromKeyNode; // esi
  __int64 v8; // r15
  void *v9; // rcx
  ULONG v10; // r8d
  char v11; // r9
  HANDLE KeyHandle; // [rsp+20h] [rbp-68h]
  _DWORD *P; // [rsp+30h] [rbp-58h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = a2 + 12;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v4 = a2 + 14;
    }
  }
  else
  {
    v4 = a2 + 10;
  }
  if ( v4 )
  {
    v5 = *v4;
    PnpCoreDriverGroupLoadPhase = a1;
    while ( v5 != (UNICODE_STRING *)v4 )
    {
      v6 = v5;
      v5 = *(UNICODE_STRING **)&v5->Length;
      if ( SLODWORD(v6[3].Buffer) >= 0 )
      {
        Destination.Buffer = 0LL;
        Handle = 0LL;
        DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v6 + 2, 0x20019u);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                      (unsigned int)&Destination,
                                      (int)v6 + 32,
                                      *(_QWORD *)(*(_QWORD *)&v6[3].Length + 56LL),
                                      *(_QWORD *)&v6[3].Length,
                                      (__int64)(a2 + 2),
                                      0,
                                      v2);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v8 = v16;
              if ( v16 )
              {
                PnpLockDeviceActionQueue();
                PipApplyFunctionToServiceInstances(
                  v9,
                  (UNICODE_STRING *)(*(_QWORD *)(v8 + 48) + 24LL),
                  v10,
                  v11,
                  KeyHandle,
                  v8,
                  P);
                PnpUnlockDeviceActionQueue();
                PnpWaitForEmptyDeviceActionQueue();
                PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL);
                if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
                  HeadlessKernelAddLogEntry();
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( Destination.Buffer )
          ExFreePoolWithTag(Destination.Buffer, 0);
        if ( DriverNameFromKeyNode < 0 )
          *(_DWORD *)(*(_QWORD *)&v6[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
