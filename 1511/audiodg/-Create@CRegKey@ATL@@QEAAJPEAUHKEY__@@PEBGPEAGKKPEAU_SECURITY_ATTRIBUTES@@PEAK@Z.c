/*
 * XREFs of ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x140036E50
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x140036E24 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CRegKey::Create(HKEY *this, HKEY hKey, LPCWSTR lpSubKey, unsigned __int16 *a4, unsigned int a5)
{
  unsigned int v6; // ecx
  HKEY v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = RegCreateKeyExW(hKey, lpSubKey, 0, 0LL, 0, 0x2001Fu, 0LL, &v8, &a5);
  if ( !v6 )
  {
    v6 = ATL::CRegKey::Close(this);
    *this = v8;
  }
  return v6;
}
