/*
 * XREFs of UsbDevice_GetEndpointState @ 0x1C002DE18
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C001EF50 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001F840 (Endpoint_OnResetEndpointResetCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002CDA0 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  v2 = (unsigned int)(a2 - 1) + 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 104LL) & 4) != 0 )
    v3 = v2 << 6;
  else
    v3 = 32 * v2;
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 16LL) + v3) & 7;
}
