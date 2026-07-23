/*
 * XREFs of PopSqmBatteryUpdate @ 0x140676878
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopSqmCreateDwordStreamEntry @ 0x140171E14 (PopSqmCreateDwordStreamEntry.c)
 *     PopSqmAddToStream @ 0x14020E7F4 (PopSqmAddToStream.c)
 */

NTSTATUS __fastcall PopSqmBatteryUpdate(int a1)
{
  NTSTATUS result; // eax
  int v2; // r10d
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD v8[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF

  result = 0;
  if ( PopPlatformAoAc )
  {
    PopSqmCreateDwordStreamEntry(v8, a1);
    PopSqmCreateDwordStreamEntry(v9, v2);
    PopSqmCreateDwordStreamEntry(v10, v3);
    PopSqmCreateDwordStreamEntry(v11, v4);
    return PopSqmAddToStream(v6, v5, v7, (__int64)v8);
  }
  return result;
}
