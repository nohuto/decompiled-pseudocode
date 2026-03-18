/*
 * XREFs of ACPIMovePowerListUnblockedItems @ 0x1C00398CC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001C040 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIInternalMovePowerList @ 0x1C001C604 (ACPIInternalMovePowerList.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C001C808 (ACPIIsPowerRequestBlocked.c)
 */

_QWORD *__fastcall ACPIMovePowerListUnblockedItems(_QWORD *a1)
{
  _QWORD *v1; // r9
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD **v6; // rax
  _QWORD *result; // rax
  _QWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v9; // [rsp+28h] [rbp-10h]

  v1 = (_QWORD *)*a1;
  v9 = &v8;
  v8 = &v8;
  while ( v1 != a1 )
  {
    if ( ACPIIsPowerRequestBlocked((__int64)v1) )
    {
      v4 = *v3;
      v5 = (_QWORD *)v3[1];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v6 = v9;
      *v3 = &v8;
      v3[1] = v6;
      if ( *v6 != &v8 )
        __fastfail(3u);
      *v6 = v3;
      v9 = (_QWORD **)v3;
    }
    else
    {
      *((_DWORD *)v3 + 14) &= 0xEEFFFFFF;
    }
  }
  ACPIInternalMovePowerList((_QWORD **)a1, (__int64)&AcpiPowerPhase4List);
  result = v8;
  if ( v8 != &v8 )
  {
    *a1 = v8;
    result[1] = a1;
    result = v9;
    a1[1] = v9;
    *result = a1;
  }
  return result;
}
