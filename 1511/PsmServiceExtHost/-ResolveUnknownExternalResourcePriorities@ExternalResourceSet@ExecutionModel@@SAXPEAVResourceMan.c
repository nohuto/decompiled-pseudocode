/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020270
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800030DC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x18000E600 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180044678 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        struct _RM_ACTIVITY_HOST *a4)
{
  __int64 v5; // rdi
  char *v6; // rbx
  int v7; // r10d
  __int64 v8[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = a2;
    v6 = (char *)a3 + 16;
    do
    {
      if ( v6[5] )
      {
        RmpActivityHostEnumerateResourceSetBegin((__int64)a4, 1, v8);
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
