/*
 * XREFs of ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x18001C620
 * Callers:
 *     ExecutionModel::ReadPolicies @ 0x18001BE60 (ExecutionModel--ReadPolicies.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180043F30 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x18001C764 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 */

int __fastcall Common::RegistryKey::EnumKey(
        HKEY *this,
        DWORD a2,
        struct Common::StringBuffer *a3,
        struct _FILETIME *a4)
{
  WCHAR *v7; // r8
  int v8; // eax
  int v9; // esi
  unsigned int v10; // esi
  HKEY v11; // rcx
  int result; // eax
  bool v13; // sf
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // eax
  bool v17; // sf
  DWORD cbMaxSubKeyLen; // [rsp+A0h] [rbp+18h] BYREF
  struct _FILETIME *cchName; // [rsp+A8h] [rbp+20h] BYREF

  cchName = a4;
  while ( 1 )
  {
    v7 = (WCHAR *)*((_QWORD *)a3 + 1);
    if ( v7 )
    {
      v8 = *((_DWORD *)a3 + 4);
      if ( v8 )
        v9 = v8 - 1;
      else
        v9 = 0;
      v10 = v9 + 1;
    }
    else
    {
      v10 = 0;
    }
    v11 = *this;
    LODWORD(cchName) = v10;
    result = RegEnumKeyExW(v11, a2, v7, (LPDWORD)&cchName, 0LL, 0LL, 0LL, 0LL);
    v13 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v13 = result < 0;
    }
    if ( !v13 )
    {
      v14 = (unsigned int)cchName;
      if ( (unsigned int)cchName <= v10 )
        break;
    }
    if ( result == -2147024662 )
    {
      result = RegQueryInfoKeyW(*this, 0LL, 0LL, 0LL, 0LL, &cbMaxSubKeyLen, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      v17 = result < 0;
      if ( result > 0 )
      {
        result = (unsigned __int16)result | 0x80070000;
        v17 = result < 0;
      }
      if ( !v17 )
      {
        result = Common::StringBuffer::SetCapacity(a3, cbMaxSubKeyLen);
        if ( result >= 0 )
          continue;
      }
    }
    return result;
  }
  v15 = *((_DWORD *)a3 + 4);
  if ( v15 )
    v16 = v15 - 1;
  else
    v16 = 0;
  if ( (unsigned int)cchName <= v16
    || (result = Common::StringBuffer::SetCapacity(a3, (unsigned int)cchName), result >= 0) )
  {
    *(_DWORD *)a3 = v14;
    if ( (_DWORD)v14 )
      *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v14) = 0;
    return 0;
  }
  return result;
}
