/*
 * XREFs of ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z @ 0x18004AA70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::RemoveGameConfig(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 result; // rax
  const WCHAR *v6; // rcx
  unsigned __int16 *v7; // [rsp+20h] [rbp-78h] BYREF
  WCHAR v8[40]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *(_QWORD *)&a2->Data1;
  v3 = *(_QWORD *)&a2->Data1 == 0LL;
  LODWORD(v7) = 36;
  if ( v3 )
    v2 = *(_QWORD *)a2->Data4;
  if ( !v2 )
    return 2147942487LL;
  result = Common::Guid::Encode(a2, v8, 0x24u, (unsigned int *)&v7);
  if ( (int)result >= 0 )
  {
    if ( 2 * (unsigned __int64)(unsigned int)v7 >= 0x4A )
      _report_rangecheckfailure();
    v6 = (const WCHAR *)*((_QWORD *)this + 4);
    v8[(unsigned int)v7] = 0;
    return ExecutionModel::Internal::RemoveFromPermanentStore(
             v6,
             (ExecutionModel::GameConfigStoreServer *)((char *)this + 16),
             (HKEY *)this + 1,
             v8);
  }
  return result;
}
