/*
 * XREFs of ACPIMovePowerListUnblockedItems @ 0x1C0038CCC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BE00 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIInternalMovePowerList @ 0x1C001C3C4 (ACPIInternalMovePowerList.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C001C5C0 (ACPIIsPowerRequestBlocked.c)
 */

__int64 **__fastcall ACPIMovePowerListUnblockedItems(__int64 *a1)
{
  __int64 v1; // r9
  __int64 ****v3; // rcx
  __int64 ***v4; // rdx
  __int64 *****v5; // rax
  __int64 ***v6; // rax
  __int64 **result; // rax
  __int64 **v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 ***v9; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  v9 = &v8;
  v8 = (__int64 **)&v8;
  while ( (__int64 *)v1 != a1 )
  {
    if ( ACPIIsPowerRequestBlocked(v1) )
    {
      v4 = *v3;
      v5 = (__int64 *****)v3[1];
      if ( (*v3)[1] != (__int64 **)v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = (__int64 ****)v4;
      v4[1] = (__int64 **)v5;
      v6 = v9;
      *v3 = &v8;
      v3[1] = v6;
      if ( *v6 != (__int64 **)&v8 )
        __fastfail(3u);
      *v6 = (__int64 **)v3;
      v9 = (__int64 ***)v3;
    }
    else
    {
      *((_DWORD *)v3 + 14) &= 0xEEFFFFFF;
    }
  }
  ACPIInternalMovePowerList(a1, (__int64)&AcpiPowerPhase4List);
  result = v8;
  if ( v8 != (__int64 **)&v8 )
  {
    *a1 = (__int64)v8;
    result[1] = a1;
    result = (__int64 **)v9;
    a1[1] = (__int64)v9;
    *result = a1;
  }
  return result;
}
