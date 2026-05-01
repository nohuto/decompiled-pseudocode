/*
 * XREFs of ?ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DB54
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 *     ?RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18004E020 (-RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ.c)
 * Callees:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800128B0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::ChangeCustomMemoryPolicy(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::ResourceSetImpl *a2,
        unsigned __int64 a3)
{
  const struct _MemoryPolicyManifest *v3; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  int v9; // ecx
  __int64 result; // rax
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B0h]
  __int128 v14; // [rsp+60h] [rbp-A0h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-60h]
  _BYTE v19[368]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0LL;
  v12 = *(_OWORD *)((char *)a2 + 40);
  v6 = *(_OWORD *)((char *)a2 + 56);
  v14 = *(_OWORD *)((char *)a2 + 72);
  v13 = v6;
  v7 = *(_OWORD *)((char *)a2 + 88);
  v16 = *(_OWORD *)((char *)a2 + 104);
  v15 = v7;
  v8 = *(_OWORD *)((char *)a2 + 120);
  v18 = *(_OWORD *)((char *)a2 + 136);
  v17 = v8;
  if ( a3 )
  {
    *((_QWORD *)&v12 + 1) = a3;
    v3 = (const struct _MemoryPolicyManifest *)((char *)&v12 + 8);
    *((_QWORD *)&v13 + 1) = a3 >> 1;
    *(_QWORD *)&v14 = 13 * (a3 >> 4);
  }
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v19);
  v9 = *((_DWORD *)a2 + 38);
  v11 = 0;
  result = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v9, &v12, (__int64)v19);
  if ( (int)result >= 0 )
    return ExecutionModel::ResourceSetImpl::BeginTransitionBackingResourceSet(
             a2,
             *(struct IResourceManager **)(*((_QWORD *)this + 2) + 24LL),
             (struct ExecutionModel::_ResourceSetInfo *)v19,
             v3,
             &v11);
  return result;
}
