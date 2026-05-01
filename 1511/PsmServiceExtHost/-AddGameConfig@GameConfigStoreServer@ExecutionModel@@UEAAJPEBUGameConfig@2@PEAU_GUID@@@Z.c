/*
 * XREFs of ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x180049F50 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x18004B28C (-VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18004B91C (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

int __fastcall ExecutionModel::GameConfigStoreServer::AddGameConfig(PCWSTR *this, PCWSTR *a2, struct _GUID *a3)
{
  int result; // eax
  RPC_STATUS v7; // eax
  const unsigned __int16 *v8; // r8
  struct ExecutionModel::GameConfig *v9; // [rsp+20h] [rbp-69h]
  bool v10; // [rsp+28h] [rbp-61h]
  bool *v11; // [rsp+30h] [rbp-59h] BYREF
  UUID v12; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13[40]; // [rsp+50h] [rbp-39h] BYREF

  HIDWORD(v11) = 36;
  if ( a3 )
    *a3 = (struct _GUID)xmmword_180059730;
  result = ExecutionModel::Internal::ValidateGameConfig(
             (ExecutionModel::Internal *)a2,
             (const struct ExecutionModel::GameConfig *)a2);
  if ( result >= 0 )
  {
    v7 = UuidCreate(&v12);
    if ( v7 && v7 != 1824 )
      return -2147418113;
    result = Common::Guid::Encode(&v12, v13, 0x24u, (unsigned int *)&v11 + 1);
    if ( result >= 0 )
    {
      if ( 2 * (unsigned __int64)HIDWORD(v11) >= 0x4A )
        _report_rangecheckfailure();
      v13[HIDWORD(v11)] = 0;
      LOWORD(v11) = 0;
      result = ExecutionModel::Internal::MatchChildInPermanentStore(
                 (ExecutionModel::Internal *)(this + 2),
                 (struct Common::RegistryKey *)(this + 1),
                 (struct Common::RegistryKey *)a2,
                 (const struct ExecutionModel::GameConfig *)&v11,
                 (bool *)a3,
                 (struct _GUID *)((char *)&v11 + 1),
                 v11);
      if ( result >= 0 )
      {
        if ( (_BYTE)v11 )
          return -2147024713;
        if ( !BYTE1(v11) )
          return -2147024809;
      }
      if ( result >= 0 )
      {
        if ( *((_DWORD *)a2 + 5) != 2 )
          goto LABEL_19;
        if ( *((_DWORD *)a2 + 4) )
          return -2147024809;
        result = ExecutionModel::Internal::VerifyIsValidAUMID(this[4], a2[3], v8);
        if ( result >= 0 )
        {
LABEL_19:
          LOBYTE(v9) = 1;
          result = ExecutionModel::Internal::SerializeToPermanentStore(
                     (ExecutionModel::Internal *)(this + 2),
                     (struct Common::RegistryKey *)(this + 1),
                     (struct Common::RegistryKey *)v13,
                     (const unsigned __int16 *)a2,
                     v9,
                     v10);
          if ( result >= 0 )
          {
            if ( a3 )
              *a3 = v12;
          }
        }
      }
    }
  }
  return result;
}
