/*
 * XREFs of KeConfigureDynamicMemory @ 0x1401C3254
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeConfigureDynamicMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  NTSTATUS result; // eax
  unsigned __int8 v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]

  result = 0;
  if ( HvlpVsmVtlCallVa )
  {
    v5 = a1;
    v6 = a2;
    v7 = a3;
    return HvlpEnterIumSecureMode(1u, 31, 0, v4);
  }
  return result;
}
