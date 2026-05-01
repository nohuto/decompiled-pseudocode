/*
 * XREFs of ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180005640 (GcsSrv_GetGameIdByAUMID.c)
 *     ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C550 (-GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x18001CF08 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x18004B700 (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID(
        ExecutionModel::GameConfigStoreServer *this,
        ExecutionModel::Internal *a2,
        struct _GUID *a3)
{
  __int64 result; // rax
  const unsigned __int16 *v6; // r9
  unsigned int v7; // ebx
  void (__fastcall *v8)(ExecutionModel::GameConfigStoreServer *, __int128 *); // rbx
  struct _GUID v9; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v10; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int16 v11[40]; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int16 v12[48]; // [rsp+90h] [rbp-39h] BYREF

  v9.Data1 = 1;
  *(_DWORD *)&v9.Data2 = 36;
  if ( !a2 || !a3 )
    return 2147942487LL;
  *a3 = (struct _GUID)xmmword_180059730;
  result = ExecutionModel::Internal::CalcSHA1(a2, v12, (unsigned __int16 *)a3);
  if ( (int)result >= 0 )
  {
    result = ExecutionModel::Internal::GetGameIdsForParent(
               (ExecutionModel::GameConfigStoreServer *)((char *)this + 16),
               (struct Common::RegistryKey *)v12,
               (const unsigned __int16 *)a3,
               &v9,
               *(unsigned int **)&v9.Data1);
    if ( (int)result >= 0 )
    {
      if ( v9.Data1 != 1 )
        return 2147942402LL;
      result = Common::Guid::Encode(a3, v11, 0x24u, (unsigned int *)&v9.Data2);
      v7 = result;
      if ( (int)result >= 0 )
      {
        if ( 2 * (unsigned __int64)*(unsigned int *)&v9.Data2 >= 0x4A )
          _report_rangecheckfailure();
        v11[*(unsigned int *)&v9.Data2] = 0;
        if ( ExecutionModel::Internal::VerifyParentIdentifier(
               (ExecutionModel::GameConfigStoreServer *)((char *)this + 8),
               (struct Common::RegistryKey *)v12,
               v11,
               v6) >= 0 )
          return v7;
        v8 = *(void (__fastcall **)(ExecutionModel::GameConfigStoreServer *, __int128 *))(*(_QWORD *)this + 8LL);
        v10 = (__int128)*a3;
        v8(this, &v10);
        return 2147942402LL;
      }
    }
  }
  return result;
}
