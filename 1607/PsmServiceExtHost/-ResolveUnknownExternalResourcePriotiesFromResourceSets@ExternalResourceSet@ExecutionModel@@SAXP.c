/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004DA8
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  __int64 v6; // rdi
  char *v7; // r11
  int v8; // ebx
  __int64 Next; // rax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v6 = a3;
    v7 = (char *)a4 + 16;
    do
    {
      if ( v7[5] )
      {
        v13[1] = a2;
        v13[0] = RmpActivityHostEnumerateResourceSetGetFirst(a5, a2, 0LL);
        v8 = 101;
        Next = RmpActivityHostEnumerateResourceSetGetNext(v13);
        if ( Next )
        {
          v10 = *((int *)v7 - 4);
          do
          {
            v11 = *(_DWORD *)(Next + 4 * v10 + 1576);
            if ( v8 >= v11 )
              v8 = v11;
            Next = RmpActivityHostEnumerateResourceSetGetNext(v13);
          }
          while ( Next );
        }
        v12 = *(_DWORD *)v7;
        if ( v8 < *(_DWORD *)v7 )
          v12 = v8;
        *(_DWORD *)v7 = v12;
      }
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
}
