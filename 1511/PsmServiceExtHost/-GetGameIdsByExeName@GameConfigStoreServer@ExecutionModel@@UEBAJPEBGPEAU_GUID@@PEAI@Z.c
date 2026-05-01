/*
 * XREFs of ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180049390
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x18001CF08 (-GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdsByExeName(
        HKEY *this,
        ExecutionModel::Internal *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  __int64 result; // rax
  unsigned __int16 v8[48]; // [rsp+20h] [rbp-88h] BYREF

  result = ExecutionModel::Internal::CalcSHA1(a2, v8, (unsigned __int16 *)a3);
  if ( (int)result >= 0 )
    return ExecutionModel::Internal::GetGameIdsForParent(this + 2, v8, (const unsigned __int16 *)a3, a4);
  return result;
}
