/*
 * XREFs of ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x180002B90
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180002A60 (GcsSrv_GetGameIdByAUMID.c)
 * Callees:
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x180002AF8 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x1800461BC (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID(
        ExecutionModel::Internal **this,
        ExecutionModel::Internal *a2,
        struct _GUID *a3)
{
  int v6; // ebx
  unsigned __int16 *v7; // r8
  int GameIdsForParent; // eax
  const unsigned __int16 *v10; // r9
  void (__fastcall *v11)(ExecutionModel::Internal **, __int128 *); // rbx
  struct _GUID v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v14[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v17[48]; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)v12.Data4 = 0LL;
  v13 = 0LL;
  v6 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(
         this[1],
         v14,
         (struct Common::RegistryKey *)v12.Data4,
         (struct Common::RegistryKey *)&v13,
         (struct Common::RegistryKey *)0x2400000001LL);
  if ( v6 >= 0 )
  {
    if ( !a2 || !a3 )
    {
      v6 = -2147024809;
      goto LABEL_8;
    }
    *a3 = (struct _GUID)xmmword_180050678;
    GameIdsForParent = ExecutionModel::Internal::CalcSHA1(a2, v17, v7);
    if ( GameIdsForParent < 0
      || (GameIdsForParent = ExecutionModel::Internal::GetGameIdsForParent(
                               (ExecutionModel::Internal *)v12.Data4,
                               (struct Common::RegistryKey *)v17,
                               (const unsigned __int16 *)a3,
                               &v12),
          GameIdsForParent < 0) )
    {
      v6 = GameIdsForParent;
      goto LABEL_8;
    }
    if ( v12.Data1 != 1 )
      goto LABEL_7;
    v6 = Common::Guid::Encode(a3, v16, 0x24u, (unsigned int *)&v12.Data2);
    if ( v6 >= 0 )
    {
      if ( 2 * (unsigned __int64)*(unsigned int *)&v12.Data2 >= 0x4A )
        _report_rangecheckfailure();
      v16[*(unsigned int *)&v12.Data2] = 0;
      if ( ExecutionModel::Internal::VerifyParentIdentifier(
             (ExecutionModel::Internal *)&v13,
             (struct Common::RegistryKey *)v17,
             v16,
             v10) < 0 )
      {
        v11 = (void (__fastcall *)(ExecutionModel::Internal **, __int128 *))*((_QWORD *)*this + 1);
        v15 = (__int128)*a3;
        v11(this, &v15);
LABEL_7:
        v6 = -2147024894;
      }
    }
  }
LABEL_8:
  Common::AutoHandleCloseHKEY<HKEY__ *>(v13);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(_QWORD *)v12.Data4);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(_QWORD *)v14);
  return (unsigned int)v6;
}
