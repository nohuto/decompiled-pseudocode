/*
 * XREFs of ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180014B60
 * Callers:
 *     ?ResourceSet_ReduceExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@KQEAU_ResourceInfo@2@@Z @ 0x180017588 (-ResourceSet_ReduceExternalResourcePriorities@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIRes.c)
 * Callees:
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180010470 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014C90 (-IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014CA0 (-IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ReduceExternalResourcePriorities(
        ExecutionModel::ResourceSet **this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  __int64 v4; // rsi
  bool (__fastcall *v6)(ExecutionModel::ResourceSetImpl *__hidden); // rbp
  bool IsValid; // al
  bool (__fastcall *v8)(ExecutionModel::ResourceSetImpl *__hidden); // rbp
  ExecutionModel::ResourceSet *v10; // r14
  unsigned int v11; // r8d
  struct ExecutionModel::_ResourceInfo *v12; // rdx
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *, unsigned int, struct ExecutionModel::_ResourceInfo *const); // rbp
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // al

  v4 = a2;
  v6 = (bool (__fastcall *)(ExecutionModel::ResourceSetImpl *__hidden))*((_QWORD *)*this + 10);
  if ( v6 == ExecutionModel::ResourceSetImpl::IsValid )
    IsValid = ExecutionModel::ResourceSetImpl::IsValid((ExecutionModel::ResourceSetImpl *)this);
  else
    IsValid = v6((ExecutionModel::ResourceSetImpl *)this);
  if ( !IsValid )
    return (unsigned int)-2147467259;
  v8 = (bool (__fastcall *)(ExecutionModel::ResourceSetImpl *__hidden))*((_QWORD *)*this + 9);
  if ( v8 == ExecutionModel::ResourceSetImpl::IsReleased
     ? ExecutionModel::ResourceSetImpl::IsReleased((ExecutionModel::ResourceSetImpl *)this)
     : v8((ExecutionModel::ResourceSetImpl *)this) )
  {
    return (unsigned int)-2147467259;
  }
  v10 = this[22];
  if ( !v10 )
    return (unsigned int)-2147467259;
  v11 = 0;
  if ( (_DWORD)v4 )
  {
    v12 = a3;
    while ( *((unsigned __int8 *)this + *(int *)v12 + 85) <= *((int *)v12 + 4) )
    {
      ++v11;
      v12 = (struct ExecutionModel::_ResourceInfo *)((char *)v12 + 24);
      if ( v11 >= (unsigned int)v4 )
        goto LABEL_12;
    }
    return (unsigned int)-2147467259;
  }
LABEL_12:
  v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, unsigned int, struct ExecutionModel::_ResourceInfo *const))(*(_QWORD *)v10 + 112LL);
  if ( v13 == ExecutionModel::ResourceSet::SetExternalResourcePriorities )
    v14 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(this[22], v4, a3);
  else
    v14 = v13(this[22], v4, a3);
  v15 = v14;
  if ( v14 >= 0 && (_DWORD)v4 )
  {
    v16 = v4;
    do
    {
      v17 = *(int *)a3;
      v18 = *((_BYTE *)a3 + 16);
      a3 = (struct ExecutionModel::_ResourceInfo *const)((char *)a3 + 24);
      *((_BYTE *)this + v17 + 85) = v18;
      --v16;
    }
    while ( v16 );
  }
  return v15;
}
