/*
 * XREFs of ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x18004AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x180027B3C (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x180027CC4 (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::SetGameProperty(
        __int64 a1,
        const struct _GUID *a2,
        int a3,
        const BYTE *a4,
        DWORD a5)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v9; // rdi
  LSTATUS Value; // ebx
  HKEY v12; // rcx
  bool v13; // cc
  const unsigned __int16 *v14; // rdx
  DWORD v15; // r8d
  LSTATUS v16; // eax
  HKEY hKey; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-59h] BYREF
  int v19; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-51h] BYREF
  int v21[3]; // [rsp+44h] [rbp-4Dh] BYREF
  unsigned __int16 v22[40]; // [rsp+50h] [rbp-41h] BYREF

  v5 = *(_QWORD *)&a2->Data1;
  v6 = *(_QWORD *)&a2->Data1 == 0LL;
  hKey = 0LL;
  v18 = 36;
  if ( v6 )
    v5 = *(_QWORD *)a2->Data4;
  if ( !v5 || !a4 || a3 < 0 || (unsigned __int64)a3 >= 0xF )
    return 2147942487LL;
  v9 = 3LL * a3;
  if ( !*((_BYTE *)&off_180065F80 + 24 * a3 + 12) )
    return 2147942405LL;
  Value = Common::Guid::Encode(a2, v22, 0x24u, &v18);
  if ( Value < 0 )
    goto LABEL_10;
  if ( 2 * (unsigned __int64)v18 >= 0x4A )
    _report_rangecheckfailure();
  v22[v18] = 0;
  Value = Common::RegistryKey::OpenSubKey((HKEY *)(a1 + 8), v22, 0xF003Fu, &hKey);
  if ( Value < 0 )
    goto LABEL_10;
  v14 = (&off_180065F80)[v9];
  if ( !*((_BYTE *)&off_180065F80 + 8 * v9 + 14) )
  {
    v16 = Common::RegistryKey::SetValue(&hKey, v14, a4, a5, *((_DWORD *)&off_180065F80 + 2 * v9 + 2));
    goto LABEL_29;
  }
  v18 = 4;
  Value = Common::RegistryKey::GetValue(&hKey, v14, (BYTE *)&v19, &v18, &v20);
  if ( Value < 0 )
  {
LABEL_10:
    v12 = hKey;
    v13 = (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
LABEL_11:
    if ( v13 )
      RegCloseKey(v12);
    return (unsigned int)Value;
  }
  v15 = *((_DWORD *)&off_180065F80 + 2 * v9 + 2);
  if ( v20 == v15 && v18 == 4 )
  {
    if ( a5 != 4 )
    {
      if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RegCloseKey(hKey);
      return 2147942487LL;
    }
    v21[0] = ((*(_DWORD *)a4 != 0) << LODWORD((&off_180065F80)[v9 + 1])) | v19 & ~(1 << LODWORD((&off_180065F80)[v9 + 1]));
    if ( v21[0] == v19 )
      goto LABEL_30;
    v16 = Common::RegistryKey::SetValue(&hKey, (&off_180065F80)[v9], (const BYTE *)v21, 4u, v15);
LABEL_29:
    Value = v16;
LABEL_30:
    v12 = hKey;
    v13 = (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
    goto LABEL_11;
  }
  if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey);
  return 2147549183LL;
}
