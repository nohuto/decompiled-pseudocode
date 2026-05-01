/*
 * XREFs of Srv_ResSet_UpdateImportanceAndResourceLimits @ 0x18001FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180013980 (-UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTA.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_ResSet_UpdateImportanceAndResourceLimits(
        __int64 a1,
        __int64 a2,
        union _RM_ACTIVITY_IMPORTANCE *a3,
        struct _RM_RESOURCE_LIMITS *a4)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ExecutionModel::ResourceSetImpl *v9; // rbx
  int ResourceSetById; // eax
  unsigned int v11; // ebp
  struct _RTL_CRITICAL_SECTION *v12; // rdi
  int (__fastcall *v13)(ExecutionModel::ResourceSetImpl *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rbp
  int updated; // eax
  unsigned int v15; // edx
  __int64 (__fastcall *v16)(ExecutionModel::ResourceSetImpl *, unsigned int); // rdi
  ExecutionModel::ResourceSetImpl *v18; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = g_pResourcePolicyEngineServerProxy;
  if ( !g_pResourcePolicyEngineServerProxy )
    return 2147549183LL;
  v19[0] = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  v9 = 0LL;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a2 )
  {
    ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v4, a2, &v18, v19);
    v9 = v18;
    v11 = ResourceSetById;
    if ( ResourceSetById >= 0 )
    {
      if ( v18 )
      {
        v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v4 + 12);
        EnterCriticalSection(v12 + 1);
        v13 = *(int (__fastcall **)(ExecutionModel::ResourceSetImpl *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v9 + 136LL);
        if ( v13 == ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits )
          updated = ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits(v9, a3, a4);
        else
          updated = v13(v9, a3, a4);
        v11 = updated;
        LeaveCriticalSection(v12 + 1);
      }
      else
      {
        v11 = -2147024809;
      }
    }
  }
  else
  {
    v11 = -2147467259;
  }
  LeaveCriticalSection(v8);
  if ( v9 )
  {
    v16 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v9 + 16LL);
    if ( v16 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v9, v15);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v16)(v9);
  }
  return v11;
}
