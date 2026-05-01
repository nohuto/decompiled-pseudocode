/*
 * XREFs of ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000D87C
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D9EC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E4CC (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TransitionFGSharedResources(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 **j; // rsi
  __int64 **i; // rsi
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // [rsp+30h] [rbp-39h] BYREF
  ExecutionModel::ResourceSet *v11; // [rsp+38h] [rbp-31h] BYREF
  ExecutionModel::ResourceSet *v12; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  ExecutionModel::ResourceSet **v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  ExecutionModel::ResourceSet **v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  v10 = 0;
  if ( *((_QWORD *)a2 + 232) && *((_QWORD *)this + 232) )
  {
    for ( i = (__int64 **)((char *)a2 + 1888);
          *i != (__int64 *)i;
          utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
            (__int64)i,
            &v11,
            *i) )
    {
      ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing((ExecutionModel::ResourceSet *)(*i)[2], a2);
    }
    *((_QWORD *)a2 + 232) = 0LL;
  }
  if ( (*((_BYTE *)a2 + 1766) & 1) != 0 )
  {
    for ( j = (__int64 **)((char *)this + 1888);
          *j != (__int64 *)j;
          utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
            (__int64)this + 1888,
            &v11,
            *j) )
    {
      ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing((ExecutionModel::ResourceSet *)(*j)[2], this);
      v10 = ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
              a2,
              (struct ExecutionModel::ResourceSet *)(*j)[2],
              1);
      if ( v10 < 0 )
        goto LABEL_15;
      ExecutionModel::ResourceSet::AddBGResourceSetForSharing((ExecutionModel::ResourceSet *)(*j)[2], a2, 0);
    }
    *((_QWORD *)this + 232) = 0LL;
  }
  if ( v10 < 0 )
  {
LABEL_15:
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(this, 9uLL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &v10;
      v17 = &v12;
      v20 = &v11;
      v15 = 4;
      v12 = this;
      v18 = v7 - 1;
      v11 = this;
      v21 = v7 - 1;
      TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 - 1), &unk_18006480F, v8, v9, 5u, &pData);
    }
    ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)a2, 1u);
  }
  return (unsigned int)v10;
}
