/*
 * XREFs of TranslateBindMutexResources @ 0x1C0038358
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0023710 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C003CCBC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  PVOID v5; // rsi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  Object = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
  {
    return 0;
  }
  else
  {
    ACPIInternalGetDeviceFromNSOBJ(a2, &Object, a3, 0LL);
    v5 = Object;
    if ( Object )
      v4 = PnpBiosResourcesToNtResources(Object);
    else
      v4 = -1073741661;
    if ( v4 < 0 || MEMORY[0x24] == 1 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
        v4 = 0;
      v5 = Object;
    }
    else
    {
      v4 = -1073741637;
    }
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
