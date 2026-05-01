/*
 * XREFs of ?RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURmResourceSetInfo@@PEAK@Z @ 0x18003EDC4
 * Callers:
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18003E930 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 *     ?RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURmResourceSetInfo@@PEAK@Z @ 0x18003EDC4 (-RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURm.c)
 * Callees:
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSetInfo@@@Z @ 0x18003E268 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSe.c)
 *     ?RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURmResourceSetInfo@@PEAK@Z @ 0x18003EDC4 (-RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURm.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RecursiveGetResourceSetInfos(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::BaseResourceSet *a2,
        unsigned int a3,
        struct RmResourceSetInfo *a4,
        unsigned int *a5)
{
  int ResourceSetInfos; // r10d
  int v7; // r9d
  ExecutionModel::ResourceManager *v10; // r11
  unsigned int *v11; // r8
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  char *v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-28h]
  char *v18; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+78h] [rbp+20h]

  ResourceSetInfos = 0;
  v7 = 0;
  v20 = 0;
  v10 = this;
  if ( !a4 )
  {
LABEL_5:
    v11 = a5;
    v12 = (char *)a2 + 160;
    v13 = 0LL;
    v18 = (char *)a2 + 160;
    v17 = 0LL;
    v14 = *a5;
    *a5 = v14 + 1;
    v15 = (char *)*((_QWORD *)a2 + 20);
    while ( v15 != v12 )
    {
      if ( a4 && (unsigned int)v14 < a3 )
      {
        if ( v13 == 50 )
          return (unsigned int)-2147024774;
        v20 = v7 + 1;
        v17 = v13 + 1;
        *((_DWORD *)a4 + 532 * v14 + v13 + 121) = *((_DWORD *)v15 + 4);
      }
      ResourceSetInfos = ExecutionModel::ResourceManager::RecursiveGetResourceSetInfos(
                           v10,
                           *((struct ExecutionModel::BaseResourceSet **)v15 + 2),
                           a3,
                           a4,
                           v11);
      if ( ResourceSetInfos < 0 )
        return (unsigned int)ResourceSetInfos;
      v15 = *(char **)v15;
      v13 = v17;
      v11 = a5;
      v7 = v20;
      v12 = v18;
      v10 = this;
    }
    if ( a4 && (unsigned int)v14 < a3 )
      *((_DWORD *)a4 + 532 * v14 + 120) = v7;
    return (unsigned int)ResourceSetInfos;
  }
  if ( *a5 == a3 )
    return (unsigned int)-2147024774;
  ResourceSetInfos = ExecutionModel::ResourceManager::CopyResourceSetInfo(
                       this,
                       (char **)a2,
                       (struct RmResourceSetInfo *)((char *)a4 + 2128 * *a5));
  if ( ResourceSetInfos >= 0 )
  {
    v7 = 0;
    v10 = this;
    goto LABEL_5;
  }
  return (unsigned int)ResourceSetInfos;
}
