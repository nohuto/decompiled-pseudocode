/*
 * XREFs of ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270
 * Callers:
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180015500 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 * Callees:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000F790 (-Apply@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180013EF0 (-SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014C70 (-IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014C90 (-IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Apply(ExecutionModel::ResourceSetImpl *this)
{
  ExecutionModel::HostResourceInfo *v1; // rbp
  __int64 (__fastcall *v3)(ExecutionModel::ResourceSetImpl *); // rdi
  char IsValid; // al
  bool (__fastcall *v5)(ExecutionModel::ResourceSetImpl *); // rdi
  bool v6; // al
  ExecutionModel::ResourceSet *v7; // rdi
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rsi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // ecx

  v1 = (ExecutionModel::HostResourceInfo *)*((_QWORD *)this + 19);
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 80LL);
    if ( v3 == ExecutionModel::ResourceSetImpl::IsValid )
      IsValid = ExecutionModel::ResourceSetImpl::IsValid(this);
    else
      IsValid = v3(this);
    if ( IsValid )
    {
      v5 = *(bool (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 88LL);
      v6 = v5 == ExecutionModel::ResourceSetImpl::IsApplied
         ? ExecutionModel::ResourceSetImpl::IsApplied(this)
         : v5(this);
      if ( !v6 && (*((_BYTE *)this + 28) & 4) != 0 )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 19) + 24LL) )
        {
          v7 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 22);
          v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 24LL);
          if ( v8 == ExecutionModel::ResourceSet::Apply )
            v9 = ExecutionModel::ResourceSet::Apply(v7);
          else
            v9 = v8(*((ExecutionModel::ResourceSet **)this + 22));
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 32LL))(
                 *((_QWORD *)this + 22),
                 0LL);
        }
        v10 = v9;
        if ( v9 < 0 )
          return v10;
        v11 = *((_DWORD *)this + 7);
        if ( (v11 & 8) != 0 )
          goto LABEL_16;
        if ( (v11 & 1) != 0 )
        {
          *((_DWORD *)this + 7) = v11 | 8;
LABEL_16:
          v10 = 0;
          ExecutionModel::HostResourceInfo::SetAsApplied(v1, this);
          return v10;
        }
      }
    }
    return (unsigned int)-2147467259;
  }
  return 2147500037LL;
}
