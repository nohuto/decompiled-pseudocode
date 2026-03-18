/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C007C18C
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C007C09C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     AMLICheckIfIoRangeValid @ 0x1C00425E8 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C004291C (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1)
{
  int v1; // ebx
  unsigned int i; // esi
  __int64 v4; // r10
  ULONGLONG v5; // rax
  unsigned int v6; // ebx
  ULONGLONG v8; // rax
  unsigned int v9; // r14d
  PHYSICAL_ADDRESS BusAddress; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-10h] BYREF
  ULONG AddressSpace; // [rsp+80h] [rbp+38h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+88h] [rbp+40h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+98h] [rbp+50h] BYREF

  v1 = -1073741823;
  if ( *a1 && a1[9] )
  {
    v1 = 0;
    for ( i = 0; i < a1[9]; ++i )
    {
      v4 = 8LL * i;
      if ( BYTE1(a1[v4 + 10]) == 1 )
      {
        v8 = RtlIoDecodeMemIoResource(
               (PIO_RESOURCE_DESCRIPTOR)&a1[v4 + 10],
               0LL,
               (PULONGLONG)&BusAddress.QuadPart,
               &v11);
        v9 = v8;
        if ( v8 + BusAddress.QuadPart - 1 != v11 )
          return (unsigned int)-1073741823;
        AddressSpace = 1;
        if ( !HalTranslateBusAddress(Internal, 0, BusAddress, &AddressSpace, &TranslatedAddress) )
          return (unsigned int)-1073741823;
        if ( !AMLICheckIfIoRangeValid(TranslatedAddress.QuadPart, v9) )
          v1 = -1073741823;
        if ( v1 < 0 )
          return (unsigned int)v1;
      }
      else
      {
        if ( BYTE1(a1[v4 + 10]) == 2 )
          return (unsigned int)-1073741823;
        if ( BYTE1(a1[v4 + 10]) != 3 )
        {
          if ( BYTE1(a1[v4 + 10]) == 5 )
            goto LABEL_10;
          if ( BYTE1(a1[v4 + 10]) != 7 )
          {
            if ( BYTE1(a1[v4 + 10]) != 132 )
              return (unsigned int)-1073741637;
LABEL_10:
            v1 = 0;
            continue;
          }
        }
        v5 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)&a1[v4 + 10], 0LL, &MinimumAddress, &MaximumAddress);
        v6 = v5;
        if ( v5 + MinimumAddress - 1 != MaximumAddress )
          return (unsigned int)-1073741823;
        if ( v5 > 0xFFFFFFFF )
          return (unsigned int)-1073741823;
        AddressSpace = 0;
        if ( !HalTranslateBusAddress(Internal, 0, (PHYSICAL_ADDRESS)MinimumAddress, &AddressSpace, &TranslatedAddress) )
          return (unsigned int)-1073741823;
        v1 = AMLIValidateFirmwareMemoryAddress((__int64 *)&TranslatedAddress, v6);
        if ( v1 < 0 )
          return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v1;
}
