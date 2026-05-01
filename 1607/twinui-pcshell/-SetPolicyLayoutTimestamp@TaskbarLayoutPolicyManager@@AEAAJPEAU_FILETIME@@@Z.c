/*
 * XREFs of ?SetPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180007900
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006AA4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutPolicyManager::SetPolicyLayoutTimestamp(
        TaskbarLayoutPolicyManager *this,
        const BYTE *a2)
{
  LSTATUS v3; // ebx
  __int64 result; // rax
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = (HKEY)this;
  v3 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         0,
         0LL,
         0,
         2u,
         0LL,
         &hKey,
         0LL);
  if ( !v3 )
  {
    v3 = RegSetValueExW(hKey, L"LayoutXMLLastModified", 0, 3u, a2, 8u);
    if ( hKey != HKEY_CURRENT_USER )
      RegCloseKey(hKey);
  }
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    return (unsigned int)v3;
  return result;
}
