/*
 * XREFs of ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800440D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameConfig(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2,
        struct ExecutionModel::GameConfig *a3,
        struct ExecutionModel::GameConfig *a4)
{
  const WCHAR *v4; // rcx
  int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-49h] BYREF
  HKEY v13; // [rsp+28h] [rbp-41h] BYREF
  HKEY v14; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int16 v15[4]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int16 v16[40]; // [rsp+40h] [rbp-29h] BYREF

  v4 = (const WCHAR *)*((_QWORD *)this + 1);
  *(_QWORD *)v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 36;
  v8 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v4, (HKEY *)v15, &v14, &v13);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)&a2->Data1;
    if ( !*(_QWORD *)&a2->Data1 )
      v9 = *(_QWORD *)a2->Data4;
    if ( v9 && a4 )
    {
      v10 = Common::Guid::Encode(a2, v16, 0x24u, &v12);
      if ( v10 >= 0 )
      {
        if ( 2 * (unsigned __int64)v12 >= 0x4A )
          _report_rangecheckfailure();
        v16[v12] = 0;
        v8 = ExecutionModel::Internal::DeserializeFromPermanentStore(
               &v13,
               (struct Common::RegistryKey *)v16,
               (unsigned __int16 *)a3,
               a4);
      }
      else
      {
        v8 = v10;
      }
    }
    else
    {
      v8 = -2147024809;
    }
  }
  Common::AutoHandleCloseHKEY<HKEY__ *>(v13);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v14);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v15);
  return (unsigned int)v8;
}
