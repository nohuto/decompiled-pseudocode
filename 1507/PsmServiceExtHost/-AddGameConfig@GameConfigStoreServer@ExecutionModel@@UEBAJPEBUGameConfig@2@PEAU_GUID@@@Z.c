/*
 * XREFs of ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20
 * Callers:
 *     GcsSrv_AddGameConfig @ 0x18001B450 (GcsSrv_AddGameConfig.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18001B4F4 (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?VerifyValidToAddToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@@Z @ 0x18001B554 (-VerifyValidToAddToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameC.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAEKPEAK@Z @ 0x18001B904 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAEKPEAK@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x180045D48 (-VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::AddGameConfig(
        const WCHAR **this,
        PCWSTR *a2,
        struct _GUID *a3)
{
  const struct ExecutionModel::GameConfig *v6; // rdx
  int IsValidAUMID; // ebx
  RPC_STATUS v8; // eax
  __int64 v9; // r8
  const struct ExecutionModel::GameConfig *v10; // r9
  unsigned __int8 *v11; // rdx
  __int64 v12; // r8
  _WORD *v13; // rax
  __int16 v14; // cx
  const unsigned __int16 *v15; // r8
  struct ExecutionModel::GameConfig *v17; // [rsp+20h] [rbp-99h]
  bool v18; // [rsp+28h] [rbp-91h]
  HKEY v19; // [rsp+30h] [rbp-89h] BYREF
  HKEY v20; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int16 v21[4]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-71h] BYREF
  UUID Uuid; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 v24[48]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v25[72]; // [rsp+90h] [rbp-29h] BYREF
  __int16 v26; // [rsp+D8h] [rbp+1Fh]

  *(_QWORD *)v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  IsValidAUMID = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(this[1], (HKEY *)v21, &v19, &v20);
  if ( IsValidAUMID < 0 )
    goto LABEL_11;
  if ( a3 )
    *a3 = (struct _GUID)xmmword_180050678;
  IsValidAUMID = ExecutionModel::Internal::ValidateGameConfig((ExecutionModel::Internal *)a2, v6);
  if ( IsValidAUMID < 0 )
    goto LABEL_11;
  v8 = UuidCreate(&Uuid);
  if ( v8 && v8 != 1824 )
  {
    Common::AutoHandleCloseHKEY<HKEY__ *>(v20);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v19);
    Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v21);
    return 2147549183LL;
  }
  IsValidAUMID = Common::Guid::Encode(&Uuid, v24, v9, &v22);
  if ( IsValidAUMID < 0 )
    goto LABEL_11;
  if ( v22 )
  {
    v11 = v24;
    v12 = v22;
    v13 = v25;
    do
    {
      v14 = *v11++;
      *v13++ = v14;
      --v12;
    }
    while ( v12 );
  }
  v26 = 0;
  IsValidAUMID = ExecutionModel::Internal::VerifyValidToAddToPermanentStore(
                   (ExecutionModel::Internal *)&v19,
                   (struct Common::RegistryKey *)&v20,
                   (struct Common::RegistryKey *)a2,
                   v10);
  if ( IsValidAUMID < 0 )
  {
LABEL_11:
    Common::AutoHandleCloseHKEY<HKEY__ *>(v20);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v19);
    Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v21);
    return (unsigned int)IsValidAUMID;
  }
  if ( *((_DWORD *)a2 + 5) != 2 )
  {
LABEL_18:
    LOBYTE(v17) = 1;
    IsValidAUMID = ExecutionModel::Internal::SerializeToPermanentStore(
                     (ExecutionModel::Internal *)&v19,
                     (struct Common::RegistryKey *)&v20,
                     (struct Common::RegistryKey *)v25,
                     (const unsigned __int16 *)a2,
                     v17,
                     v18);
    if ( IsValidAUMID >= 0 )
    {
      if ( a3 )
        *a3 = Uuid;
    }
    goto LABEL_11;
  }
  if ( !*((_DWORD *)a2 + 4) )
  {
    IsValidAUMID = ExecutionModel::Internal::VerifyIsValidAUMID(this[1], a2[3], v15);
    if ( IsValidAUMID < 0 )
      goto LABEL_11;
    goto LABEL_18;
  }
  Common::AutoHandleCloseHKEY<HKEY__ *>(v20);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v19);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v21);
  return 2147942487LL;
}
