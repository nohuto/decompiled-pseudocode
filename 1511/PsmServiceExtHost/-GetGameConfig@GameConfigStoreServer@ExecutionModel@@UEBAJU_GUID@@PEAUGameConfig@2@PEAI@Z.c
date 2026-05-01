/*
 * XREFs of ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800492B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180048BF8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameConfig(
        HKEY *this,
        struct _GUID *a2,
        struct ExecutionModel::GameConfig *a3,
        struct ExecutionModel::GameConfig *a4)
{
  __int64 v4; // rax
  bool v6; // zf
  __int64 result; // rax
  unsigned int *v10; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v11[40]; // [rsp+30h] [rbp-78h] BYREF

  v4 = *(_QWORD *)&a2->Data1;
  v6 = *(_QWORD *)&a2->Data1 == 0LL;
  LODWORD(v10) = 36;
  if ( v6 )
    v4 = *(_QWORD *)a2->Data4;
  if ( !v4 || !a4 )
    return 2147942487LL;
  result = Common::Guid::Encode(a2, v11, 0x24u, (unsigned int *)&v10);
  if ( (int)result >= 0 )
  {
    if ( 2 * (unsigned __int64)(unsigned int)v10 >= 0x4A )
      _report_rangecheckfailure();
    v11[(unsigned int)v10] = 0;
    result = ExecutionModel::Internal::DeserializeFromPermanentStore(
               this + 1,
               (struct Common::RegistryKey *)v11,
               (unsigned __int16 *)a3,
               a4);
    if ( (int)result >= 0 )
    {
      if ( a3 )
        *((_DWORD *)a3 + 8) |= 1u;
    }
  }
  return result;
}
