/*
 * XREFs of ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x180027DBC
 * Callers:
 *     ExecutionModel::ReadPolicies @ 0x180026250 (ExecutionModel--ReadPolicies.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180049150 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 */

int __fastcall Common::RegistryKey::EnumKey(
        HKEY *this,
        DWORD a2,
        struct Common::StringBuffer *a3,
        struct _FILETIME *a4)
{
  WCHAR *v7; // r8
  unsigned int v8; // esi
  int v9; // eax
  HKEY v10; // rcx
  int result; // eax
  bool v12; // sf
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // eax
  bool v16; // sf
  DWORD cbMaxSubKeyLen; // [rsp+A0h] [rbp+18h] BYREF
  struct _FILETIME *cchName; // [rsp+A8h] [rbp+20h] BYREF

  cchName = a4;
  while ( 1 )
  {
    v7 = (WCHAR *)*((_QWORD *)a3 + 1);
    v8 = 0;
    if ( v7 )
    {
      v9 = *((_DWORD *)a3 + 4);
      if ( v9 )
        v8 = v9 - 1;
      ++v8;
    }
    v10 = *this;
    LODWORD(cchName) = v8;
    result = RegEnumKeyExW(v10, a2, v7, (LPDWORD)&cchName, 0LL, 0LL, 0LL, 0LL);
    v12 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v12 = result < 0;
    }
    if ( !v12 )
    {
      v13 = (unsigned int)cchName;
      if ( (unsigned int)cchName <= v8 )
        break;
    }
    if ( result == -2147024662 )
    {
      result = RegQueryInfoKeyW(*this, 0LL, 0LL, 0LL, 0LL, &cbMaxSubKeyLen, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      v16 = result < 0;
      if ( result > 0 )
      {
        result = (unsigned __int16)result | 0x80070000;
        v16 = result < 0;
      }
      if ( !v16 )
      {
        result = Common::StringBuffer::SetCapacity(a3, cbMaxSubKeyLen);
        if ( result >= 0 )
          continue;
      }
    }
    return result;
  }
  v14 = *((_DWORD *)a3 + 4);
  if ( v14 )
    v15 = v14 - 1;
  else
    v15 = 0;
  if ( (unsigned int)cchName <= v15
    || (result = Common::StringBuffer::SetCapacity(a3, (unsigned int)cchName), result >= 0) )
  {
    *(_DWORD *)a3 = v13;
    if ( (_DWORD)v13 )
      *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v13) = 0;
    return 0;
  }
  return result;
}
