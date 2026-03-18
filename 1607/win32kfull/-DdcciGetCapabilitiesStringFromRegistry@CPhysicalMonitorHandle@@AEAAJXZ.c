/*
 * XREFs of ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258BCC
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258D5C (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1C025870C (-ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry(PDEVICE_OBJECT *this)
{
  char *v1; // rbp
  char *PoolWithTag; // rsi
  int v4; // ebx
  NTSTATUS v5; // eax
  ULONG Length; // ebx
  unsigned int v7; // edi
  char *v8; // rax
  CPhysicalMonitorHandle *v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  ULONG v13; // [rsp+78h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+18h] BYREF

  v1 = 0LL;
  PoolWithTag = 0LL;
  v4 = IoOpenDeviceRegistryKey(this[2], 2u, 1u, &KeyHandle);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"CapabilitiesString");
    v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v4 = v5;
    if ( v5 == -1073741789 )
    {
      Length = ResultLength + 16;
      if ( ResultLength + 16 < ResultLength )
      {
        v4 = -1073741675;
        goto LABEL_20;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Length, 0x63326947u);
      if ( !PoolWithTag )
        goto LABEL_5;
      v4 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &v13);
      if ( v4 < 0 )
        goto LABEL_20;
      if ( *((_DWORD *)PoolWithTag + 1) == 1 )
      {
        v7 = *((_DWORD *)PoolWithTag + 2) >> 1;
        v8 = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x63326947u);
        v1 = v8;
        if ( v8 )
        {
          v4 = CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
                 v9,
                 v8,
                 v7,
                 PoolWithTag + 12,
                 v7);
          if ( v4 >= 0 )
          {
            this[9] = (PDEVICE_OBJECT)v1;
            v1 = 0LL;
            *((_DWORD *)this + 20) = v7;
          }
          goto LABEL_20;
        }
LABEL_5:
        v4 = -1073741801;
LABEL_20:
        ZwClose(KeyHandle);
        goto LABEL_21;
      }
    }
    else if ( v5 < 0 )
    {
      if ( v5 != -1073741822 && v5 != -1073741816 && v5 != -1073741811 && v5 != -1073741801 && v5 != -1073741790 )
        v4 = 1612644351;
      goto LABEL_20;
    }
    v4 = -1073741823;
    goto LABEL_20;
  }
LABEL_21:
  DDCCIFreeMemory(PoolWithTag);
  DDCCIFreeMemory(v1);
  return (unsigned int)v4;
}
