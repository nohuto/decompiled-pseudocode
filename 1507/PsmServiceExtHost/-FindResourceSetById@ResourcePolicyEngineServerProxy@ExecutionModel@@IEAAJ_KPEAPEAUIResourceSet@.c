/*
 * XREFs of ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x1800153E0
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 *     ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180016428 (-Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_K.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x1800164E0 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     ?Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z @ 0x180047568 (-Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 *     ?Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KK@Z @ 0x180047674 (-Handle_ResSet_NotifyPendingTransition@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int16 *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  char v14; // cl
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = a2;
  if ( !a3 )
    return 2147942487LL;
  v7 = (_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 72);
  if ( !v8 )
    goto LABEL_16;
  v9 = 0LL;
  v10 = (unsigned __int16 *)&v21;
  v11 = 4LL;
  do
  {
    v12 = *v10++;
    v9 = (1025 * (v9 + v12)) ^ ((1025 * (v9 + v12)) >> 6);
    --v11;
  }
  while ( v11 );
  v13 = 32769 * ((9 * v9) ^ ((9 * v9) >> 11));
  v14 = *(_BYTE *)(a1 + 88);
  v15 = *(_QWORD **)(v8 + 16 * (v13 & ((8LL << v14) - 1)));
  if ( v15 && (v16 = **(_QWORD ***)(v8 + 16 * (v13 & ((8LL << v14) - 1)) + 8), v15 != v16) )
  {
    while ( 1 )
    {
      v17 = v15[2];
      if ( v17 >= v13 )
      {
        if ( v17 > v13 )
          goto LABEL_16;
        if ( a2 == v15[3] )
          break;
      }
      v15 = (_QWORD *)*v15;
      if ( v15 == v16 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v15 = v7;
  }
  *a4 = v15;
  if ( v15 == v7 )
    return 2147943568LL;
  v18 = v15[4];
  if ( !v18 )
    return 2147500037LL;
  v19 = *(_QWORD *)(v18 + 16);
  if ( !v19 )
    return 2147500037LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  result = 0LL;
  *a3 = v19;
  return result;
}
