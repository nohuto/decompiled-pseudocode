/*
 * XREFs of Crashdump_Register_UpdateDeviceSlotInfo @ 0x1C00365E4
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C0034FD0 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Crashdump_Register_UpdateDeviceSlotInfo(
        __int64 *a1,
        signed __int32 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  int v5; // r9d
  unsigned __int8 v6; // bl
  _DWORD *v8; // rdi
  unsigned __int64 result; // rax
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  v5 = *((_DWORD *)a1 + 4);
  v6 = a2;
  v10[8] = a2;
  v8 = *(_DWORD **)(v3 + 32);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: MaximumDeviceSlots: %u, NumberOfDeviceSlotsEnabled: %u\n", v5, a2);
  v8[14] = v6;
  _InterlockedOr(v10, 0);
  result = *a3;
  if ( (a1[1] & 1) != 0 )
  {
    v8[12] = result;
    _InterlockedOr(v10, 0);
    result >>= 32;
    v8[13] = result;
  }
  else
  {
    *((_QWORD *)v8 + 6) = result;
  }
  _InterlockedOr(v10, 0);
  if ( *((_DWORD *)a1 + 5) )
  {
    result = a1[3];
    *(_QWORD *)a3[1] = result;
  }
  return result;
}
