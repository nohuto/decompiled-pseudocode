/*
 * XREFs of ?GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x18001C4D0
 * Callers:
 *     GcsSrv_GetGlobalProperty @ 0x18001CFA0 (GcsSrv_GetGlobalProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGlobalProperty(
        __int64 a1,
        int a2,
        BYTE *lpData,
        DWORD *lpcbData)
{
  LSTATUS v4; // eax
  signed int v5; // ecx
  DWORD Type; // [rsp+58h] [rbp+20h] BYREF

  if ( !lpcbData || a2 )
    return 2147942487LL;
  v4 = RegQueryValueExW(
         *(HKEY *)(a1 + 24),
         (LPCWSTR)ExecutionModel::Data::GlobalPropertyInfo,
         0LL,
         &Type,
         lpData,
         lpcbData);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v5 >= 0 && Type != *((_DWORD *)&ExecutionModel::Data::GlobalPropertyInfo + 2) )
    return (unsigned int)-2147418113;
  return (unsigned int)v5;
}
