/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x14079AB28
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x14079A9D8 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     PnpUnlockDeviceActionQueue @ 0x140110C5C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140110CE8 (PnpLockDeviceActionQueue.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140550BC8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140550BEC (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
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
