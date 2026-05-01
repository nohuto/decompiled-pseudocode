/*
 * XREFs of ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180016AE0
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180017040 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ @ 0x1800153B0 (-Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x180017930 (-Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::Release(
        ExecutionModel::ResourceSetServerProxy *this,
        unsigned int a2)
{
  unsigned __int32 v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(ExecutionModel::ResourcePolicyEngineServerProxy *, unsigned int); // rbp
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSetImpl *); // rbp
  unsigned int (__fastcall *v10)(ExecutionModel::WnfStateRegistration *__hidden); // rbp

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 && this )
  {
    *(_QWORD *)this = &ExecutionModel::ResourceSetServerProxy::`vftable';
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      v10 = *(unsigned int (__fastcall **)(ExecutionModel::WnfStateRegistration *__hidden))(*(_QWORD *)v5 + 16LL);
      if ( v10 == ExecutionModel::WnfStateRegistration::Release )
        ExecutionModel::WnfStateRegistration::Release(*((ExecutionModel::WnfStateRegistration **)this + 4));
      else
        v10(*((ExecutionModel::WnfStateRegistration **)this + 4));
    }
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourcePolicyEngineServerProxy *, unsigned int))(*(_QWORD *)v6 + 16LL);
      if ( v7 == ExecutionModel::ResourcePolicyEngineServerProxy::Release )
        ExecutionModel::ResourcePolicyEngineServerProxy::Release(
          *((ExecutionModel::ResourcePolicyEngineServerProxy **)this + 3),
          a2);
      else
        ((void (__fastcall *)(_QWORD))v7)(*((_QWORD *)this + 3));
    }
    v8 = *((_QWORD *)this + 2);
    if ( v8 )
    {
      v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v8 + 16LL);
      if ( v9 == ExecutionModel::ResourceSetImpl::Release )
        ExecutionModel::ResourceSetImpl::Release(*((ExecutionModel::ResourceSetImpl **)this + 2));
      else
        v9(*((ExecutionModel::ResourceSetImpl **)this + 2));
    }
    operator delete(this);
  }
  return v3;
}
