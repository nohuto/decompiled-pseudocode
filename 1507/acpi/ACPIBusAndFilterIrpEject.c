/*
 * XREFs of ACPIBusAndFilterIrpEject @ 0x1C0079490
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C00044C8 (ACPIInternalClearFlags.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpEject(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  _BYTE v12[24]; // [rsp+50h] [rbp-18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 704) )
  {
    if ( *(_DWORD *)(DeviceExtension + 312) <= 1u )
    {
      ACPIInternalClearFlags((void *)DeviceExtension, 2048LL);
      ACPIGet(v8, 810173791, 277872640, v9, 4, 0LL, 0LL, 0LL, 0LL);
      v10 = ACPIGet(v6, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)v12, 0LL);
      v7 = v10;
      if ( v10 >= 0 && !a4 )
      {
        if ( (*(_BYTE *)v6 & 2) == 0 )
          return (unsigned int)-1073741823;
        return (unsigned int)v10;
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v7;
}
