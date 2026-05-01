/*
 * XREFs of ?ReadExternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAU_ResourceSetInfo@2@@Z @ 0x180008140
 * Callers:
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180008260 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::ReadExternalResourceSetTypeInfo(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        HKEY a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  BYTE *v5; // rdi
  __int64 v6; // rsi
  const WCHAR **v7; // rbx
  const WCHAR *v8; // rdx
  _DWORD *v9; // rdi
  __int64 i; // rcx
  HKEY phkResult; // [rsp+30h] [rbp-28h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  BYTE lpData; // [rsp+78h] [rbp+20h] BYREF

  v13 = HIDWORD(this);
  phkResult = 0LL;
  cbData = 4;
  if ( !RegQueryValueExW(a2, L"StandardExternalResources", 0LL, 0LL, &lpData, &cbData) )
  {
    v9 = (_DWORD *)((char *)a3 + 156);
    for ( i = 44LL; i; --i )
      *v9++ = 1;
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  phkResult = 0LL;
  if ( !RegOpenKeyW(a2, L"ExternalResources", &phkResult) )
  {
    v5 = (BYTE *)a3 + 156;
    v6 = 45LL;
    v7 = (const WCHAR **)off_18001D2E8;
    do
    {
      v8 = *v7;
      cbData = 4;
      RegQueryValueExW(phkResult, v8, 0LL, 0LL, v5, &cbData);
      v5 += 4;
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
