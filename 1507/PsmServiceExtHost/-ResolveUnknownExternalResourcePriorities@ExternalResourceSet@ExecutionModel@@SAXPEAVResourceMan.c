/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0
 * Callers:
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180010470 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x180012D74 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003F4D8 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        struct _RM_ACTIVITY_HOST *a4)
{
  __int64 v5; // rbx
  char *v6; // r10
  int v7; // r11d
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v5 = a2;
    v6 = (char *)a3 + 16;
    do
    {
      if ( v6[5] )
      {
        RmpActivityHostEnumerateResourceSetBegin(a4, 1LL, v8);
        while ( RmpActivityHostEnumerateResourceSetGetNext(v8) )
          ;
        *(_DWORD *)v6 = v7;
      }
      v6 += 24;
      --v5;
    }
    while ( v5 );
  }
}
