/*
 * XREFs of AcpiExternalTranslateBiosToNtResources @ 0x1C007A768
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1C007E174 (PnpiBiosSerialBusToIoDescriptor.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     AcpiCheckExternalConnection @ 0x1C00686C0 (AcpiCheckExternalConnection.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007AB58 (ExternalRequestBiosNameDeviceAssociation.c)
 */

__int64 __fastcall AcpiExternalTranslateBiosToNtResources(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5)
{
  char *v9; // rdi
  __int64 v10; // rsi
  int v11; // ebx
  __int64 (__fastcall *v12)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, char *, SIZE_T *); // rbp
  int v13; // esi
  unsigned int v14; // eax
  char *PoolWithTag; // rax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rdx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-38h] BYREF
  __int64 DeviceExtension; // [rsp+48h] [rbp-30h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  LODWORD(NumberOfBytes) = 120;
  v10 = DeviceExtension;
  AcpiCheckExternalConnection();
  v11 = -1073741822;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface )
  {
    v12 = (__int64 (__fastcall *)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, char *, SIZE_T *))*((_QWORD *)ExternalTranslationInterface + 7);
    v13 = 0;
    v14 = NumberOfBytes;
    while ( 1 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x58706341u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v11 = v12(*((_QWORD *)ExternalTranslationInterface + 5), a1, a2, a3, a4, PoolWithTag, &NumberOfBytes);
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v9, 0x58706341u);
        v9 = 0LL;
      }
      if ( v11 == -1073741789 )
      {
        v14 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          if ( (unsigned int)++v13 < 2 )
            continue;
        }
      }
      goto LABEL_11;
    }
    v11 = -1073741670;
LABEL_11:
    v10 = DeviceExtension;
  }
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v11 >= 0 )
  {
    v16 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 0x38 )
    {
LABEL_14:
      v11 = -1073741637;
      goto LABEL_19;
    }
    *a5 = *(_OWORD *)(v9 + 8);
    a5[1] = *(_OWORD *)(v9 + 24);
    v17 = *((_DWORD *)v9 + 11);
    if ( v17 )
    {
      v18 = *((unsigned int *)v9 + 10);
      if ( v17 > v16 - (int)v18 )
        goto LABEL_14;
      v11 = ExternalRequestBiosNameDeviceAssociation(&v9[v18], v10, a4);
      if ( v11 < 0 )
        v11 = 0;
    }
  }
LABEL_19:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706341u);
  return (unsigned int)v11;
}
