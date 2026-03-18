/*
 * XREFs of ACPIDockIrpSetPower @ 0x1C00343D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIrpSetDevicePower @ 0x1C0021D20 (ACPIDockIrpSetDevicePower.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C00343FC (ACPIDockIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIDockIrpSetPower(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a2[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIDockIrpSetDevicePower((ULONG_PTR)a1, (__int64)a2);
  else
    ACPIDockIrpSetSystemPower(a1, a2);
  return 259LL;
}
