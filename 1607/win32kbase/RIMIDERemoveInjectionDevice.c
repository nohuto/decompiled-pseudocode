/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C00CF4C0
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00BB020 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00CD998 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // edx

  v1 = *(_QWORD *)(a1 + 416);
  RIMLockExclusive(v1 + 96);
  v3 = a1 + 64;
  RIMLockExclusive(v1 + 696);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 380) )
    RIMEndAllActiveContacts(v1, *(_QWORD *)(a1 + 544), 0LL);
  RIMUnlockExclusive(v1 + 696);
  if ( !*(_QWORD *)(v1 + 760) || *(_QWORD *)(v1 + 32) == PsGetCurrentProcess(v5) )
  {
    rimDoRimDevChange(v1, v3, 3);
    if ( *(_BYTE *)(v1 + 73) || *(_BYTE *)(v1 + 74) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        51,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v4 = RIMFreeDev(v1, v3);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 248) |= 0x10000u;
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 264) |= 2u;
    RIMUnlockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 248) |= 0x40000u;
    ZwSetEvent(*(HANDLE *)(v1 + 520), 0LL);
  }
  RIMUnlockExclusive(v1 + 96);
  return v4;
}
