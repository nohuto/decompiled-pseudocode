/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180014AD0
 * Callers:
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 * Callees:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800102A0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSetImpl *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rdi

  if ( a2 )
    *((_DWORD *)this + 9) = *(_DWORD *)a2;
  v3 = *((_QWORD *)this + 22);
  if ( !v3 )
    return 2147500037LL;
  v4 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v3 + 136LL);
  if ( v4 == ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits )
    return ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
             *((ExecutionModel::ResourceSet **)this + 22),
             (ExecutionModel::ResourceSetImpl *)((char *)this + 36),
             0LL);
  else
    return v4(*((ExecutionModel::ResourceSet **)this + 22), (ExecutionModel::ResourceSetImpl *)((char *)this + 36), 0LL);
}
