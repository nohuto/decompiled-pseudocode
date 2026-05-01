/*
 * XREFs of ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180044200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x180002AF8 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdsByExeName(
        ExecutionModel::GameConfigStoreServer *this,
        ExecutionModel::Internal *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  __int64 result; // rax
  const WCHAR *v8; // rcx
  int GameIdsForParent; // ebx
  HKEY v10; // [rsp+20h] [rbp-59h] BYREF
  HKEY v11; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int16 v12[4]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int16 v13[48]; // [rsp+40h] [rbp-39h] BYREF

  result = ExecutionModel::Internal::CalcSHA1(a2, v13, (unsigned __int16 *)a3);
  if ( (int)result >= 0 )
  {
    v8 = (const WCHAR *)*((_QWORD *)this + 1);
    *(_QWORD *)v12 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    GameIdsForParent = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v8, (HKEY *)v12, &v10, &v11);
    if ( GameIdsForParent >= 0 )
      GameIdsForParent = ExecutionModel::Internal::GetGameIdsForParent(
                           (ExecutionModel::Internal *)&v10,
                           (struct Common::RegistryKey *)v13,
                           (const unsigned __int16 *)a3,
                           a4);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v11);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v10);
    Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v12);
    return (unsigned int)GameIdsForParent;
  }
  return result;
}
