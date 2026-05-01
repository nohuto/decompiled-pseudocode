/*
 * XREFs of ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180008260
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000F2A0 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 * Callees:
 *     ?GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x180007394 (-GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ?ReadExternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAU_ResourceSetInfo@2@@Z @ 0x180008140 (-ReadExternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@.c)
 *     ?ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@@KPEBGN@Z @ 0x180008400 (-ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@.c)
 *     ?ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z @ 0x180008658 (-ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x1800086D0 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        const unsigned __int16 *a2)
{
  HKEY ResourceManagerRootHive; // rbx
  HKEY *v5; // rax
  LSTATUS v6; // eax
  HKEY *v7; // rax
  LSTATUS v8; // eax
  ExecutionModel::ResourceSetTypeToInfoConverter *v9; // rcx
  double v10; // xmm6_8
  const WCHAR **v11; // rdi
  unsigned int v12; // ebx
  const WCHAR *v13; // rdx
  ExecutionModel::ResourceSetTypeToInfoConverter *v14; // rcx
  int InternalResourceSetTypeInfo; // esi
  HKEY v17; // [rsp+30h] [rbp-48h] BYREF
  double v18; // [rsp+38h] [rbp-40h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+18h] BYREF
  HKEY v20; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  v20 = 0LL;
  hKey = 0LL;
  ResourceManagerRootHive = (HKEY)ExecutionModel::GetResourceManagerRootHive(this);
  v5 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v20);
  v6 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager\\Policy\\ResourceSetTypePolicyTable", v5);
  if ( v6 )
    __fastfail(v6);
  v7 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v17);
  v8 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager", v7);
  if ( v8 )
    __fastfail(v8);
  ExecutionModel::ResourceSetTypeToInfoConverter::ReadMediumThreshold(v9, v17, &v18);
  v10 = v18;
  v11 = (const WCHAR **)&ExecutionModel::ResourceSetTypeName;
  v12 = 0;
  while ( 1 )
  {
    if ( hKey )
      RegCloseKey(hKey);
    v13 = *v11;
    hKey = 0LL;
    if ( RegOpenKeyW(v20, v13, &hKey) )
      break;
    InternalResourceSetTypeInfo = ExecutionModel::ResourceSetTypeToInfoConverter::ReadInternalResourceSetTypeInfo(
                                    this,
                                    hKey,
                                    v12,
                                    a2,
                                    v10);
    if ( InternalResourceSetTypeInfo < 0 )
      goto LABEL_10;
    ExecutionModel::ResourceSetTypeToInfoConverter::ReadExternalResourceSetTypeInfo(
      v14,
      hKey,
      (ExecutionModel::ResourceSetTypeToInfoConverter *)((char *)this + 360 * v12++));
    ++v11;
    if ( v12 >= 0x39 )
    {
      InternalResourceSetTypeInfo = 0;
      goto LABEL_10;
    }
  }
  InternalResourceSetTypeInfo = -2147467259;
LABEL_10:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v20 )
    RegCloseKey(v20);
  if ( v17 )
    RegCloseKey(v17);
  return (unsigned int)InternalResourceSetTypeInfo;
}
