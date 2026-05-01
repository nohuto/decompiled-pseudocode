/*
 * XREFs of ?NotifyPendingBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@QEAAJ_K@Z @ 0x18004EA08
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800128B0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::NotifyPendingBackingResourceSetTransition(
        ExecutionModel::ResourceSetImpl *this,
        unsigned __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+30h] [rbp-D0h]
  __int128 v12; // [rsp+40h] [rbp-C0h]
  __int128 v13; // [rsp+50h] [rbp-B0h]
  __int128 v14; // [rsp+60h] [rbp-A0h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-80h]
  _BYTE v17[368]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *(_OWORD *)((char *)this + 56);
  v10 = *(_OWORD *)((char *)this + 40);
  v4 = *(_OWORD *)((char *)this + 72);
  *((_QWORD *)&v10 + 1) = a2;
  v11 = v3;
  v5 = *(_OWORD *)((char *)this + 88);
  v12 = v4;
  v6 = *(_OWORD *)((char *)this + 104);
  *((_QWORD *)&v11 + 1) = a2 >> 1;
  v13 = v5;
  v7 = *(_OWORD *)((char *)this + 120);
  v14 = v6;
  v8 = *(_OWORD *)((char *)this + 136);
  *(_QWORD *)&v12 = 13 * (a2 >> 4);
  v15 = v7;
  v16 = v8;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v17);
  result = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(
             *((_DWORD *)this + 38),
             &v10,
             (__int64)v17);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 23) + 144LL))(*((_QWORD *)this + 23), v17);
  return result;
}
