/*
 * XREFs of ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x1800150D0 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 *     ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180015588 (-Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_K.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x180015640 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     Srv_ResSet_UpdateImportanceAndResourceLimits @ 0x18001FA20 (Srv_ResSet_UpdateImportanceAndResourceLimits.c)
 *     ?Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z @ 0x18004D1C4 (-Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 *     ?Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KK@Z @ 0x18004D2D0 (-Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned __int16 *v10; // r8
  __int64 v11; // r10
  int v12; // eax
  char v13; // cl
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp+18h]

  v20 = a2;
  if ( !a3 )
    return 2147942487LL;
  v7 = (_QWORD *)(a1 + 56);
  *a3 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  if ( !v8 )
    goto LABEL_16;
  v9 = 0;
  v10 = (unsigned __int16 *)&v20;
  v11 = 4LL;
  do
  {
    v12 = *v10++;
    v9 = (1025 * (v9 + v12)) ^ ((1025 * (v9 + v12)) >> 6);
    --v11;
  }
  while ( v11 );
  v21 = v9;
  v13 = *(_BYTE *)(a1 + 88);
  LODWORD(v21) = 32769 * (((unsigned int)(9 * v21) >> 11) ^ (9 * v21));
  v14 = *(_QWORD **)(v8 + 16 * (v21 & ((8LL << v13) - 1)));
  if ( v14 && (v15 = **(_QWORD ***)(v8 + 16 * (v21 & ((8LL << v13) - 1)) + 8), v14 != v15) )
  {
    while ( 1 )
    {
      v16 = v14[2];
      if ( v16 >= v21 )
      {
        if ( v16 > v21 )
          goto LABEL_16;
        if ( a2 == v14[3] )
          break;
      }
      v14 = (_QWORD *)*v14;
      if ( v14 == v15 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v14 = v7;
  }
  *a4 = v14;
  if ( v14 == v7 )
    return 2147943568LL;
  v17 = v14[4];
  if ( !v17 )
    return 2147500037LL;
  v18 = *(_QWORD *)(v17 + 16);
  if ( !v18 )
    return 2147500037LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  result = 0LL;
  *a3 = v18;
  return result;
}
