/*
 * XREFs of ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007C04
 * Callers:
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180007EF0 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800080B8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetStoreGameIdFromPID(
        ExecutionModel::GameConfigStoreServer *this,
        DWORD a2,
        struct _GUID *a3)
{
  char *v5; // rbx
  unsigned __int16 **v6; // r8
  signed int ProcessAppId; // edi
  signed int LastError; // eax
  HLOCAL hMem; // [rsp+40h] [rbp+18h] BYREF

  hMem = 0LL;
  *a3 = (struct _GUID)xmmword_180050678;
  v5 = (char *)OpenProcess(0x1000u, 0, a2);
  if ( v5 )
    goto LABEL_2;
  LastError = GetLastError();
  ProcessAppId = LastError;
  if ( LastError > 0 )
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
  if ( ProcessAppId >= 0 )
  {
LABEL_2:
    ProcessAppId = CallerIdentity::GetProcessAppId(v5, &hMem, v6);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
    if ( ProcessAppId >= 0 )
      ProcessAppId = (*(__int64 (__fastcall **)(ExecutionModel::GameConfigStoreServer *, HLOCAL, struct _GUID *))(*(_QWORD *)this + 40LL))(
                       this,
                       hMem,
                       a3);
  }
  LocalFree(hMem);
  return (unsigned int)ProcessAppId;
}
