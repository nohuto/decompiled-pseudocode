/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C00C2978
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00B12F0 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C11A8 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMDeliverEndStatesForAllActiveContacts @ 0x1C00C4BC8 (RIMDeliverEndStatesForAllActiveContacts.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v1 = *(_QWORD *)(a1 + 400);
  RIMLockExclusive(v1 + 96);
  v3 = a1 + 64;
  RIMLockExclusive(v1 + 744);
  RIMDeliverEndStatesForAllActiveContacts(v1, a1 + 64);
  RIMUnlockExclusive(v1 + 744);
  v6 = 0;
  if ( !*(_QWORD *)(v1 + 808) || *(_QWORD *)(v1 + 32) == PsGetCurrentProcess(v5, v4) )
  {
    rimDoRimDevChangeCallback(v1, v3, 3);
    if ( *(_BYTE *)(v1 + 73) || *(_BYTE *)(v1 + 74) )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x33u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      v6 = RIMFreeDev(v1, v3);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 240) |= 0x50000u;
    ZwSetEvent(*(HANDLE *)(v1 + 512), 0LL);
  }
  RIMUnlockExclusive(v1 + 96);
  return v6;
}
