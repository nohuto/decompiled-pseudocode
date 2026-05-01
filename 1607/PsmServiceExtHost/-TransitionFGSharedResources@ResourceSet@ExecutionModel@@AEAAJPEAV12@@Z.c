/*
 * XREFs of ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180011B4C
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpPolicyTryGetRevokeAction @ 0x1800343D0 (RmpPolicyTryGetRevokeAction.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E00 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TransitionFGSharedResources(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  _QWORD *j; // rdi
  _QWORD *i; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  _QWORD *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  v13 = 0;
  if ( *((_QWORD *)a2 + 232) && *((_QWORD *)this + 232) )
  {
    for ( i = (_QWORD *)((char *)a2 + 1896);
          (_QWORD *)*i != i;
          utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
            i,
            v15,
            *i) )
    {
      ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*i + 16LL), a2);
    }
    *((_QWORD *)a2 + 232) = 0LL;
  }
  if ( (*((_BYTE *)a2 + 1790) & 1) != 0 )
  {
    for ( j = (_QWORD *)((char *)this + 1896);
          (_QWORD *)*j != j;
          utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
            (char *)this + 1896,
            v15,
            *j) )
    {
      ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*j + 16LL), this);
      v13 = ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
              a2,
              *(struct ExecutionModel::ResourceSet **)(*j + 16LL),
              1);
      if ( v13 < 0 )
        goto LABEL_15;
      ExecutionModel::ResourceSet::AddBGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*j + 16LL), a2, 0);
    }
    *((_QWORD *)this + 232) = 0LL;
  }
  if ( v13 < 0 )
  {
LABEL_15:
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(this, 9uLL) )
    {
      v19 = 0;
      v17 = &v13;
      v7 = *((_QWORD *)this + 171);
      v18 = 4;
      v8 = (*(__int64 (__fastcall **)(char *))(v7 + 64))((char *)this + 1368);
      v22 = 0;
      v14 = v8;
      v21 = 8;
      v20 = &v14;
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 171) + 64LL))((char *)a2 + 1368);
      v25 = 0;
      v15[0] = v9;
      v23 = v15;
      v24 = 8;
      TlgWrite(v10, &unk_180042DF5, v11, v12, 5u, &pData);
    }
    RmpPolicyTryGetRevokeAction(a2, 2LL, &v14);
    ExecutionModel::ResourceSet::Revoke(a2, (unsigned int)v14, 1LL);
  }
  return (unsigned int)v13;
}
