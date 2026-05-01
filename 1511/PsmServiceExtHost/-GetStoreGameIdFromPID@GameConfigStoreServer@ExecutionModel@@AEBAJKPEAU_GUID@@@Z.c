/*
 * XREFs of ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C550
 * Callers:
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x18001C740 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001BCA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetStoreGameIdFromPID(
        ExecutionModel::GameConfigStoreServer *this,
        DWORD dwProcessId,
        struct _GUID *a3)
{
  char *v5; // rbx
  unsigned __int16 **v6; // r8
  int ProcessAppId; // edi
  int (*v9)(ExecutionModel::GameConfigStoreServer *__hidden, const unsigned __int16 *, struct _GUID *); // rbx
  int GameIdByAUMID; // eax
  signed int LastError; // eax
  HLOCAL hMem; // [rsp+40h] [rbp+18h] BYREF

  hMem = 0LL;
  *a3 = (struct _GUID)xmmword_180059730;
  v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( v5 )
    goto LABEL_2;
  LastError = GetLastError();
  ProcessAppId = LastError;
  if ( LastError > 0 )
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
  if ( ProcessAppId >= 0 )
  {
LABEL_2:
    ProcessAppId = CallerIdentity::GetProcessAppId(v5, (unsigned int **)&hMem, v6);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
    if ( ProcessAppId >= 0 )
    {
      v9 = *(int (**)(ExecutionModel::GameConfigStoreServer *__hidden, const unsigned __int16 *, struct _GUID *))(*(_QWORD *)this + 40LL);
      if ( v9 == ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID )
        GameIdByAUMID = ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID(
                          this,
                          (const unsigned __int16 *)hMem,
                          a3);
      else
        GameIdByAUMID = ((__int64 (__fastcall *)(ExecutionModel::GameConfigStoreServer *, HLOCAL, struct _GUID *))v9)(
                          this,
                          hMem,
                          a3);
      ProcessAppId = GameIdByAUMID;
    }
  }
  LocalFree(hMem);
  return (unsigned int)ProcessAppId;
}
