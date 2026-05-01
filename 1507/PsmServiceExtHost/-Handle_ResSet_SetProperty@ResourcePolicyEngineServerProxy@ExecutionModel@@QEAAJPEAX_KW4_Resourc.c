/*
 * XREFs of ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80
 * Callers:
 *     Srv_ResSet_SetProperty @ 0x1800170A0 (Srv_ResSet_SetProperty.c)
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180014AD0 (-UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTA.c)
 *     ?SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z @ 0x180014B40 (-SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x1800153E0 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_SetProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v5; // r14
  int ResourceSetById; // ebp
  ExecutionModel::ResourceSetImpl *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  __int64 (__fastcall *v12)(ExecutionModel::ResourceSetImpl *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rbp
  int updated; // eax
  __int64 (__fastcall *v14)(ExecutionModel::ResourceSetImpl *); // rdi
  unsigned __int8 v16; // bp
  struct _RTL_CRITICAL_SECTION *v17; // rsi
  void (__fastcall *v18)(ExecutionModel::ResourceSetImpl *, char); // r14
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  ExecutionModel::ResourceSetImpl *v20; // [rsp+58h] [rbp+10h] BYREF

  v5 = g_pResourcePolicyEngineServerProxy;
  ResourceSetById = 0;
  v7 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 )
  {
    if ( a4 )
    {
      if ( a4 != 5 )
        goto LABEL_9;
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v5,
                          a3,
                          &v20,
                          &v19);
      if ( ResourceSetById >= 0 )
      {
        v7 = v20;
        if ( v20 )
        {
          v11 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v5 + 12);
          EnterCriticalSection(v11 + 1);
          v12 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v7 + 136LL);
          if ( v12 == ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits )
            updated = ExecutionModel::ResourceSetImpl::UpdateImportanceAndResourceLimits(
                        v7,
                        (union _RM_ACTIVITY_IMPORTANCE *)&a5,
                        0LL);
          else
            updated = v12(v7, (union _RM_ACTIVITY_IMPORTANCE *)&a5, 0LL);
          ResourceSetById = updated;
          LeaveCriticalSection(v11 + 1);
        }
        else
        {
          ResourceSetById = -2147024809;
        }
        goto LABEL_9;
      }
      goto LABEL_19;
    }
    if ( a5 < 2 )
    {
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v5,
                          a3,
                          &v20,
                          &v19);
      if ( ResourceSetById >= 0 )
      {
        v16 = a5 != 0;
        v7 = v20;
        if ( v20 )
        {
          v17 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v5 + 12);
          EnterCriticalSection(v17 + 1);
          v18 = *(void (__fastcall **)(ExecutionModel::ResourceSetImpl *, char))(*(_QWORD *)v7 + 128LL);
          if ( v18 == ExecutionModel::ResourceSetImpl::SetAutoRelease )
            ExecutionModel::ResourceSetImpl::SetAutoRelease(v7, v16);
          else
            v18(v7, v16);
          LeaveCriticalSection(v17 + 1);
          ResourceSetById = 0;
        }
        else
        {
          ResourceSetById = -2147024809;
        }
        goto LABEL_9;
      }
LABEL_19:
      v7 = v20;
      goto LABEL_9;
    }
    ResourceSetById = -2147467259;
  }
  else
  {
    ResourceSetById = -2147467259;
  }
LABEL_9:
  LeaveCriticalSection(v10);
  if ( v7 )
  {
    v14 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v7 + 16LL);
    if ( v14 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v7);
    else
      v14(v7);
  }
  return (unsigned int)ResourceSetById;
}
