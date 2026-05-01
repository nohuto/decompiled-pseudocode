/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180013980
 * Callers:
 *     Srv_ResSet_UpdateImportanceAndResourceLimits @ 0x18001FA20 (Srv_ResSet_UpdateImportanceAndResourceLimits.c)
 * Callees:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

int __fastcall ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSetImpl *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  __int64 v3; // rbx
  int (__fastcall *v4)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rsi

  if ( a2 )
    *((_DWORD *)this + 11) = *(_DWORD *)a2;
  v3 = *((_QWORD *)this + 23);
  if ( !v3 )
    return -2147467259;
  v4 = *(int (__fastcall **)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v3 + 136LL);
  if ( v4 == ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits )
    return ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
             *((ExecutionModel::ResourceSet **)this + 23),
             a2,
             a3);
  else
    return v4(*((ExecutionModel::ResourceSet **)this + 23), a2, a3);
}
